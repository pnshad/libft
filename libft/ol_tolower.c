/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_tolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:09:21 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/28 20:19:23 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	assert(ft_tolower('a')==tolower('a'));
	assert(ft_tolower('Z')==tolower('Z'));
	assert(ft_tolower('!')==tolower('!'));
	assert(ft_tolower(' ')==tolower(' '));
	assert(ft_tolower(L'é')==tolower(L'é'));
	printf("Function passed all test cases\n");
	return (0);
}
