/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 02:06:57 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/12 17:04:35 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Define a static helper function to run a test case for ft_bzero
static void run_bzero_test_case(void *array, size_t arrsize, size_t elmsize, char *format, size_t count, char *description);

void ck_bzero(void)
{
    char    str[] = "Hello, world!";
    int     arr[] = {1, 2, 3, 4, 5};
    size_t  strsize = strlen(str) + 1;
    size_t  arrsize = sizeof(arr);
    size_t  s0size = sizeof(str[0]);
    size_t  a0size = sizeof(arr[0]);

    // Test ft_bzero on various inputs
    printf("\nft_bzero  >>> testing...\n\n");

    run_bzero_test_case(str, strsize, s0size, "%c", strsize, "1: Zero out a string");
    run_bzero_test_case(arr, arrsize, a0size, "%d", arrsize, "2: Zero out an array of integers");
    run_bzero_test_case(str, strsize, s0size, "%c", strsize - 7, "3: Zero out a portion of a string");
    run_bzero_test_case(arr, arrsize, a0size, "%d", arrsize - 8, "4: Zero out a portion of an array of integers");
    run_bzero_test_case(NULL, 0, 4, "%d", 0, "5: Receiving NULL inputs");

	// Print a success message if all test cases passed
    printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}

// Define a static helper function to run a test case for ft_bzero
static void run_bzero_test_case(void *array, size_t arrsize, size_t elmsize, char *format, size_t count, char *description)
{
    void    *arr_a;
    void    *arr_b;

	arr_a = NULL;
	arr_b = NULL;
    // Allocate memory for two arrays to store input and output of ft_bzero and bzero
    if ((elmsize == sizeof(char)) && (array))
    {
        arr_a = malloc(arrsize * sizeof(char));
        arr_b = malloc(arrsize * sizeof(char));
    }
    if ((elmsize == sizeof(int)) && (array))
    {
        arr_a = malloc(arrsize * sizeof(int));
        arr_b = malloc(arrsize * sizeof(int));
    }

    // Copy the original array to the two test arrays
    memcpy(arr_a, array, arrsize);
    memcpy(arr_b, array, arrsize);

    // Print the input array and call ft_bzero on arr_a
    printf("Test case %s\n", description);
    printf("   input:\t");
    my_printa(arr_a, arrsize, elmsize, format);
    printf("\n");
    ft_bzero(arr_a, count);
    printf("ft_bzero:\t");
    my_printa(arr_a, arrsize, elmsize, format);
    printf("\n");

    // Print the input array and call bzero on arr_b
    printf("   input:\t");
    my_printa(arr_b, arrsize, elmsize, format);
    printf("\n");
    bzero(arr_b, count);
    printf("   bzero:\t");
    my_printa(arr_b, arrsize, elmsize, format);
    printf("\n\n");

    // Assert that the two arrays are equal after running ft_bzero and bzero
    assert(memcmp(arr_a, arr_b, arrsize) == 0);

    // Free memory used for the test arrays
    free(arr_a);
    free(arr_b);
}
