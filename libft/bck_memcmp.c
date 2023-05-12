/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:42:28 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/09 04:02:50 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void run_ft_memcmp_test_case(void *s1, void *s2, size_t n, size_t case_n);

void ck_memcmp(void)
{
    char str1[] = "Hello";
    char str2[] = "this \n adds a new line";
    char str3[] = "";
    char str4[] = "this has NULL \0 in it";
    int dig1[] = {1, 2, 3, 4, 5};
    int dig2[] = {1, 2, 3, 0, 0};

    printf("ft_memcmp >>> testing...\n\n");

	run_ft_memcmp_test_case(str1, str1, sizeof(str1), 1);
	run_ft_memcmp_test_case(str1, str2, sizeof(str1), 2);
	run_ft_memcmp_test_case(str3, str4, sizeof(str3), 3);
	run_ft_memcmp_test_case(str4, str1, sizeof(str4), 4);
	run_ft_memcmp_test_case(dig1, dig2, sizeof(dig1), 5);

	printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}

static void run_ft_memcmp_test_case(void *s1, void *s2, size_t n, size_t case_n)
{
	size_t s1_arrsize = sizeof(s1);
	size_t s2_arrsize = sizeof(s2);
	size_t s1_elmsize = sizeof(s1[0]);
	size_t s2_elmsize = sizeof(s2[0]);

    printf("Test case %zu: comparing first %zu elements of these array:\n",case_n ,n);
	my_printa(s1, s1_arrsize, s1_elmsize);
	printf("\n");
	my_printa(s2, s2_arrsize, s2_elmsize);
    printf("\n");

    
    printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, n));
    printf("   memcmp: %d\n", memcmp(s1, s2, n));

    
    assert(ft_memcmp(s1, s2, n) == memcmp(s1, s2, n));

    
    printf("\n");
}

void    my_printa(void* array, size_t arrsize, size_t elmsize)
{
    size_t  i;
    size_t  arrlen;
    const char* array_ptr = (const char*)array;


    i = 0;
    if (elmsize == 0)
        arrlen = 0;
    else
        arrlen = arrsize / elmsize;
    printf("[");
    while (i < arrlen)
    {
        if (i > 0) printf(", ");
        if (elmsize == sizeof(char))
        {
            if (array_ptr[i] == '\0')
                printf(" ");
            else
                printf("%c", ((char*)array_ptr)[i]);
        }
        if (elmsize == sizeof(int))
            printf("%d", *((const int*)(array_ptr + (i * elmsize))));
        i++;
    }
    printf("]");
}
