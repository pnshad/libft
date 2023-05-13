/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 23:29:42 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/13 17:07:54 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*st_memmove(void *dst, const void *src, size_t len);

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	counter;

	dstlen = 0;
	while (dst && dst[dstlen])
		dstlen++;
	srclen = 0;
	while (src && src[srclen])
		srclen++;
	counter = dstlen;
	if (!(dst == NULL || size == 0))
	{
		while (counter < size - 1 && *src)
		{
			st_memmove(dst + counter, src, 1);
			src++;
			counter++;
		}
		*(dst + counter) = '\0';
	}
	return (srclen + dstlen);
}

static void	*st_memmove(void *dst, const void *src, size_t len)
{
	char	tmp;

	while (len > 0)
	{
		tmp = ((const char *)src)[len - 1];
		((char *)dst)[len - 1] = tmp;
		len--;
	}
	return (dst);
}
