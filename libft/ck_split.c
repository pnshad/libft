/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 22:46:32 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/14 03:09:23 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void run_split_test_case(char *src, char c, char** expected_output, char *test_case_description);
char        **ct_split(char const *s, char c);


void ck_split(void)
{
    char    *src;
    char    c;
    char    *des;
    char    *expected_output[] = {NULL};


    // Print header for the test cases
    printf("ft_split >>> testing...\n\n");

    // Test Case 1: an empty string
    src = "";
    c = ' ';
    des = "1: an empty string";
    run_split_test_case(src, c, expected_output, des);

    // Test Case 2: a string containing only delimiters
    src = "  ";
    c = ' ';
    des = "2: a string containing only delimiters";
    run_split_test_case(src, c, expected_output, des);

    // Test Case 3: a string containing no delimiters
    src = "hello";
    c = ' ';
    char    *expected_output_3[] = {"hello", NULL};
    des = "3: a string containing no delimiters";
    run_split_test_case(src, c, expected_output_3, des);

    // Test Case 4: a string containing multiple consecutive delimiters
    src = "hello   world  I'm   here";
    c = ' ';
    char    *expected_output_4[] = {"hello", "world", NULL};
    des = "4: a string containing multiple consecutive delimiters";
    run_split_test_case(src, c, expected_output_4, des);

    // Test Case 5: a string containing a delimiter at the beginning and end
    src = " hello world I'm here ";
    c = ' ';
    char    *expected_output_5[] = {"hello", "world", NULL};
    des = "5: a string containing a delimiter at the beginning and end";
    run_split_test_case(src, c, expected_output_5, des);

    // Test Case 6: a string containing a delimiter as the first character
    src = ",hello,world";
    c = ',';
    char    *expected_output_6[] = {"hello", "world", NULL};
    des = "6: a string containing a delimiter as the first character";
    run_split_test_case(src, c, expected_output_6, des);

    // Test Case 7: a string containing a delimiter as the last character
    src = "hello,world,I'm,here,";
    c = ',';
    char    *expected_output_7[] = {"hello", "world", NULL};
    des = "7: a string containing a delimiter as the last character";
    run_split_test_case(src, c, expected_output_7, des);

    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}

void run_split_test_case(char *src, char c, char** expected_output, char *test_case_description)
{
    printf("Test case %s\n", test_case_description);

	my_printa(src, strlen(src), sizeof(char), "%c");

    char **ft_output = ft_split(src, c);
    printf("\nft_split output:\n");
    for (int i = 0; ft_output[i] != NULL; i++) {
		my_printa(ft_output[i], strlen(ft_output[i]), sizeof(char), "%c");
		printf("\n");
    }

    char **ct_output = ct_split(src, c);
    printf("\nct_split output:\n");
    for (int i = 0; ct_output[i] != NULL; i++) {
		my_printa(ct_output[i], strlen(ct_output[i]), sizeof(char), "%c");
		printf("\n");
    }

    int i = 0;
    while (expected_output[i] != NULL) {
        assert(strcmp(expected_output[i], ft_output[i]) == 0);
        assert(strcmp(expected_output[i], ct_output[i]) == 0);
        i++;
    }

    printf("\n\n");

    // Free memory allocated by ft_split and ct_split
    i = 0;
    while (ft_output[i] != NULL) {
        free(ft_output[i]);
        i++;
    }
    free(ft_output);

    i = 0;
    while (ct_output[i] != NULL) {
        free(ct_output[i]);
        i++;
    }
    free(ct_output);
}

static int	ct_count_words(const char *str, char c)
{
	int i;
	int trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*ct_word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char		**ct_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s || !(split = malloc((ct_count_words(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == strlen(s)) && index >= 0)
		{
			split[j++] = ct_word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
