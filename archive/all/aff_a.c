/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:04:53 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/03 00:25:41 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_aff_a(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		if (*str == 'a')
		{	
			counter = 1;
			break;
		}
		str++;
	}
	if (counter < 1)
		write(1, "\n", 1);
	else 
		write(1, "a\n", 2);
}

int	main(int argc, char **argv)
{
	if (argc !=2)
	{
		write(1, "a\n",2);
	}
	else
	{
		ft_aff_a(&argv[1][0]);
	}
}
