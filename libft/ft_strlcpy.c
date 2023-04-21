/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:01:01 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/12 16:54:24 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	srclen;

	srclen = (size_t)ft_strlen(src);
	if (!(dst == NULL || dstsize == 0))
	{
		if (srclen >= dstsize)
			dstsize = dstsize - 1;
		else
			dstsize = srclen;
		ft_memcpy(dst, src, dstsize);
		dst[dstsize] = '\0';
	}
	return (srclen);
}
