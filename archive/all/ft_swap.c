/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:46:35 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/02 18:38:51 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// the code is up to here and the rest is just for testing 

int	ft_numlen(int n)
{
	int len;
	
	len = 0;
	while (n/=10)
		len++;
	return(len);
}

void ft_putnbr(int n)
{
	char c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return; 
	}
	if (n < 0)
	{
		write(1, "-",1);
		n *= -1;
	}
	if (n > 10)
		ft_putnbr(n / 10);
	c = '0'+ (n % 10);
	write(1, &c, 1);
}

int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 4;
	write(1, "a then b before: ", 17);
	ft_putnbr(a);
	ft_putnbr(b);
	write(1, "\n", 1);
	ft_swap(&a, &b);
	write(1, "a then b after: ", 16);
	ft_putnbr(a);
	ft_putnbr(b);
	write(1, "\n", 1);

	return (0);
}
