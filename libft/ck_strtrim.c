/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_strtrim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 22:53:12 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/14 14:14:07 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_libmy.h"

static void run_strtrim_test_case(char* src, char *set, char* des);

char    *ct_strtrim(char const *s1, char const *set);

void ck_strtrim(void)
{
	// Print a message indicating the start of the ft_strchr testing
    printf("\nft_strtrim >>> testing...\n\n");

	// Test case 1: Leading and trailing whitespace
    char *src = "          hello world       ";
    char *set = "\t\n \",";
	char *des = "1: Leading and trailing whitespace";
	run_strtrim_test_case(src, set, des);

    // Test case 2: Leading and trailing whitespace with non-trimmed characters in between
    src = "\t\t\t\n\thello world\t\t\t\" ";
    des = "2: Leading and trailing whitespace with non-trimmed characters in between";
	run_strtrim_test_case(src, set, des);

    // Test case 3: Only trimming characters, no content left
    src = "\t\t\t\n\" , ";
    des = "3: Only trimming characters, no content left";
	run_strtrim_test_case(src, set, des);

    // Test case 4: No trimming characters, expected to return the same string
    src = "hello world";
    set = "";
    des = "4: No trimming characters, expected to return the same string";
    run_strtrim_test_case(src, set, des);

    // Test case 5: No trimming characters in the middle, expected to return the same string
    src = "hello world";
    set = "\t\n \",";
    des = "5: No trimming characters in the middle, expected to return the same string";
    run_strtrim_test_case(src, set, des);

    // Test case 6: Only trimming characters, no content left, with no trimming set
    src = "\t\t\t\n\" , ";
    set = "";
    des = "6: Only trimming characters, no content left, with no trimming set";
    run_strtrim_test_case(src, set, des);

    // Test case 7: No trimming characters, expected to return the same string, with no trimming set
    src = "hello world";
    set = "";
    des = "7: No trimming characters, expected to return the same string, with no trimming set";
    run_strtrim_test_case(src, set, des);

    // Test case 8: NULL source string, expected to return NULL
    src = NULL;
    set = "\t\n \",";
    des = "8: NULL source string, expected to return NULL";
    run_strtrim_test_case(src, set, des);

    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}

static void run_strtrim_test_case(char* src, char *set, char* des)
{
	char	*out_ft;
	char	*out_ct;
	
	out_ft = ft_strtrim(src, set);
	out_ct = ct_strtrim(src, set);
	printf("Test case %s\n", des);
	printf("    Source string: ");
	my_printa(src, 0, sizeof(char), "%c");
	printf("\n       Set string: ");
	my_printa(set, 0, sizeof(char), "%c");
	printf("\nft_strtrim output: ");
	my_printa(out_ft, 0, sizeof(char), "%c");
	printf("\nct_strtrim output: ");
	my_printa(out_ct, 0, sizeof(char), "%c");
	if (!(out_ft) || !(out_ct))
		assert(out_ft == out_ct);
	else
		assert(strcmp(out_ft, out_ct) == 0);
	printf("\n\n");
}

char	*ct_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}
