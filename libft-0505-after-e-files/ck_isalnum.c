/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:40:57 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/04 19:32:31 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ck_isalnum(void)
{
    printf("ft_isalnum  >>> testing...\n\n");
    printf("Test case 1: uppercase letter 'L'\n");
    printf("ft_isalnum: %d\n",ft_isalnum('L'));
    printf("   isalnum: %d\n",isalnum('L'));
    assert(ft_isalnum('L') == isalnum('L'));
    printf("\n");

    printf("Test case 2: lowercase letter 'z'\n");
    printf("ft_isalnum: %d\n",ft_isalnum('z'));
    printf("   isalnum: %d\n",isalnum('z'));
    assert(ft_isalnum('z') == isalnum('z'));
    printf("\n");

    printf("Test case 3: character 'è'\n");
    printf("ft_isalnum: %d\n",ft_isalnum('0xE9'));
    printf("   isalnum: %d\n",isalnum('0xE9'));
    assert(ft_isalnum('0xE9') == isalnum('0xE9'));
    printf("\n");

    printf("Test case 4: digit '7'\n");
    printf("ft_isalnum: %d\n",ft_isalnum('7'));
    printf("   isalnum: %d\n",isalnum('7'));
    assert(ft_isalnum('7') == isalnum('7'));
    printf("\n");

    printf("Test case 5: whitespace character ' '\n");
    printf("ft_isalnum: %d\n",ft_isalnum(' '));
    printf("   isalnum: %d\n",isalnum(' '));
    assert(ft_isalnum(' ') == isalnum(' '));
    printf("\n");

    printf("Test case 6: punctuation '\\t'\n");
    printf("ft_isalnum: %d\n",ft_isalnum('\t'));
    printf("   isalnum: %d\n",isalnum('\t'));
    assert(ft_isalnum('\t') == isalnum('\t'));
    printf("\n");

printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}
