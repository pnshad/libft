/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:42:28 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/14 00:49:12 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_libmy.h"

static void run_ft_memcmp_test_case(void *s1, size_t s1_arr_size, size_t elm_size, char *s1_format, void *s2, size_t s2_arr_size, size_t s2_elm_size , char *s2_format, size_t n, size_t case_n);
void ck_memcmp(void)
{
    char str1[] = "Hello";
    char str2[] = "this \n adds a new line";
    char str3[] = "";
    char str4[] = "this '\0' is null";
    int dig1[] = {1, 2, 3, 4, 5};
    int dig2[] = {1, 2, 3, 0, 0};

    printf("ft_memcmp >>> testing...\n\n");

    run_ft_memcmp_test_case(str1, sizeof(str1), sizeof(str1[0]), "%c", str1, sizeof(str1), sizeof(str1[0]), "%c", sizeof(str1), 1);
    run_ft_memcmp_test_case(str1, sizeof(str1), sizeof(str1[0]), "%c", str2, sizeof(str2), sizeof(str2[0]), "%c", sizeof(str1), 2);
    run_ft_memcmp_test_case(str3, sizeof(str3), sizeof(str3[0]), "%c", str4, sizeof(str4), sizeof(str4[0]), "%c", sizeof(str3), 3);
    run_ft_memcmp_test_case(str4, sizeof(str4), sizeof(str4[0]), "%c", str1, sizeof(str1), sizeof(str1[0]), "%c", sizeof(str4), 4);
    run_ft_memcmp_test_case(dig1, sizeof(dig1), sizeof(dig1[0]), "%d", dig2, sizeof(dig2), sizeof(dig2[0]), "%d", sizeof(dig1), 5);

    printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}

static void run_ft_memcmp_test_case(void *s1, size_t s1_arr_size, size_t s1_elm_size, char *s1_format, void *s2, size_t s2_arr_size, size_t s2_elm_size , char *s2_format, size_t n, size_t case_n)
{

    printf("Test case %zu: comparing first %zu elements of these array:\n", case_n, n);
    my_printa(s1, s1_arr_size, s1_elm_size, s1_format);
    printf("\n");
    my_printa(s2, s2_arr_size, s2_elm_size, s2_format);
    printf("\n");

    printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, n));
    printf("   memcmp: %d\n", memcmp(s1, s2, n));

    assert(ft_memcmp(s1, s2, n) == memcmp(s1, s2, n));

    printf("\n");
}

