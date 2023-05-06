/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:53:22 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/11 04:02:44 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	srclen;

	dst = (char *)malloc((len + 1) * sizeof(char));
	if (dst == NULL || s == NULL)
		return (NULL);
	srclen = ft_strlen(s);
	if (srclen - start < 1)
		len = 0;
	else if (start + len > srclen)
		len = srclen - start;
	ft_strlcpy(dst, s + start, (len + 1));
	return (dst);
}
