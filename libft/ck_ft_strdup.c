/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_strdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:06:05 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/02 00:51:37 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *p_ft;
	char *p_sy;
	char *test1;
	char *test2;
	
	test1 = "hello";
	printf("input  is:\t%s\n", test1);
	p_ft = ft_strdup(test1);
	p_sy = strdup(test1);
	printf("ft_out is:\t%s\n", p_ft);
	printf("sy_out is:\t%s\n", p_sy);
	assert(memcmp((const void *)p_ft, (const void *)p_sy, ft_strlen(test1) + 1) == 0);

	
	test2 = NULL;
	printf("input  is:\t%s\n", test2);
	p_ft = ft_strdup(test2);
	//p_sy = strdup(test2);
	printf("ft_out is:\t%s\n", p_ft);
	//printf("sy_out is:\t%s\n", strdup(test2));
	assert(p_ft == NULL);

	printf("function passed all test cases!\n");
	
	return (0);
}
