/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_memmove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 02:26:04 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/09 01:04:19 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    // Test case 1: Copying from empty string
    char dst1[] = "hello";
    char src1[] = "";
    char dst11[] = "hello";
    char src11[] = "";
    ft_memmove(dst1, src1, 0);
    printf("from_empty_ft_memmove result: %s\n", dst1);
    printf("from_empty_sy_memmove result: %s\n", (char *)memmove(dst11, src11, 0));
    assert(memcmp(dst1, dst11, 0) == 0);

    // Test case 2: Copying more characters than available in src
    char dst2[] = "hello";
    char src2[] = "world";
    char dst12[] = "hello";
    char src12[] = "world";
    ft_memmove(dst2, src2, strlen(src2) + 1);
    printf("more_char_ft_memmove result: %s\n", dst2);
    printf("more_char_sy_memmove result: %s\n", (char *)memmove(dst12, src12, strlen(src12)));
    assert(memcmp(dst2, dst12, strlen(src12)) == 0);

    // Test case 3: Copying the same number of characters as in src
    char dst3[] = "hello";
    char src3[] = "world";
    char dst13[] = "hello";
    char src13[] = "world";
    ft_memmove(dst3, src3, strlen(src3) + 1);
    printf("same_number_ft_memmove result: %s\n", dst3);
    printf("same_number_sy_memmove result: %s\n", (char *)memmove(dst13, src13, strlen(src13)));
    assert(memcmp(dst3, dst13, strlen(src13)) == 0);

    // Test case 4: Overlapping regions
    char dst4[] = "hello";
    char src4[] = "world";
    char dst14[] = "hello";
    char src14[] = "world";
    ft_memmove(dst4, src4, strlen(src4) + 1);
    printf("overlapping_ft_memmove result: %s\n", dst4);
    printf("overlapping_sy_memmove result: %s\n", (char *)memmove(dst14, src14, strlen(src14) + 1));
    assert(memcmp(dst4, dst14, strlen(src14) + 1) == 0);

    // Test case 5: Copying to NULL pointer
    char dst5[] = "      ";
    char src5[] = "world";
    char dst15[] = "      ";
    char src15[] = "world";
    ft_memmove(dst5, src5, strlen(src5) + 1);
    printf("NULL_ft_memmove result: %s\n", dst5);
    printf("NULL_sy_memmove result: %s\n", (char *)memmove(dst15, src15, strlen(src15) + 1));
    assert(memcmp(dst5, dst15, strlen(src15) + 1) == 0);

   printf("All test cases passed!\n");
   return (0);
}

