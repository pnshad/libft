/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:58:49 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/12 00:40:19 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void run_strjoin_test_case(char *s1, char *s2 ,char *oxp, char *des);

void ck_strjoin(void)
{
    char *s1;
    char *s2;
	char *ds;
	char *xo;

    printf("ft_strjoin >>> testing...\n\n");

    // Test case 1: Joining two non-empty strings
    ds = "1: Joining two non-empty strings";
    s1 = "Hello";
    s2 = " ,World!";
	xo = "Hello ,World!";
    run_strjoin_test_case(s1, s2, xo, ds);

    // Test case 2: Joining an empty string and a non-empty string
    ds = "2: Joining an empty string and a non-empty string";
    s1 = "";
    s2 = " ,World!";
	xo = " ,World!";
	run_strjoin_test_case(s1, s2, xo, ds);

    // Test case 3: Joining a non-empty string and an empty string
    ds = "3: Joining a non-empty string and an empty string";
    s1 = "Hello";
    s2 = "";
	xo = "Hello";
	run_strjoin_test_case(s1, s2, xo, ds);

    // Test case 4: Joining two empty strings
    ds = "4: Joining two empty strings";
    s1 = "";
    s2 = "";
	xo = "";
	run_strjoin_test_case(s1, s2, xo, ds);

    // Test case 5: Joining a NULL string and a non-empty string
    ds = "5: Joining a NULL string and a non-empty string";
    s1 = NULL;
    s2 = " ,World!";
	xo = " ,World!";
	run_strjoin_test_case(s1, s2, xo, ds);

    // Test case 6: Joining a non-empty string and a NULL string
    ds = "6: Joining a non-empty string and a NULL string";
    s1 = "Hello";
    s2 = NULL;
    xo = "Hello";
	run_strjoin_test_case(s1, s2, xo, ds);

    // Test case 7: Joining two long strings
    ds = "7: Joining two long strings";
    s1 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. ";
    s2 = "Praesent euismod nisi eget velit commodo, eu elementum urna bibendum. Suspendisse potenti. In hac habitasse platea dictumst.";
    xo = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent euismod nisi eget velit commodo, eu elementum urna bibendum. Suspendisse potenti. In hac habitasse platea dictumst.";
	run_strjoin_test_case(s1, s2, xo, ds);

    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}


static void run_strjoin_test_case(char *s1, char *s2 ,char *oxp, char *des)
{
	char	*oft;

    // Print message to indicate which test case is being run
    printf("Test case %s", des);

    // Print 1st source string
    printf("\n       1st source: ");
    if (!s1)
		printf("%s", s1);
	else
		my_printa(s1, strlen(s1) + 1, sizeof(char), "%c");	

    // Print 2nd source string
    printf("\n       2nd source: ");
    if (!s2)
		printf("%s", s2);
	else
	my_printa(s2, strlen(s2) + 1, sizeof(char), "%c");

	// Run ft_strjoin
	oft = ft_strjoin(s1, s2);
	
	// Prints the ft_strjoin and the expected output
    printf("\nft_strjoin output: ");
    my_printa(oft, strlen(oft) + 1, sizeof(char), "%c");
	printf("\n  expected output: ");
    my_printa(oxp, strlen(oxp) + 1, sizeof(char), "%c");

    // Check if ft_strdup's output is the same as the expected output
	assert(strcmp(oft, oxp) == 0);

    // Print new line to separate this test case from the next one
    printf("\n\n");
	free(oft);
}
