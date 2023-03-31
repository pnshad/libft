/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_isascii.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:30:59 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/28 19:48:32 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c);

int main(void)
{
    // Test with valid uppercase letter
    assert(ft_isascii('A') == isascii('A'));

    // Test with valid lowercase letter
    assert(ft_isascii(128) == isascii(128));

    // Test with invalid character
    assert(ft_isascii('0xE9') == isascii('0xE9'));

    // Test with valid digit
    assert(ft_isascii('7') == isascii('7'));

    // Test with valid whitespace character
    assert(ft_isascii(' ') == isascii(' '));

    // Test with valid punctuation character
    assert(ft_isascii('.') == isascii('.'));

    printf("All tests passed successfully!\n");
    return 0;
}
