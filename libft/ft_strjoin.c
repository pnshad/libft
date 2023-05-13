/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:38:20 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/13 16:50:07 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	st_strlen(const char *s);

static void		*st_memcpy(void *restrict dst, const void *restrict src,
					size_t n);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*dst;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = st_strlen(s1);
	len2 = st_strlen(s2);
	dst = (char *)malloc((len1 + len2) * sizeof(char));
	if ((s1 == NULL && s2 == NULL) || dst == NULL)
		return (NULL);
	st_memcpy(dst, s1, len1);
	st_memcpy(dst + len1, s2, len2);
	return (dst);
}

static size_t	st_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

static void	*st_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	if (dst != NULL && src != NULL)
	{
		while (n > 0)
		{
			((unsigned char *)dst)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	return (dst);
}
