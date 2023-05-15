/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:46:39 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/15 04:12:23 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void run_itoa_test_case(int n, char *des) {
    printf("%s\n", des);
    printf("         Input: %d\n", n);
    char *ft_result = ft_itoa(n);
    char *ct_result = calloc(1, sizeof(char) * 12);
    snprintf(ct_result, 12, "%d", n);
    printf("ft_itoa output: \"%s\"\n", ft_result);
    printf("ct_itoa output: \"%s\"\n", ct_result);
    assert(strcmp(ft_result, ct_result) == 0);
    free(ft_result);
    free(ct_result);
	printf("\n");
}

void ck_itoa(void) {
    // Print a message indicating the start of the ft_strchr testing
    printf("\nft_itoa >>> testing...\n\n");
	run_itoa_test_case(0, "Test case 1: n = 0");
    run_itoa_test_case(123456789, "Test case 2: n is a positive number");
    run_itoa_test_case(-987654321, "Test case 3: n is a negative number");
    run_itoa_test_case(2147483647, "Test case 4: n is the maximum value for a 32-bit signed integer");
    run_itoa_test_case(-2147483647, "Test case 5: n is one less than the minimum value for a 32-bit signed integer");
    run_itoa_test_case(-2147483648, "Test case 6: n is the minimum value for a 32-bit signed integer");
	printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}

char *ct_itoa(int n) {
    char *result = calloc(1, sizeof(char) * 12);
    snprintf(result, 12, "%d", n);
    return result;
}
