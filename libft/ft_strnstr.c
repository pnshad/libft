/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 20:53:07 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/05 23:47:24 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptrbig;
	const char *start;

	if
	if (!*little)
		return ((char *)big);
	while (*big &&  len >= strlen(little))
	{
		start = big;
		ptrbig = (char *)big;
		while (*ptrbig == *little && *little)
		{
			ptrbig++;
			little++;
		}
		if (!*little)
			return((char *)start);
		big++;
		len--;
		little = (const char *)little - (ptrbig - start);
	}
	return (NULL);
}
