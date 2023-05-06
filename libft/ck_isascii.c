/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:41:51 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/04 19:29:48 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ck_isascii(void)
{
    printf("ft_isascii  >>> testing...\n\n");

    printf("Test case 1: uppercase letter 'L'\n");
    printf("ft_isascii: %d\n", ft_isascii('L'));
    printf("   isascii: %d\n", isascii('L'));
    assert(ft_isascii('L') == isascii('L'));
    printf("\n");

    printf("Test case 2: lowercase letter 'z'\n");
    printf("ft_isascii: %d\n", ft_isascii('z'));
    printf("   isascii: %d\n", isascii('z'));
    assert(ft_isascii('z') == isascii('z'));
    printf("\n");

    printf("Test case 3: character 'è'\n");
    printf("ft_isascii: %d\n", ft_isascii('0xE9'));
    printf("   isascii: %d\n", isascii('0xE9'));
    assert(ft_isascii('0xE9') == isascii('0xE9'));
    printf("\n");

    printf("Test case 4: digit '7'\n");
    printf("ft_isascii: %d\n", ft_isascii('7'));
    printf("   isascii: %d\n", isascii('7'));
    assert(ft_isascii('7') == isascii('7'));
    printf("\n");

    printf("Test case 5: whitespace character ' '\n");
    printf("ft_isascii: %d\n", ft_isascii(' '));
    printf("   isascii: %d\n", isascii(' '));
    assert(ft_isascii(' ') == isascii(' '));
    printf("\n");

    printf("Test case 6: punctuation '\\t'\n");
    printf("ft_isascii: %d\n", ft_isascii('\t'));
    printf("   isascii: %d\n", isascii('\t'));
    assert(ft_isascii('\t') == isascii('\t'));
    printf("\n");

printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}
