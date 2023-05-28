/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:12:24 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/27 01:35:55 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_libmy.h"

// Declare the function run_strchr_test_case
static void run_strchr_test_case(char *qry ,char tgt, char *des);

// Define the function ck_strchr
void ck_strchr(void)
{
    // Initialize the test string
    char qry[] = "Hello, \tworld!";

    // Print a message indicating the start of the ft_strchr testing
    printf("\nft_strchr >>> testing...\n\n");

    // Test case 1: Searching for a character in the middle of a string
    run_strchr_test_case(qry, 'w', "1: Searching for a character in the middle of a string\n");

    // Test case 2: Searching for a character in the beginning of a string
    run_strchr_test_case(qry, 'H', "2: Searching for a character in the beginning of a string\n");

    // Test case 3: Searching for a character at the end of a string
    run_strchr_test_case(qry, '!', "3: Searching for a character at the end of a string\n");

    // Test case 4: Searching for a character that does not appear in the string
    run_strchr_test_case(qry, 'a', "4: Searching for a character that does not appear in the string\n");

    // Test case 5: Searching for a null character
    run_strchr_test_case(qry, '\0', "5: Searching for a null character\n");

    // Test case 6: Searching for a character that appears multiple times in the string
    run_strchr_test_case(qry, 'o', "6: Searching for a character that appears multiple times in the string\n");

    // Test case 7: Searching for an unprintable character in the string
    run_strchr_test_case(qry, '\t', "7: Searching for an unprintable character in the string\n");

    // Test case 8: Searching for a character outside the range of a char
    char c1 = ('l' + 256);
    run_strchr_test_case(qry, c1, "8: Searching for a character outside the range of a char\n");

    // Print a message indicating that all test cases have passed
    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}

// Define the function run_strchr_test_case
static void run_strchr_test_case(char *qry ,char tgt, char *des)
{
	    // Print a message indicating the current test case and the query and target characters
    printf("Test case %s", des);
    printf("\n           Query: ");
    my_printa(qry, strlen(qry) + 1, sizeof(char), "%c");
    printf("\nSearch character: ");
    my_printa(&tgt, 1, sizeof(char), "%c");

    // Print the result of ft_strchr and strchr, as well as their indices and contents
    printf("\n       ft_strchr: [%p]", ft_strchr(qry, tgt));
    printf("\n        ft_index: [%ld]", ((ft_strchr(qry, tgt)) - qry));
    printf("\n       ft_result: \"%s\"", ft_strchr(qry, tgt));
    printf("\n       sy_strchr: [%p]", strchr(qry, tgt));
    printf("\n        sy_index: [%ld]", ((strchr(qry, tgt)) - qry));
    printf("\n       sy_result: \"%s\"", strchr(qry, tgt));

    // Check if ft_strchr and strchr return the same result, and print a message indicating the result
    assert(ft_strchr(qry, tgt) == strchr(qry, tgt));
    printf("\n\n");
}
