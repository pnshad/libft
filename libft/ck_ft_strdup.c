/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_strdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:06:05 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/10 20:40:19 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		write(1, "\n",1);
		return (0);
	}
	
	char *p_ft;
	char *p_sy;
	char *p_nu;

	p_nu = NULL;
	printf("um_out is:\t%s\n", argv[1]);
	p_ft = ft_strdup(argv[1]);
	p_sy = strdup(argv[1]);
	printf("ft_out is:\t%s\n", p_ft);
	printf("sy_out is:\t%s\n", p_sy);
	assert(ft_memcmp((const void *)p_ft, (const void *)p_sy, ft_strlen(argv[1]) + 1) == 0);

	p_ft = ft_strdup(p_nu);
	//p_sy = strdup(p_nu);
	printf("ft_out is:\t%s\n", p_ft);
	//printf("sy_out is:\t%s\n", p_sy);
	
	return (0);
}
