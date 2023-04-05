/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_strnstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:42:42 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/05 23:40:21 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	char *big1 = "in this sentence I want you to try to find this beautiful word, isn't it beautiful";
	char *little1 = "beautiful";
	char *little2 = "";
	char *little3 = "technical";
	char *little4 = "\0";
	char *little5 = "this";

	printf("the output of big1 & beautiful is: | %s\n", ft_strnstr(big1, little1, strlen(big1)));
	printf("the output of big1 & beautiful is: | %s\n", strnstr(big1, little1, strlen(big1)));
	printf("the output of big1 & \"\" is: | %s\n", ft_strnstr(big1, little2, strlen(big1)));
	printf("the output of big1 & \"\" is: | %s\n", strnstr(big1, little2, strlen(big1)));
	printf("the output of big1 & technical is: | %s\n", ft_strnstr(big1, little3, strlen(big1)));
	printf("the output of big1 & technical is: | %s\n", strnstr(big1, little3, strlen(big1)));
	printf("the output of big1 & \\0 is: | %s\n", ft_strnstr(big1, little4, strlen(big1)));
	printf("the output of big1 & \\0 is: | %s\n", strnstr(big1, little4, strlen(big1)));
	printf("the output of big1 & this is: | %s\n", ft_strnstr(big1, little5, strlen(big1)));
	printf("the output of big1 & this is: | %s\n", strnstr(big1, little5, strlen(big1)));
	return (0);

}
