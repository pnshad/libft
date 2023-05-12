/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:41:51 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/09 02:09:16 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Declare a function that will be used only within this file
static void run_ft_isascii_test_case(int c, char *description);

// Define a function that will run multiple test cases for ft_isascii
void ck_isascii(void)
{
    // Print a message to indicate that we're starting the tests
    printf("ft_isascii  >>> testing...\n\n");

    // Run several test cases, each with a different input character and description
    run_ft_isascii_test_case('L', "1: uppercase letter");
    run_ft_isascii_test_case('z', "2: lowercase letter");
    run_ft_isascii_test_case('0xE9', "3: character");
    run_ft_isascii_test_case('7', "4: digit");
    run_ft_isascii_test_case(' ', "5: whitespace character");
    run_ft_isascii_test_case('\t', "6: Tabulation");

    // Print a message to indicate that all test cases passed successfully
    printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}

// Define a function that will run a single test case for ft_isascii
static void run_ft_isascii_test_case(int c, char *description)
{
    // Print the description and input character if possible as ASCII, if not as HEX
    if (isprint(c))
        printf("Test case %s '%c'\n", description, (char)c);
    else
        printf("Test case %s '0x%02X'\n", description, (unsigned char)c);

    // Print the result of ft_isascii and isascii for the input character
    printf("ft_isascii: %d\n", ft_isascii(c));
    printf("   isascii: %d\n", isascii(c));

    // Use an assertion to verify that the results of ft_isascii and isascii are the same
    assert(ft_isascii(c) == isascii(c));

    // Print a blank line to separate this test case from the next one
    printf("\n");
}
