/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_strnstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:42:42 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/14 02:41:05 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void run_strnstr_test_case(char *qry ,char *tgt, size_t n, size_t case_n);

void	ck_strnstr(void)
{
    char *big1 = "in this sentence I want you to try to find this beautiful word, isn't it beautiful";
    char *little1 = "beautiful";
    char *little2 = "";
    char *little3 = "technical";
    char *little4 = "\0";
    char *little5 = "this";
	char *little6 = "word";
	char *little7 = "?";
    size_t biglen;

    biglen = strlen(big1);
    

    printf("\nft_strnstr >>> testing...\n\n");
	
	run_strnstr_test_case(big1, little1, biglen, 1);
	run_strnstr_test_case(big1, little2, biglen, 2);
	run_strnstr_test_case(big1, little3, biglen, 3);
	run_strnstr_test_case(big1, little4, biglen, 4);
	run_strnstr_test_case(big1, little5, biglen, 5);
	run_strnstr_test_case(big1, little6, 23, 6);
	run_strnstr_test_case(big1, little7, biglen, 7);
	
    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}

static void run_strnstr_test_case(char *qry ,char *tgt, size_t n, size_t case_n)
{
    // Print a message indicating the current test case and the query and target characters
    printf("Test case %zu searching for Target in the first %zu element of the Query", case_n, n);
    printf("\n           Query: ");
    my_printa(qry, strlen(qry) + 1, sizeof(char), "%c");
    printf("\n          Target: ");
    my_printa(tgt, strlen(tgt) + 1, sizeof(char), "%c");

    // Print the result of ft_strchr and strchr, as well as their indices and contents
    printf("\n      ft_strnstr: [%p]", ft_strnstr(qry, tgt, n));
    printf("\n        ft_index: [%ld]", ((ft_strnstr(qry, tgt, n)) - qry));
    printf("\n       ft_result: \"%s\"", ft_strnstr(qry, tgt, n));
    printf("\n      sy_strnstr: [%p]", strnstr(qry, tgt, n));
    printf("\n        sy_index: [%ld]", ((strnstr(qry, tgt, n)) - qry));
    printf("\n       sy_result: \"%s\"", strnstr(qry, tgt, n));

    // Check if ft_strchr and strchr return the same result, and print a message indicating the result
    if (!(ft_strnstr(qry, tgt, n)) || !(strnstr(qry, tgt, n)))
		assert((ft_strnstr(qry, tgt, n)) == (strnstr(qry, tgt, n)));
	else
		assert(strcmp(ft_strnstr(qry, tgt, n), strnstr(qry, tgt, n)) == 0);
    printf("\n\n");
}
