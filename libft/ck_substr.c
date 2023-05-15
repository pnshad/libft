/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_substr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:34:51 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/15 23:27:43 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function ck_substr is used to test the ft_substr function.
// It contains several test cases to ensure the function behaves correctly.
// These test cases cover a range of scenarios, including normal use cases,
// edge cases, and cases where the input is unexpected or invalid.

static void run_substr_test_case(char* src, int start, size_t len, char* des);

char    *ct_substr(char const *s, int start, size_t len);

void ck_substr(void)
{
    char src1[] = "Hello, world!";
    char *src2 = NULL;
    int start;
    size_t len;

    // Print a message indicating the start of the ft_strchr testing
    printf("\nft_substr >>> testing...\n\n");

	// Test Case 1: Extract a substring from the middle of a string
    start = 7;
    len = 5;
    run_substr_test_case(src1, start, len, "Extracting substring from the middle of a string");

    // Test Case 2: Extract a substring from the beginning of a string
    start = 0;
    len = 5;
    run_substr_test_case(src1, start, len, "Extracting substring from the beginning of a string");

    // Test Case 3: Extract a substring that includes the end of a string
    start = 7;
    len = 6;
    run_substr_test_case(src1, start, len, "Extracting substring that includes the end of a string");

    // Test Case 4: Extract an empty substring
    start = 3;
    len = 0;
    run_substr_test_case(src1, start, len, "Extracting an empty substring");

    // Test Case 5: Extract a substring that goes beyond the end of the string
    start = 7;
    len = 20;
    run_substr_test_case(src1, start, len, "Extracting a substring that goes beyond the end of the string");

    // Test Case 6: Extract a substring that starts beyond the end of the string
    start = 13;
    len = 5;
    run_substr_test_case(src1, start, len, "Extracting a substring that starts beyond the end of the string");

    // Test Case 7: Extract a substring from a NULL pointer
    start = 7;
    len = 5;
    run_substr_test_case(src2, start, len, "Extracting a substring from a NULL pointer");

    // Check if the function has passed all test cases
    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}

// The function run_substr_test_case is a helper function used by ck_substr.
// It runs the ft_substr function with the given input parameters and
// compares its output with the expected output, which is provided as a parameter.

static void run_substr_test_case(char* src, int start, size_t len, char* des)
{
    char    *out_ft;
    char    *out_ct;

    out_ft = ft_substr(src, start, len);
    out_ct = ct_substr(src, start, len);
    printf("Test case %s\n", des);
    printf("               Params; start: %d\tlen: %zu\n", start, len);
    printf("        Source string: ");
    my_printa(src, 0, sizeof(char), "%c");
    printf("\n     ft_substr output: ");
    my_printa(out_ft, 0, sizeof(char), "%c");
    printf("\n     ct_substr output: ");
    my_printa(out_ct, 0, sizeof(char), "%c");
    if (!(out_ft) || !(out_ct))
        assert(out_ft == out_ct);
    else
        assert(strcmp(out_ft, out_ct) == 0);
    printf("\n\n");
}

// The function ct_substr is a reference implementation of the ft_substr function.
// It is used by run_substr_test_case to

char    *ct_substr(char const *s, int start, size_t len)
{
    size_t  i;
    char    *substr;

    if (!s)
        return (NULL);
    if (ft_strlen(s) < start)
        return (ft_strdup(""));
    substr = malloc(sizeof(char) * (len + 1));
    if (!substr)
        return (NULL);
    i = 0;
    while (i < len && s[start + i])
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}
