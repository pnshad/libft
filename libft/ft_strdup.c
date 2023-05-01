/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:04:20 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/02 00:55:23 by pnourish         ###   ########.fr       */
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
	dst = (char *)malloc(len * sizeof(char));
	ft_strlcpy(dst, src, len);
	return (dst);
}
