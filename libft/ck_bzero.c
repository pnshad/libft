/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 02:06:57 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/08 01:26:41 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
#include "libmy.h"

static void run_bzero_test_case(void *array, size_t arrsize, size_t elmsize, size_t count, char *description);

void ck_bzero(void)
{
    char	str[] = "Hello, world!";
    int		arr[] = {1, 2, 3, 4, 5};
	size_t	strsize = sizeof(str);
	size_t	arrsize = sizeof(arr);
	size_t	s0size = sizeof(str[0]);
	size_t	a0size = sizeof(arr[0]);

	printf("\nft_bzero  >>> testing...\n\n");
	printf("%lu is arr0", sizeof(arr[0]));
	printf("%lu is arr0", sizeof(str[0]));

	run_bzero_test_case(str, strsize, s0size, strsize, "1: Zero out a string");
	run_bzero_test_case(arr, arrsize, a0size, arrsize, "2: Zero out an array of integers");
	run_bzero_test_case(str, strsize, s0size, strsize - (3 * s0size), "3: Zero out a portion of a string");
	run_bzero_test_case(arr, arrsize, a0size, arrsize - (1 * a0size), "4: Zero out a portion of an array of integers");

	printf("function passed all test cases successfully!");
	printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");

}

static void run_bzero_test_case(void *array, size_t arrsize, size_t elmsize, size_t count, char *description)
{
    void    *arr_a;
	void	*arr_b;

    if (elmsize == sizeof(char))
    	arr_a = (char *)malloc(arrsize * sizeof(char));
    	arr_b = (char *)malloc(arrsize * sizeof(char));
    if (elmsize == sizeof(int))
    	arr_a = (int *)malloc(arrsize * sizeof(int));
    	arr_b = (int *)malloc(arrsize * sizeof(int));
    if (!(arr_a || arr_b || array))
    {
        fprintf(stderr, "Error: input array is NULL or or its duplication in memory is failed");
        exit(1);
    }
    memcpy(arr_a, array, arrsize * sizeof(elmsize));
    memcpy(arr_b, array, arrsize * sizeof(elmsize));
    printf("Test case %s\n", description);
    printf("   input:\t");
    print_array(arr_a, arrsize, elmsize);
    printf("\n");
    ft_bzero(arr_a, count);
    printf("ft_bzero:\t");
    print_array(arr_a, arrsize, elmsize);
    printf("\n");
    printf("   input:\t");
    print_array(arr_b, arrsize, elmsize);
    printf("\n");
    bzero(arr_b, count);
    printf("   bzero:\t");
    print_array(arr_b, arrsize, elmsize);
    printf("\n");
	assert(memcmp(arr_a, arr_b, count) == 0);
}
