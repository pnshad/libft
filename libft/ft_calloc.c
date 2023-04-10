/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 22:37:45 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/10 02:14:10 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;
	
	arr = malloc(size * count);
	if (count == 0 || size == 0 || arr == NULL)
		return NULL;
	while (count > 0)
	{
		((char *)arr)[count - 1] = 0;
		count--;
	}
	return (arr);
}
