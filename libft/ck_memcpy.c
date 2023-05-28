/* ********************************************d****************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:50:09 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/04 19:50:09 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_libmy.h"

static void run_memcpy_test_case(void *s, size_t arr_size, size_t elem_size, char *format, size_t n, char *des);

void ck_memcpy(void)
{
    // Declare source arrays to be copied
    char strsrc[] = "Hello, World!"; // Source char array
    int digsrc[] = {1, 2, 2, 4, 5}; // Source int array

    // Print message indicating that the testing is starting
    printf("ft_memcpy >>> testing...\n\n");

    // Run test case 1: copying a char array using ft_memcpy
    run_memcpy_test_case(strsrc, strlen(strsrc) + 1, sizeof(strsrc[0]), "%c", strlen(strsrc) + 1, "1: copying a char array using ft_memcpy");

    // Run test case 2: copying an int array using ft_memcpy
    run_memcpy_test_case(digsrc, sizeof(digsrc), sizeof(digsrc[0]), "%d", sizeof(digsrc), "2: copying an int array using ft_memcpy");

    // Print message indicating that all tests passed successfully
    printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}

static void run_memcpy_test_case(void *s, size_t arr_size, size_t elem_size, char *format, size_t n, char *des)
{
    // Declare destination arrays to hold copied data
    void *dst_ft;
    void *dst_sy;

    // Allocate memory for the destination arrays
    dst_ft = malloc(arr_size);
    dst_sy = malloc(arr_size);

    // Print message indicating the test case being run
    printf("Test case %s", des);

    // Print the source array
    printf("\n              source: ");
    my_printa(s, arr_size, elem_size, format);

    // Print the destination array before the copy
    printf("\ndst before ft_memcpy: ");
    my_printa(dst_ft, arr_size, elem_size, format);

    // Run ft_memcpy on the source and destination arrays
    ft_memcpy(dst_ft, s, n);

    // Print the destination array after the copy
    printf("\n dst after ft_memcpy: ");
    my_printa(dst_ft, arr_size, elem_size, format);

    // Print the destination array before the copy (for comparison)
    printf("\n   dst before memcpy: ");
    my_printa(dst_sy, arr_size, elem_size, format);

    // Run memcpy on the source and destination arrays
    ft_memcpy(dst_sy, s, n);

    // Print the destination array after the copy (for comparison)
    printf("\n    dst after memcpy: ");
    my_printa(dst_ft, arr_size, elem_size, format);

    // Check that the two destination arrays are equal
    assert(strcmp(dst_ft, dst_sy) == 0);
	printf("\n\n");
    // Free the memory allocated for the destination arrays
    free(dst_ft);
    free(dst_sy);
}
