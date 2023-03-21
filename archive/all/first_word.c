/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:23:05 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/02 21:18:02 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_first_word(char *str)
{
	int	i;

	i = 0; 
	while ((str[i] != '\0') && (str[i] == '\t' || str[i] == ' '))
	{
		i++;
	}
	
	while ((str[i] != '\0') && (str[i] != '\t' && str[i] != ' '))
	// here i had the issue with this 
	// first I did like this
	//  ((str[i] != '\0') && (str[i] != '\t' || str[i] != ' '))
	//  I shouldn't have used or operator ||  
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
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
	ft_first_word(&argv[1][0]);
	return (1);
	}
}
