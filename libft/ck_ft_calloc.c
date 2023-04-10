/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_calloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 01:27:01 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/10 01:58:23 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *str_ft;
	char *str_sy;
	size_t	size;
	size_t	i;

	i = 0;
	size = 10;
	str_ft =(char *)ft_calloc(size, sizeof(char));
	str_sy =(char *)calloc(size, sizeof(char));
	while (i < size)
	{
		printf("ft_output: %d\t", str_ft[i]);
		printf("sy_output: %d\n", str_sy[i]);
		i++;
	}
	assert(ft_memcmp(str_ft, str_sy, size)==0);
	printf("output arrays are identical, test passed!\n");

	//printf("ft_output: %*d\n",(int)sizeof(str_ft) * 2 - 1 ,str_ft[0]);
	//printf("sy_output: %*d\n",(int)sizeof(str_sy) * 2 - 1 ,str_sy[0]);

	return (0);
}
