/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 21:38:51 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/02 22:17:53 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strrev(char *str)
{
	int		len;
	int		i;
	int		j;
	char	buf;

	i = 0;
	len = ft_strlen(str);
	j = len - 1;
	while (i < (len / 2))
	// here allways i < len / 2 not! i <=len 
	{
		buf = str[i];
		str[i] = str[j];
		str[j] = buf;
		i++;
		j--;
		//here don't forget to decrese the j--; and use j instead of len
	}
	return (str);

}

int	main(int argc, char **argv)
{
		if (argc != 2)
		{
			write(1, "error", 5);
			return (0);
		}
		//ft_strrev(&argv[1][0]);
		printf("the new string is %s", ft_strrev(&argv[1][0])); 
}
