/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:04:20 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/10 20:41:52 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	len;

	if (dst == NULL || src == NULL)
		return (NULL);
	len = ft_strlen(src) + 1;
	dst = (char *)ft_calloc(len, sizeof(char));
	ft_strlcpy(dst, src, len);
	return (dst);
}
