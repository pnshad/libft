/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:13:42 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/02 17:46:01 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int counter;
	
	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}

	return (counter);
}

// the exercise is up to here, however the main is set to test 
// the ft_putnbr is here to help with the printing of the ft_lens's
// output.

void ft_putnbr(int nb)
{
	char	digit;
	if (nb > 10)
		ft_putnbr(nb / 10);
	digit = (nb % 10) + '0';
	write(1, &digit, 1);
}


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
	//char *str = "Hello world!";
	//write(1, str, ft_strlen(str));
	ft_putnbr(ft_strlen(&argv[1][0]));
	}
}
