/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:33:02 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/25 01:31:06 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A function to test the ft_memmove function with different test cases
static void run_memmove_test_case(void *src, size_t src_arr_size, size_t src_elem_size, char *src_format,  
                                   void *dst, size_t dst_arr_size, size_t dst_elem_size, char* dst_format, 
                                   size_t len, size_t overlap_size, char *des);

void    ck_memmove(void)
{
    char    *src; // Source string
    char    *dst; // Destination string
    char    *des; // Description of the test case
    size_t  len;  // Length of the substring to copy
    size_t  overlap_size; // The desired overlap size

    printf("ft_memmove >>> testing...\n\n");

    // Test case 1: Copying less characters than available in src
    dst = "    ";
    src = "this is copied";
    des = "1: Copying from empty string";
    len = 4;
    overlap_size = 0;
    run_memmove_test_case(src, strlen(src) + 1, sizeof(char), "%c", dst, strlen(dst) + 1, sizeof(char), "%c", len, overlap_size, des);

    // Test case 2: Copying more characters than available in src
    dst = "hello";
    src = "world";
    des = "2: Copying more characters than available in src";
    len = strlen(src) + 2;
    overlap_size = 0;
    run_memmove_test_case(src, strlen(src) + 1, sizeof(char), "%c", dst, strlen(dst) + 1, sizeof(char), "%c", len, overlap_size, des);

    // Test case 3: Copying the same number of characters as in src
    dst = "hello";
    src = "world";
    des = "3: Copying the same number of characters as in src";
    len = strlen(src) + 1;
    overlap_size = 0;
    run_memmove_test_case(src, strlen(src) + 1, sizeof(char), "%c", dst, strlen(dst) + 1, sizeof(char), "%c", len, overlap_size, des);

    // Test case 4: Copying to empty destination
    dst = "     ";
    src = "full";
    des = "4: Copying to empty destination";
    len = strlen(src) + 1;
    overlap_size = 0;
    run_memmove_test_case(src, strlen(src) + 1, sizeof(char), "%c", dst, strlen(dst) + 1, sizeof(char), "%c", len, overlap_size, des);

    // Test case 5: Copying a part of the string with overlap
    dst = "";
    src = "cold";
    des = "5: Copying a part of the string with overlap";
    len = strlen(src);
    overlap_size = strlen(src) - 1;
    run_memmove_test_case(src, strlen(src) + 1, sizeof(char), "%c", dst, strlen(dst) + 1, sizeof(char), "%c", len, overlap_size,des);

    // Test case 6: Complete overlap; copying from source on the source 
    dst = "";
    src = "overlap";
    des = "6: Complete overlap; copying from source on the source";
    len = strlen(src) + 1;
    overlap_size = strlen(src) + 1;
    run_memmove_test_case(src, strlen(src) + 1, sizeof(char), "%c", dst, strlen(dst) + 1, sizeof(char), "%c", len, overlap_size,des);

    // Test case 7: Partial overlap; copying from source which is before the destination 
    src = "abcdefghi";
    des = "7: Partial overlap; copying from source which is before the destination";
    len = 6;
    overlap_size = 7;
    run_memmove_test_case(src, strlen(src) + 1, sizeof(char), "%c", dst, strlen(dst) + 1, sizeof(char), "%c", len, overlap_size,des);
    
	printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}

// A function to run a single test case, comparing the output of ft_memmove and memmove
static void run_memmove_test_case(void *src, size_t src_arr_size, size_t src_elem_size, char *src_format,  
                                   void *dst, size_t dst_arr_size, size_t dst_elem_size, char* dst_format, 
                                   size_t len, size_t overlap_size, char *des)
{
    void    *dst_ft; // Destination string copied with ft_memmove
    void    *dst_sy; // Destination string copied with memmove
    void    *src_ft; // Source string copied with ft_memmove
    void    *src_sy; // Source string copied with memmove

    if (overlap_size <= src_arr_size && overlap_size > 0) // If there is an overlap_size, adjust the source and destination pointers
    {
		src_ft = malloc(src_arr_size);
        src_sy = malloc(src_arr_size);
        memcpy(src_ft, src, src_arr_size);
        memcpy(src_sy, src, src_arr_size);
        dst_ft = src_ft + (src_arr_size - overlap_size);
        dst_sy = src_sy + (src_arr_size - overlap_size);
        dst_arr_size = overlap_size;
        len = overlap_size;
    }
    else // Otherwise, adjust only the destination pointer
    {
        src_ft = src;
        src_sy = src;
        dst_ft = malloc(dst_arr_size);
        dst_sy = malloc(dst_arr_size);
        memcpy(dst_ft, dst, dst_arr_size);
        memcpy(dst_sy, dst, dst_arr_size);
    }

    printf("Test case %s", des);
    printf("\n         overlap_size: [%zu]", len);
    printf("\n                  len: [%zu]", len);
    printf("\n               src_ft: [%p]\t", src_ft);
    my_printa(src_ft, src_arr_size, src_elem_size, src_format);
    printf("\ndst before ft_memmove: [%p]\t", dst_ft);
    my_printa(dst_ft, dst_arr_size, dst_elem_size, dst_format);
    ft_memmove(dst_ft, src, len);
    printf("\n dst after ft_memmove: [%p]\t", dst_ft);
    my_printa(dst_ft, dst_arr_size, dst_elem_size, dst_format);
    printf("\n               src_sy: [%p]\t", src_sy);
    my_printa(src_sy, src_arr_size, src_elem_size, src_format);
    printf("\n   dst before memmove: [%p]\t", dst_sy);
    my_printa(dst_sy, dst_arr_size, dst_elem_size, dst_format);
    memmove(dst_sy, src, len);
    printf("\n    dst after memmove: [%p]\t", dst_sy);
    my_printa(dst_sy, dst_arr_size, dst_elem_size, dst_format);
    printf("\n\n");

    // Compare the output of ft_memmove and memmove
    assert(memcmp(dst_ft, dst_sy, len) == 0);

    if (overlap_size <= src_arr_size && overlap_size > 0)
    {
        free(src_ft);
        free(src_sy);
    }
    else
    {
        free(dst_ft);
        free(dst_sy);
    } 
}
