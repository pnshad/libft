/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_memcmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:45:12 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/02 00:08:39 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	char str1[] = "Hello";
    char str2[] = "this\nadds a new line";
    char str3[] = "";
    char str4[] = "this has NULL \0 in it";

    int dig1[] = {1,2,3,4,5};
    int dig2[] = {1,2,3,0,0};

    printf("%d is result of checking str1 with itself by ft_memcmp\n", ft_memcmp(str1, str1, strlen(str1)));
    printf("%d is result of checking str1 with itself by memcmp\n", memcmp(str1, str1, strlen(str1)));
    assert(ft_memcmp(str1, str1, strlen(str1)) == memcmp(str1, str1, strlen(str1)));

    printf("%d is result of checking str1 with str2 by ft_memcmp\n", ft_memcmp(str1, str2, strlen(str1)));
    printf("%d is result of checking str1 with str2 by memcmp\n", memcmp(str1, str2, strlen(str1)));
    assert(ft_memcmp(str1, str2, strlen(str1)) == memcmp(str1, str2, strlen(str1)));

    printf("%d is result of checking str3 with str4 by ft_memcmp\n", ft_memcmp(str3, str4, strlen(str3)));
    printf("%d is result of checking str3 with str4 by memcmp\n", memcmp(str3, str4, strlen(str3)));
    assert(ft_memcmp(str3, str4, strlen(str3)) == memcmp(str3, str4, strlen(str3)));

    printf("%d is result of checking str4 with str1 by ft_memcmp\n", ft_memcmp(str4, str1, strlen(str4)));
    printf("%d is result of checking str4 with str1 by memcmp\n", memcmp(str4, str1, strlen(str4)));
    assert(ft_memcmp(str4, str1, strlen(str4)) == memcmp(str4, str1, strlen(str4)));

    printf("%d is result of checking dig1 with dig2 by ft_memcmp\n", ft_memcmp(dig1, dig2, sizeof(dig1)));
    printf("%d is result of checking dig1 with dig2 by memcmp\n", memcmp(dig1, dig2, sizeof(dig1)));
    assert(ft_memcmp(dig1, dig2, sizeof(dig1)) == memcmp(dig1, dig2, sizeof(dig1)));

	printf("All tests passed successfully!\n");
	return 0;
}
