/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:05:51 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/15 04:09:06 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	st_numlen(int n);

static size_t	st_abs(int n);

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = st_numlen(n);
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	while (st_abs(n / 10))
	{
		str[len--] = (st_abs(n % 10) + '0');
		n /= 10;
	}
	str[len--] = (st_abs(n % 10) + '0');
	if (n < 0)
		str[len] = '-';
	return (str);
}

static size_t	st_abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

static size_t	st_numlen(int n)
{
	size_t	len;

	if (n < 0)
		len = 2;
	else
		len = 1;
	while (st_abs(n / 10))
	{
		len++;
		n /= 10;
	}
	return (len);
}
