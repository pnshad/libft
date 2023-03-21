/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:26:25 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/03 01:26:50 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);

}

void ft_last_word(char *str)
{
	int len;
	
	len = ft_strlen(str);
	len--;
	while (str[len] != '\0' && (str[len] == ' ' || str[len] == '\t'))
		{	
			len--;
		}
	while (str[len] != '\0' && str[len] != ' ' && str[len] != '\t')
		{
			len--;
		}
	len ++;	
	while (str[len] != '\0' && (str[len] != ' ' &&  str[len] != '\t'))
		{
			write(1, &str[len], 1);
			len++;
		}
	write(1, "\n",1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	} 
		ft_last_word(&argv[1][0]);
		return (0);	
	
}
