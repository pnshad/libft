/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 05:04:26 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/09 20:36:32 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void run_calloc_test_case(size_t count, size_t size, const char *format, size_t case_n);

void ck_calloc(void)
{
	printf("ft_calloc  >>> testing...\n\n");

	run_calloc_test_case(10, sizeof(char), "%c",1);
	run_calloc_test_case(10, sizeof(int), "%d",2);
	run_calloc_test_case(0, sizeof(char), "%c",3);
	run_calloc_test_case(0, sizeof(int), "%d",4);
	run_calloc_test_case(10, 0, "%d",5);
	run_calloc_test_case(SIZE_MAX, sizeof(char), "%c",6);
	run_calloc_test_case(SIZE_MAX, sizeof(int), "%d",6);
	
	printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}

static void	run_calloc_test_case(size_t count, size_t size, const char *format, size_t case_n)
{
	char	*arr_ft;
	char	*arr_sy;
	size_t	arrsize;

	arrsize = count * size;
	printf("Test case %zu: element count = %zu, element size = %zu \n",case_n, count, size);
	arr_ft = ft_calloc(count, size);
	arr_sy = calloc(count, size);
	printf("The address of arr_ft: %p\n", (void *)arr_ft);	
	printf("The address of arr_sy: %p\n", (void *)arr_sy);	
	if (arr_ft && arr_sy)
	{
		printf("arr_ft:");
		my_printa(arr_ft, arrsize, size, format);
		printf("\n");
		printf("arr_sy:");
		my_printa(arr_sy, arrsize, size, format);
		printf("\n\n");
		assert(memcmp(arr_ft, arr_sy, count) == 0);
	}
	else
	{
		printf("arr_ft:");
        printf("[]\n\n");
        printf("arr_sy:");
        printf("[]\n\n\n");
		assert(arr_ft == arr_sy);
	}
	free(arr_ft);
	free(arr_sy);
}
