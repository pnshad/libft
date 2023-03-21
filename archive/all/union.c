/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:40:01 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/03 02:56:03 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_union(char *s1, char *s2)
{
	int used[256] = {0};
	int i;

	i = 0;
	while (s1[i])
	{
		if (!used[(int)s1[i]])
			{
				write(1, &s1[i], 1);
				used[(int)s1[i]] = 1;
			}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (!used[(int)s2[i]])
		{
			write(1, &s2[i], 1);
			used [(int)s2[i]] = 1;
		}
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	else 
	{
		ft_union(argv[1], argv[2]);
		return (0);
	}
}
