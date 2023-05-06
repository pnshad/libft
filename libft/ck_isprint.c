/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:06:04 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/04 19:32:27 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ck_isprint(void)
{
    printf("ft_isprint  >>> testing...\n\n");

    printf("Test case 1: uppercase letter 'L'\n");
    printf("ft_isprint: %d\n", ft_isprint('L'));
    printf("   isprint: %d\n", isprint('L'));
    assert(ft_isprint('L') == isprint('L'));
    printf("\n");

    printf("Test case 2: lowercase letter 'z'\n");
    printf("ft_isprint: %d\n", ft_isprint('z'));
    printf("   isprint: %d\n", isprint('z'));
    assert(ft_isprint('z') == isprint('z'));
    printf("\n");

    printf("Test case 3: character 'è'\n");
    printf("ft_isprint: %d\n", ft_isprint('0xE9'));
    printf("   isprint: %d\n", isprint('0xE9'));
    assert(ft_isprint('0xE9') == isprint('0xE9'));
    printf("\n");

    printf("Test case 4: digit '7'\n");
    printf("ft_isprint: %d\n", ft_isprint('7'));
    printf("   isprint: %d\n", isprint('7'));
    assert(ft_isprint('7') == isprint('7'));
    printf("\n");

    printf("Test case 5: whitespace character ' '\n");
    printf("ft_isprint: %d\n", ft_isprint(' '));
    printf("   isprint: %d\n", isprint(' '));
    assert(ft_isprint(' ') == isprint(' '));
    printf("\n");

    printf("Test case 6: tab '\\t'\n");
    printf("ft_isprint: %d\n", ft_isprint('\t'));
    printf("   isprint: %d\n", isprint('\t'));
    assert(ft_isprint('\t') == isprint('\t'));
    printf("\n");

printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}
