/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 00:36:56 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/10 14:13:31 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void run_memset_test_case(size_t arr_size, size_t elem_size, char *format, int c, size_t set_num, char *des);

void ck_memset(void)
{
    char	set_c;
    size_t	set_n;
	size_t	arr_size;
	size_t	elem_size;
	char	*des;

    printf("ft_memset >>> testing...\n\n");

    // Test case 1: Filling a buffer with a single character
    set_c = 'x';
    set_n = 10;
	arr_size = 10 * sizeof(char);
	elem_size = sizeof(char);
	des = "1: Filling a buffer with a single character";
    run_memset_test_case(arr_size, elem_size, "%c", set_c, set_n, des);


    // Test case 2: Filling part of a buffer with a single character
    set_c = 'x';
    set_n = 5;
	arr_size = 10 * sizeof(char);
	elem_size = sizeof(char);
	des = "2: Filling part of a buffer with a single character";
    run_memset_test_case(arr_size, elem_size, "%c", set_c, set_n, des);
    
    // Test case 3: Filling a buffer with a negative value
    set_c = -48;
    set_n = 10;
	arr_size = 10 * sizeof(char);
	elem_size = sizeof(char);
	des = "3: Filling a buffer with a negative value";
    run_memset_test_case(arr_size, elem_size, "%c", set_c, set_n, des);
    
    // Test case 4: Testing the function with 0 as the count
    set_c = 'x';
    set_n = 0;
	arr_size = 10 * sizeof(char);
	elem_size = sizeof(char);
	des = "4: Testing the function with 0 as the count";
    run_memset_test_case(arr_size, elem_size, "%c", set_c, set_n, des);

    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}


static void run_memset_test_case(size_t arr_size, size_t elem_size, char *format, int set_char, size_t set_num, char *des)
{
	void	*dst_ft;
	void	*dst_sy;
	char	*char_f;

	if (!(isprint(set_char)) && (memcmp(format,"%c", 3) == 0))
		char_f = "\n             set char: 0x%02x";
	else
		char_f = "\n             set char: %c";


	dst_ft = malloc(arr_size);
	dst_sy = malloc(arr_size);

    printf("Test case %s", des);
    printf(char_f, set_char);
    printf("\n           set number: [%zu]", set_num);
    printf("\ndst before ft_memset: [%p]\t", dst_ft);
    print_array(dst_ft, arr_size, elem_size, format);
    ft_memset(dst_ft, set_char, set_num);
    printf("\n dst after ft_memset: [%p]\t", dst_ft);
    print_array(dst_ft, arr_size, elem_size, format);
    printf("\n   dst before memset: [%p]\t", dst_sy);
    print_array(dst_sy, arr_size, elem_size, format);
    memset(dst_sy, set_char, set_num);
    printf("\n    dst after memset: [%p]\t", dst_sy);
    print_array(dst_sy, arr_size, elem_size, format);
    printf("\n\n");
}
