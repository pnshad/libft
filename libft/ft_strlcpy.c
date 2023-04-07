/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:01:01 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/07 20:58:51 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t srclen;

	srclen = ft_strlen(src);
	if (srclen >= size)
		size = size - 1;
	else
		size = srclen;
	ft_memcpy(dst, src, size);
	dst[size] = '\0';
	return (srclen);
}
