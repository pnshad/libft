/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 16:03:58 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/09 21:20:52 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int result;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <='9')
		{
			break;
			i++;
		}
		if ((str[i] == '-') || (str[i] == '+'))
		{
			if (str[i] == '-') 
            {
                sign *= -1;
            }
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <='9' && str[i])
	{
			result = (result * 10) + (str[i] - '0');
			i++;
	}
	return (sign * result);
}
