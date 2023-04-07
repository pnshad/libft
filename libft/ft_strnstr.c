/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 20:53:07 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/07 16:26:05 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		litlen;

	litlen = ft_strlen(little);
	if (litlen > len || len == 0)
		return NULL;
	if (litlen == 0)
		return ((char *)big);
	while (*big &&  len >= litlen)
	{
		if (ft_memcmp(big, little, litlen) == 0)
			return((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
