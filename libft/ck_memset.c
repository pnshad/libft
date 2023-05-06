/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 00:36:56 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/06 01:11:07 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ck_memset(void)
{
    char test1[10];
    char test2[10];

    printf("ft_memset >>> testing...\n\n");

    // Test case 1: Filling a buffer with a single character
    printf("Test case 1: Filling a buffer with a single character\n");
    memset(test1, 0, 9); // clear the buffer
    memset(test2, 0, 9);
    test1[9] = '\0'; // add null terminator
    test2[9] = '\0';
    printf("dst before ft_memset = \"%s\"\n", test1);
    ft_memset(test1, 'a', 9);
    test1[9] = '\0'; // add null terminator
    printf("dst  after ft_memset = \"%s\"\n", test1);
    printf("dst before    memset = \"%s\"\n", test2);
    memset(test2, 'a', 9);
    test2[9] = '\0';
    printf("dst  after    memset = \"%s\"\n", test2);
    assert(memcmp(test1, test2, 10) == 0);
    printf("\n");

    // Test case 2: Filling part of a buffer with a single character
    printf("Test case 2: Filling part of a buffer with a single character\n");
    memset(test1, 0, 9);
    memset(test2, 0, 9);
    test1[9] = '\0';
    test2[9] = '\0';
    printf("dst before ft_memset = \"%s\"\n", test1);
    ft_memset(test1, 'b', 4);
    test1[9] = '\0';
    printf("dst  after ft_memset = \"%s\"\n", test1);
    printf("dst before    memset = \"%s\"\n", test2);
    memset(test2, 'b', 4);
    test2[9] = '\0';
    printf("dst  after    memset = \"%s\"\n", test2);
    assert(memcmp(test1, test2, 10) == 0);
    printf("\n");

    // Test case 3: Filling a buffer with a negative value
    printf("Test case 3: Filling a buffer with a negative value\n");
    memset(test1, 0, 9);
    memset(test2, 0, 9);
    test1[9] = '\0';
    test2[9] = '\0';
    printf("dst before ft_memset = \"%s\"\n", test1);
    ft_memset(test1, -48, 9);
    test1[9] = '\0';
    printf("dst  after ft_memset = \"%s\"\n", test1);
    printf("dst before    memset = \"%s\"\n", test2);
    memset(test2, -48, 9);
    test2[9] = '\0';
    printf("dst  after    memset = \"%s\"\n", test2);
    assert(memcmp(test1, test2, 10) == 0);
    printf("\n");

    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}
