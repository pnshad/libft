/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 22:37:45 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/29 04:47:21 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	arr = (void *)malloc(size * count);
	if (!arr)
		return (NULL);
	else
	{
		while (count--)
			*(char *)(arr + count) = '\0';
		return (arr);
	}
}
