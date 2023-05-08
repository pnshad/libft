/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 05:04:26 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/08 04:02:07 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void run_calloc_test_case(size_t count, size_t size, size_t case_n);

void ck_calloc(void)
{
	printf("ft_calloc  >>> testing...\n\n");

	run_calloc_test_case(10, sizeof(char), 1);
	run_calloc_test_case(10, sizeof(int), 2);
	run_calloc_test_case(0, sizeof(char), 3);
	run_calloc_test_case(0, sizeof(int), 4);
	run_calloc_test_case(10, 0, 5);
	run_calloc_test_case(SIZE_MAX, sizeof(char), 6);
	run_calloc_test_case(SIZE_MAX, sizeof(int), 6);
	
	printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}

static void	run_calloc_test_case(size_t count, size_t size, size_t case_n)
{
	char	*arr_ft;
	char	*arr_sy;

	printf("Test case %zu: element count = %zu, element size = %zu \n",case_n, count, size);
	arr_ft = ft_calloc(count, size);
	arr_sy = calloc(count, size);
	printf("The address of arr_ft: %p\n", (void *)arr_ft);	
	printf("The address of arr_sy: %p\n", (void *)arr_sy);	
	if (arr_ft && arr_sy)
	{
		printf("arr_ft:");
		print_array(arr_ft, count, size);
		printf("\n");
		printf("arr_sy:");
		print_array(arr_sy, count, size);
		printf("\n");
		assert(memcmp(arr_ft, arr_sy, count) == 0);
	}
	else
		assert(arr_ft == arr_sy);
	free(arr_ft);
	free(arr_sy);
}
