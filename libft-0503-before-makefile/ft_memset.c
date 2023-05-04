/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:52:30 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/14 02:58:50 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*ptr;

	if (dest == NULL)
		return (NULL);
	ptr = (unsigned char *)dest;
	while (n > 0)
	{
		ptr[n - 1] = (unsigned char)c;
		n--;
	}
	return (dest);
}
