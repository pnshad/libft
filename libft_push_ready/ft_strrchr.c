/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:16:00 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/27 16:54:17 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*ptr;
	unsigned char	uc;

	ptr = NULL;
	uc = (unsigned char)c;
	if (s == NULL)
		return (NULL);
	while (*s)
	{
		if (*s == uc)
			ptr = s;
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return ((char *)ptr);
}
