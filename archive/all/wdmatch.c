/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:19:11 by pnourish          #+#    #+#             */
/*   Updated: 2023/02/26 21:18:20 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_wdmatch(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (str1[i])
	{	
		j++;
		while((str2[j]) && (str2[j] != str1[i]))
		{
			j++;
		}
	
		i++;
	}
	if (!str2[j])
	{
		write(1, "\n", 1);
		return;
	}
	while (*str1)
	{
		write(1, str1, 1);
		str1++;
	}
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_wdmatch(argv[1], argv[2]);
}
