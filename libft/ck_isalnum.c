/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_isalnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 06:07:33 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/04 13:21:01 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ck_isalnum(void)
{
	printf("ft_isalnum will undergo testing...\n\n");
	printf("Test case 1: valid uppercase letter 'L'\n");
    assert(ft_isalnum('L') == isalnum('L'));

	printf("Test case 2: valid lowercase letter 'z'\n");
    assert(ft_isalnum('z') == isalnum('z'));

    printf("Test case 3: invalid character '$'\n");
    assert(ft_isalnum('$') == isalnum('$'));

    printf("Test case 4: valid digit '7'\n");
    assert(ft_isalnum('7') == isalnum('7'));

    printf("Test case 5: invalid whitespace character ' '\n");
    assert(ft_isalnum(' ') == isalnum(' '));

    printf("Test with invalid puncuation '.'\n");
    assert(ft_isalnum('.') == isalnum('.'));
	
	printf("\nft_isalnum passed all test cases successfully!\n");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}
