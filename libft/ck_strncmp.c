/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_strncmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:35:42 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/14 00:55:26 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void run_strncmp_test_case(const char *s1, const char *s2, size_t n, size_t case_n);

void	ck_strncmp(void)
{
	// Print header for the test cases
    printf("ft_strncmp >>> testing...\n\n");

	const char* test1 = "abcdefg";
    const char* test2 = "abcdefh";
    const char* test3 = "abcdef";
    const char* test5 = "abcdefg";
    const char* test6 = "12abcde\0fgh";
    const char* test7 = "abcde\0fghij";
	const char* test8 = "";

	run_strncmp_test_case(test1, test2, 7, 1);
	run_strncmp_test_case(test1, test3, 6, 2);
	run_strncmp_test_case(test1, test5, 0, 3);
	run_strncmp_test_case(test1, test6, 8, 4);
	run_strncmp_test_case(test6, test7, 6, 5);
	run_strncmp_test_case(test6, test8, 6, 6);
	run_strncmp_test_case(test8, test1, 6, 7);

	printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}

void run_strncmp_test_case(const char *s1, const char *s2, size_t n, size_t case_n)
{
    int  out_ft;
    int  out_sy;

    // Print the test case description and input parameters
    printf("Test case %zu: comparing first %zu elements of these strings:", case_n, n);
    printf("\n        s1 string: ");
    my_printa(s1, strlen(s1) + 1, sizeof(char), "%c");
    printf("\n        s2 string: ");
    my_printa(s2, strlen(s2) + 1, sizeof(char), "%c");
    
	// Call the custom strlen function and print the result
    out_ft = ft_strncmp(s1, s2, n);
    printf("\nft_strncmp output: %d", out_ft);

    // Call the standard strlen function and print the result
    out_sy = strncmp(s1, s2, n);
    printf("\n   strncmp output: %d", out_sy);

    // Controlling the outputs
    assert(out_sy == out_ft);
    printf("\n\n");
}
