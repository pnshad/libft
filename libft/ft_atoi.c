/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 16:03:58 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/28 15:51:53 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	st_iswhite(char c)
{
	return (c == '\n' || c == '\t' || c == ' '
		|| c == '\r' || c == '\v' || c == '\f');
}

static int	st_edge(int sign, unsigned long long result)
{
	if (sign > 0 && result > LLONG_MAX)
		return (sign * (int)LLONG_MAX);
	if (sign < 0 && result - 1 > LLONG_MAX)
		return (sign * (int)LLONG_MIN);
	return (0);
}

int	ft_atoi(const char *str)
{
	int					counter;
	int					sign;
	unsigned long long	result;

	result = 0;
	sign = 1;
	counter = 0;
	while (str[counter] && st_iswhite(str[counter]))
		counter++;
	if ((str[counter] == '-') || (str[counter] == '+'))
	{
		if (str[counter] == '-')
			sign *= -1;
		counter++;
	}
	while (str[counter] == '0')
		counter++;
	while (str[counter] && str[counter] >= '0' && str[counter] <= '9')
	{
		result = (result * 10) + (str[counter++] - '0');
		if ((result > LLONG_MAX && sign > 0)
			|| (result - 1 > LLONG_MAX && sign < 0))
			return (st_edge(sign, result));
	}
	return (sign * (int)result);
}
