/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 22:37:45 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/31 18:25:32 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;
	size_t	i;

	i = 0;
	if (size >= SIZE_MAX / count || count >= SIZE_MAX / size)
		return (NULL);
	arr = (void *)malloc(size * count);
	if (!arr)
		return (NULL);
	else
	{
		while (i < count * size)
			*(unsigned char *)(arr + i++) = 0;
		return (arr);
	}
}
