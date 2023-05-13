/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:53:22 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/13 23:48:55 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	st_strlen(const char *s);

static size_t	st_strlcpy(char *restrict dst, const char *restrict src,
					size_t dstsize);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	srclen;

	dst = (char *)malloc((len + 1) * sizeof(char));
	if (dst == NULL || s == NULL)
		return (NULL);
	srclen = st_strlen(s);
	if (srclen - start < 1)
		len = 0;
	else if (start + len > srclen)
		len = srclen - start;
	st_strlcpy(dst, s + start, (len + 1));
	return (dst);
}

static size_t	st_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static size_t	st_strlcpy(char *restrict dst, const char *restrict src,
					size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] && i < dstsize - 1 && dstsize != 0)
	{
		dst[i] = src [i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
