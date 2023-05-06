/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:38:07 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/04 19:31:16 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ck_isalpha(void)
{
    printf("ft_isalpha  >>> testing...\n\n");

    printf("Test case 1: uppercase letter 'L'\n");
    printf("ft_isalpha: %d\n", ft_isalpha('L'));
    printf("   isalpha: %d\n", isalpha('L'));
    assert(ft_isalpha('L') == isalpha('L'));
    printf("\n");

    printf("Test case 2: lowercase letter 'z'\n");
    printf("ft_isalpha: %d\n", ft_isalpha('z'));
    printf("   isalpha: %d\n", isalpha('z'));
    assert(ft_isalpha('z') == isalpha('z'));
    printf("\n");

    printf("Test case 3: character 'è'\n");
    printf("ft_isalpha: %d\n", ft_isalpha('0xE9'));
    printf("   isalpha: %d\n", isalpha('0xE9'));
    assert(ft_isalpha('0xE9') == isalpha('0xE9'));
    printf("\n");

    printf("Test case 4: digit '7'\n");
    printf("ft_isalpha: %d\n", ft_isalpha('7'));
    printf("   isalpha: %d\n", isalpha('7'));
    assert(ft_isalpha('7') == isalpha('7'));
    printf("\n");

    printf("Test case 5: whitespace character ' '\n");
    printf("ft_isalpha: %d\n", ft_isalpha(' '));
    printf("   isalpha: %d\n", isalpha(' '));
    assert(ft_isalpha(' ') == isalpha(' '));
    printf("\n");

    printf("Test case 6: punctuation '\\t'\n");
    printf("ft_isalpha: %d\n", ft_isalpha('\t'));
    printf("   isalpha: %d\n", isalpha('\t'));
    assert(ft_isalpha('\t') == isalpha('\t'));
    printf("\n");

printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}
