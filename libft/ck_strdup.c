/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:30:13 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/12 16:32:44 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function to run a test case for ft_strdup
static void run_strdup_test_case(char *src, char *des);

// Main function to test ft_strdup
void ck_strdup(void)
{
    char *test;

    // Print message to indicate beginning of test
    printf("ft_strdup >>> testing...\n\n");

    // Test case 1: Duplicating a non-empty string
    test = "hello";
    run_strdup_test_case(test, "1: Duplicating a non-empty string");

    // Test case 2: Duplicating an empty string
    test = "";
    run_strdup_test_case(test, "2: Duplicating an empty string");

    // Test case 3: Duplicating a string that contains null characters
    test = "world!\0hello"; // Note: this string contains a null character
    run_strdup_test_case(test, "3: Duplicating a string that contains null characters");

    // Print message to indicate that all test cases were passed successfully
    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}

// Function to run a test case for ft_strdup
static void run_strdup_test_case(char *src, char *des)
{
    char *p_ft;
    char *p_sy;

    // Print message to indicate which test case is being run
    printf("Test case %s", des);

    // Print source string
    printf("\n           Source: ");
    my_printa(src, strlen(src) + 1, sizeof(char), "%c");

    // Run ft_strdup and print its output
    p_ft = ft_strdup(src);
    printf("\n ft_strdup output: ");
    if (!p_ft)
        printf("%s", p_ft);
    else
        my_printa(p_ft, strlen(p_ft) + 1, sizeof(char), "%c");

    // Run strdup and print its output
    p_sy = strdup(src);
    printf("\n    strdup output: ");
    if (!p_sy)
        printf("%s", p_sy);
    else
        my_printa(p_sy, strlen(p_sy) + 1, sizeof(char), "%c");

    // Check if ft_strdup and strdup produced the same output
    if (!src || !p_ft || !p_sy)
        assert(p_ft == p_sy);
    else
        assert(memcmp((const void *)p_ft, (const void *)p_sy, strlen(src) + 1) == 0);

    // Free memory allocated by ft_strdup and strdup
    free(p_ft);
    free(p_sy);

    // Print new line to separate this test case from the next one
    printf("\n\n");
}
