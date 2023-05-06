/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 16:03:58 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/01 23:30:11 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	counter;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	counter = 0;
	while (str[counter] && (str[counter] == '\t' || str[counter] == '\n'
			|| str[counter] == ' ' || str[counter] == '\r'
			|| str[counter] == '\v' || str[counter] == '\f'))
			counter++;
	if ((str[counter] == '-') || (str[counter] == '+'))
	{
		if (str[counter] == '-')
			sign *= -1;
		counter++;
	}
	while (str[counter] && str[counter] >= '0' && str[counter] <= '9')
		result = (result * 10) + (str[counter++] - '0');
	return (sign * result);
}
