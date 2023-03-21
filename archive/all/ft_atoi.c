/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:26:47 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/03 04:13:00 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (!((str[i] >= '0'&& str[i] <='9') || (str[i] == '-') || (str[i] == '+')))	
		{
			i++;
		}
		else if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
			{
				sign *= -1;
			}
			i++;
		}
		else if (str[i] >= '0'&& str[i] <='9')
		{
			result = (result * 10) + (str[i] - '0');
			i++;
		}
	}
	return (sign * result);
}


#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int	number;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		number = ft_atoi(argv[1]);
		printf("%d is the nummber", number);
		return (0);
	}
}
