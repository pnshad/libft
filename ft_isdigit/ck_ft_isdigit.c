/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_isdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 05:06:46 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/26 20:19:31 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include "ft_isdigit.c"

int	main(void)
{
	// Test with valid uppercase letter
    assert(ft_isdigit('1') == isdigit('1'));

    // Test with valid lowercase letter
    assert(ft_isdigit('z') == isdigit('z'));

    // Test with invalid character
    assert(ft_isdigit('$') == isdigit('$'));

    // Test with valid digit
    assert(ft_isdigit('7') == isdigit('7'));

    // Test with valid whitespace character
    assert(ft_isdigit(' ') == isdigit(' '));

    // Test with valid punctuation character
    assert(ft_isdigit('.') == isdigit('.'));

    printf("All tests passed successfully!\n");
    return 0;
}


