/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:01:01 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/01 23:53:19 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	srclen;

	srclen = 0;
	while (src[srclen] && src)
		srclen++;
	if (!(dst == NULL || n == 0))
	{
		if (srclen >= n)
			n = n - 1;
		else
			n = srclen;
		dst[n] = '\0';
		while (n > 0)
		{
			((unsigned char *)dst)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	return (srclen);
}
