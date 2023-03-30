/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:16:00 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/29 17:46:02 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	const char	*ptr = NULL;

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
