/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_memcpy2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 02:26:04 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/05 02:46:27 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    // Test case 1: n = 0
    char dst1[] = "hello";
    char src1[] = "world";
    char dst11[] = "hello";
    char src11[] = "world";
    ft_memcpy(dst1, src1, 0);
    printf("ft_memcpy result: %s\n", dst1);
    printf("memcpy result: %s\n", (char *)memcpy(dst11, src11, 0));
    assert(memcmp(dst1, dst11, 0) == 0);

    // Test case 2: n > strlen(src)
    char dst2[] = "hello";
    char src2[] = "world";
    char dst12[] = "hello";
    char src12[] = "world";
    ft_memcpy(dst2, src2, strlen(src2));
    printf("ft_memcpy result: %s\n", dst2);
    printf("memcpy result: %s\n", (char *)memcpy(dst12, src12, strlen(src12)));
    assert(memcmp(dst2, dst12, strlen(src12)) == 0);

    // Test case 3: n = strlen(src)
    char dst3[] = "hello";
    char src3[] = "world";
    char dst13[] = "hello";
    char src13[] = "world";
    ft_memcpy(dst3, src3, strlen(src3));
    printf("ft_memcpy result: %s\n", dst3);
    printf("memcpy result: %s\n", (char *)memcpy(dst13, src13, strlen(src13)));
    assert(memcmp(dst3, dst13, strlen(src13)) == 0);

    // Test case 4: n < strlen(src)
    char dst4[] = "hello";
    char src4[] = "world";
    char dst14[] = "hello";
    char src14[] = "world";
    ft_memcpy(dst4, src4, strlen(src4));
    printf("ft_memcpy result: %s\n", dst4);
    printf("memcpy result: %s\n", (char *)memcpy(dst14, src14, strlen(src14)));
    assert(memcmp(dst4, dst14, strlen(src14)) == 0);

    // Test case 5: dst and src overlap
    char dst5[] = "hello";
    ft_memcpy(dst5, dst5, 4);
    char dst15[] = "hello";
    printf("ft_memcpy result: %s\n", dst5);
    printf("memcpy result: %s\n", (char *)memcpy(dst15, dst15, 4));
    assert(memcmp(dst5, dst15, 4) == 0);

    printf("All test cases passed!\n");

    return 0;
}

