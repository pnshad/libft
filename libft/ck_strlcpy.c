/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_strlcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 20:01:59 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/12 16:34:32 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_libmy.h"

static void run_strlcpy_test_case(char *src, char *dst, size_t elt, char *des);

void ck_strlcpy(void)
{
	char	*dst;
	char	*src;
	char	*des;
	size_t	num;

    // Print header for the test cases
    printf("ft_strlcpy >>> testing...\n\n");

	// Test case 1: Copying to an empty destinatio with less element than size
    des = "1: Copying to an empty destinationi with less element than size";
	dst = "     ";
	src = "Hello, world!";
	num = 2;
	run_strlcpy_test_case(src, dst, num, des);
	
	// Test case 2: Copying to an empty destination to all it's elements
    des = "2: Copying to an empty destination to all it's elements";
	dst = "     ";
	src = "Hello, world!";
	num = 5;
	run_strlcpy_test_case(src, dst, num, des);

	// Test case 3: Copying to a single element string
    des = "3: Copying to a single element string";
	dst = "";
	src = "Hello, world!";
	num = 1;
	run_strlcpy_test_case(src, dst, num, des);
	
	// Test case 4: Copying to a string with 0 as the input
    des = "4: Copying to a string with 0 as the input";
	dst = "       ";
	src = "Hello, world!";
	num = 0;
	run_strlcpy_test_case(src, dst, num, des);

	
    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");

}

static void run_strlcpy_test_case(char *src, char *dst, size_t elt, char *des)
{
	char	*dst_ft;
	char	*dst_sy;
	size_t 	dst_arr_size;
	size_t	out_ft;
	size_t	out_sy;

	dst_ft = malloc(strlen(dst) + 1);
	dst_sy = malloc(strlen(dst) + 1);
	dst_arr_size = strlen(dst) + 1;
	memcpy(dst_ft, dst, dst_arr_size);
	memcpy(dst_sy, dst, dst_arr_size);
	
	// Print the test case description and input parameters
    printf("Test case %s", des);
    printf("\n        source string: ");
    my_printa(src, strlen(src) + 1, sizeof(char), "%c");
	printf("\nelements to be copied: [%zu]", elt);
	
	// Call the custom memset function and print the result
	printf("\ndst before ft_strlcpy: ");
	my_printa(dst_ft, dst_arr_size, sizeof(char), "%c");
	out_ft = ft_strlcpy(dst_ft, src, elt);
	printf("\n dst after ft_strlcpy: ");
	my_printa(dst_ft, dst_arr_size, sizeof(char), "%c");
	printf("\n    ft_strlcpy output: %zu", out_ft);
	
	// Call the standard memset function and print the result
	printf("\n   dst before strlcpy: ");
	my_printa(dst_sy, dst_arr_size, sizeof(char), "%c");
	out_sy = strlcpy(dst_sy, src, elt);
	printf("\n    dst after strlcpy: ");
	my_printa(dst_sy, dst_arr_size, sizeof(char), "%c");
	printf("\n       strlcpy output: %zu", out_sy);
	
	// Controlling the outputs
	
	assert(strcmp(dst_sy, dst_ft) == 0);
	printf("\n\n");
	
	// Free the memory used by the test buffers
	free(dst_ft);
	free(dst_sy);
}
