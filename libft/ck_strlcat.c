/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 02:35:35 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/07 00:26:28 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void run_strlcat_test_case(size_t s1size, char *s1str, char *s2, size_t input, char *description);

void ck_strlcat(void)
{
	char	*s1str;
	char	*s2;
	size_t	s1size;
	size_t	input;

    printf("ft_strlcat >>> testing...\n\n");

	// Test case 1: Joining a string with another string, ensuring null termination
    s1str = "Hello";
	s1size = 15;
    s2 = ", World!";
    input = 15;
    run_strlcat_test_case(s1size, s1str, s2, input, "1: Joining a string with another string, ensuring null termination");

    // Test case 2: Joining two string while giving smaller input than actual s1 size, ensuring null termination
    s1str = "Hello";
	s1size = 24;
    s2 = ", my name is John";
    input = 18;
    run_strlcat_test_case(s1size, s1str, s2, input, "2: Joining two string while giving smaller input than actual s1 size");

	// Test case 3: Joining a string with an empty string, ensuring null termination
	s1str = "string + empty, should not anything after here>";
	s1size = 48;
	s2 = "";
	input = 48;
	run_strlcat_test_case(s1size, s1str, s2, input, "3: Joining a string with an empty string, ensuring null termination");
	
	// Test case 4: Joining an empty string with a size of 1 with another string, ensuring null termination
	s1str = "";
	s1size = 30;
	s2 = "< this should be the start";
	input = 30;
	run_strlcat_test_case(s1size, s1str, s2, input, "4: Joining an empty string with a size of 1 with another string, ensuring null termination");

	// Test case 5: Joining a string with another string, including null bytes
	s1str = "s1 string ends here";
	s1size = 60;
	s2 = ", and there is a \\0 here>\0 \"you shuld not see this\"";
	input = 60;
	run_strlcat_test_case(s1size, s1str, s2, input, "5: Joining a string with another string, including null bytes");

    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}

void run_strlcat_test_case(size_t s1size, char *s1str, char *s2, size_t input, char *description)
{
    char	*s1_a = (char *)malloc(s1size);
	char	*s1_b = (char *)malloc(s1size);
	size_t	out_a;
	size_t	out_b;
	size_t	s2len;
	if (!(s1_a || s1_b || s2))
	{
		printf("Error: failure to create s1 strings or NULL s2 input");
		exit(1);
	}
	s2len = strlen(s2);
	strlcpy(s1_a, s1str, s1size);
	strlcpy(s1_b, s1str, s1size);
	out_a = ft_strlcat(s1_a, s2, input);
	out_b = strlcat(s1_b, s2, input);
	printf("Test case %s\n", description);
    printf("   s2 string's length: \"%lu\"\n", s2len);
    printf("            s2 string: \"%s\"\n", s2);
    printf("functions' size input: \"%zu\"\n", input);
    printf("        s1s' contents: \"%s\"\n", s1str);
    printf("  s1s' container size: \"%lu\"\n", s1size);
    printf("    ft_strlcat output: \"%zu\"\n", out_a);
    printf("     s1 of ft_strlcat: \"%s\"\n", s1_a);
    printf("       strlcat output: \"%zu\"\n", out_b);
    printf("        s1 of strlcat: \"%s\"\n", s1_b);
    assert(strcmp(s1_a, s1_b) == 0);
    printf("\n");
}
