/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:12:24 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/13 23:52:45 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *src, char const *set)
{
	size_t	srclen;
	char	*dst;
	char	*start;
	char	*end;

	if (src == NULL)
		return (NULL);
	srclen = ft_strlen(src);
	start = (char *)src;
	end = (char *)src + srclen - 1;
	while (*start && ft_strchr(set, *start))
		start++;
	while (end > start && ft_strchr(set, *end))
		end--;
	srclen = end - start + 1;
	dst = (char *)malloc(srclen + 1);
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, start, srclen + 1);
	return (dst);
}
