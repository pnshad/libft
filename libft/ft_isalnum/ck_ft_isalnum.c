/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_isalnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 06:07:33 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/26 20:22:00 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include "ft_isalnum.c"

int	main(void)
{
	// Test with valid uppercase letter
    assert(ft_isalnum('1') == isalnum('1'));

	// Test with valid lowercase letter
    assert(ft_isalnum('z') == isalnum('z'));

    // Test with invalid character
    assert(ft_isalnum('$') == isalnum('$'));

    // Test with valid digit
    assert(ft_isalnum('7') == isalnum('7'));

    // Test with valid whitespace character
    assert(ft_isalnum(' ') == isalnum(' '));

    // Test with valid punctuation character
    assert(ft_isalnum('.') == isalnum('.'));

    printf("All tests passed successfully!\n");
    return 0;
}
