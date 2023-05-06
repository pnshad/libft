/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:16:00 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/14 02:54:26 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = NULL;
	if (s == NULL)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			ptr = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)ptr);
}