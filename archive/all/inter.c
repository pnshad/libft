/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:06:04 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/03 02:36:02 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_inter (char *s1, char *s2)
{
	int used[256] = {0};
	int i;
	int j;

	i =0;
	while (s1[i])
	{	
		j = 0;
		while (s2[j])
		{	
			if (s1[i] == s2[j] && !used[(int)s1[i]])
			{
				write(1, &s1[i], 1);
				used[(int)s1[i]] = 1;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		while (s1[j])
		{
			if (s2[i] == s1[j] && !used[(int)s2[j]])
			{
				write(1, &s2[i], 1);
				used[(int)s2[i]] = 1;
			}
			j++;	
		}	
	
		i++;
	}
	write(1, "\n", 1);

}

int	main(int ac, char **ag)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	else 
	{
		ft_inter(ag[1], ag[2]);
		return (0);
	}

}
