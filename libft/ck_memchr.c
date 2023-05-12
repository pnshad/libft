/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:25:15 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/09 21:05:02 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void run_ft_memchr_test_case(char *s, int c, size_t n, size_t case_n);

void	ck_memchr(void)
{
    char *test1 = "hello";
    char *test2 = "";
    char *test3 = "hel\0lo";
    char *test4 = "000";
    char *test5 = "12test";
    char *test6 = "\n\t";
    char *test7 = "\r\v\f";

    printf("ft_memchr  >>> testing...\n\n");

	run_ft_memchr_test_case(test1, 'l', 5, 1);
	run_ft_memchr_test_case(test2, 'k', 5, 2);
	run_ft_memchr_test_case(test3, 'o', 6, 3);
	run_ft_memchr_test_case(test4, '0', 4, 4);
	run_ft_memchr_test_case(test5, 'l', 0, 5);
	run_ft_memchr_test_case(test6, '\t', 12, 6);
	run_ft_memchr_test_case(test7, ' ', 3, 7);
	
	printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}

static void run_ft_memchr_test_case(char *s, int c, size_t n, size_t case_n)
{
    // Print the description, input string, input number and input character which is showed as ASCII, and if not as HEX

    printf("Test case %zu: Search for ",case_n);
	my_printa(&c, sizeof(char), sizeof(char), "%c");
	printf(" in ");
	my_printa(s, strlen(s) + 1, sizeof(s[0]), "%c");
    printf("\n"); 
	
	//else
    //    printf("Test case %zu: Search for '0x%02X' in \"%s\"\n",case_n, (unsigned char)c, s);

    // Print the result of ft_memchr and memchr for the input string and input character 
    printf("ft_memchr: [%p]\n", ft_memchr(s, c, n));
    printf(" ft_index: [%ld]\n", ((ft_memchr(s, c, n))-(void*)s)); 
    printf("   memchr: [%p]\n", memchr(s, c, n));
    printf(" sy_index: [%ld]\n", ((memchr(s, c, n))-(void*)s)); 


    // Use an assertion to verify that the results of ft_memchr and memchr are the same
    assert(ft_memchr(s, c, n) == memchr(s, c, n));

    // Print a blank line to separate this test case from the next one
    printf("\n");
}
