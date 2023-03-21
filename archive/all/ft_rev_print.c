/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:43:03 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/02 20:22:46 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}


char	*ft_rev_print (char *str)
{
	int	revcount;

	revcount = ft_strlen(str) - 1;
	while (revcount >= 0)
	{
		write(1, &str[revcount], 1);
		revcount--;
	}
	write(1, "\n", 1);
	return (str);
}

// below is for testing 


int	main (int argc, char **argv)
{
	if (argc != 2)
	{ 
		write(1, "\n", 1);
		return (0);
	}

	ft_rev_print(&argv[1][0]);
	return (1);
}
