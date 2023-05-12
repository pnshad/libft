/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:38:07 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/09 02:03:06 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Declare a function that will be used only within this file
static void run_ft_isalpha_test_case(int c, char *description);

// Define a function that will run multiple test cases for ft_isalpha
void ck_isalpha(void)
{
    // Print a message to indicate that we're starting the tests
    printf("ft_isalpha  >>> testing...\n\n");

    // Run several test cases, each with a different input character and description
    run_ft_isalpha_test_case('L', "1: uppercase letter");
    run_ft_isalpha_test_case('z', "2: lowercase letter");
    run_ft_isalpha_test_case('0xE9', "3: character");
    run_ft_isalpha_test_case('7', "4: digit");
    run_ft_isalpha_test_case(' ', "5: whitespace character");
    run_ft_isalpha_test_case('\t', "6: Tabulation");

    // Print a message to indicate that all test cases passed successfully
    printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}

// Define a function that will run a single test case for ft_isalpha
static void run_ft_isalpha_test_case(int c, char *description)
{
    // Print the description and input character if possible as ASCII, if not as HEX
    if (isprint(c))
        printf("Test case %s '%c'\n", description, (char)c);
    else
        printf("Test case %s '0x%02X'\n", description, (unsigned char)c);

    // Print the result of ft_isalpha and isalpha for the input character
    printf("ft_isalpha: %d\n", ft_isalpha(c));
    printf("   isalpha: %d\n", isalpha(c));

    // Use an assertion to verify that the results of ft_isalpha and isalpha are the same
    assert(ft_isalpha(c) == isalpha(c));

    // Print a blank line to separate this test case from the next one
    printf("\n");
}
