/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_memset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:54:39 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/28 19:29:28 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char test1[10];
	char test2[10];

	ft_memset(test1, 'a', 10);
	memset(test2, 'a', 10);
	assert(memcmp(test1, test2, 10) == 0);
	
	ft_memset(test1, 'b', 9);
	memset(test2, 'b', 9);
	assert(memcmp(test1, test2, 10) == 0);

	ft_memset(test1, -48, 10);
	memset(test2, -48, 10);
	assert(memcmp(test1, test2, 10) == 0);
	
	printf("user's function passed all test cases as predefined function\n");
	return 0;

}
