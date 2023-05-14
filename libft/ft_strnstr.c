/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 20:53:07 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/14 02:10:52 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	st_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		litlen;

	litlen = 0;
	while (little && little[litlen])
		litlen++;
	if (litlen > len || len == 0 || big == NULL)
		return (NULL);
	if (litlen == 0)
		return ((char *)big);
	while (*big && len >= litlen)
	{
		if ((st_memcmp(big, little, litlen)) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

static int	st_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0 && *(unsigned char *)s1 == *(unsigned char *)s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return ((unsigned char *)s1 - (unsigned char *)s2);
}
