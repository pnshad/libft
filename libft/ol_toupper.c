/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_toupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:09:21 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/28 19:31:28 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	assert(ft_toupper('a')==toupper('a'));
	assert(ft_toupper('Z')==toupper('Z'));
	assert(ft_toupper('!')==toupper('!'));
	assert(ft_toupper(L'é')==toupper(L'é'));
	assert(ft_toupper(' ')==toupper(' '));
	printf("Function passed all test cases\n");
	return (0);
}
