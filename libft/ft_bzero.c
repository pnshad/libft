/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:07:08 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/01 23:52:06 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	if (s == NULL)
		return (NULL);
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		ptr[n - 1] = 0;
		n--;
	}
	return (s);
}
