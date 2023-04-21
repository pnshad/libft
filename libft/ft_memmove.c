/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 00:57:42 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/14 04:02:31 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	tmp;

	if (dst != NULL && src != NULL)
	{
		while (len > 0)
		{
			tmp = ((const char *)src)[len - 1];
			((char *)dst)[len - 1] = tmp;
			len--;
		}
	}
	return (dst);
}
