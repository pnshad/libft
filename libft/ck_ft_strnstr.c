/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_strnstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:42:42 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/07 16:57:48 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strnstr(const char *s, const char *find, size_t slen);

int main(void)
{
	char *big1 = "in this sentence I want you to try to find this beautiful word, isn't it beautiful";
	char *little1 = "beautiful";
	char *little2 = "";
	char *little3 = "technical";
	char *little4 = "\0";
	char *little5 = "this";
	int biglen;

	biglen = strlen(big1);
	printf("the output of big1 & beautiful is: | %s\n", ft_strnstr(big1, little1, biglen));
	printf("the output of big1 & beautiful is: | %s\n", strnstr(big1, little1, biglen));
	printf("the output of big1 & \"\" is: | %s\n", ft_strnstr(big1, little2, biglen));
	printf("the output of big1 & \"\" is: | %s\n", strnstr(big1, little2, biglen));
	printf("the output of big1 & technical is: | %s\n", ft_strnstr(big1, little3, biglen));
	printf("the output of big1 & technical is: | %s\n", strnstr(big1, little3, biglen));
	printf("the output of big1 & \\0 is: | %s\n", ft_strnstr(big1, little4, biglen));
	printf("the output of big1 & \\0 is: | %s\n", strnstr(big1, little4, biglen));
	printf("the output of big1 & this is: | %s\n", ft_strnstr(big1, little5, biglen));
	printf("the output of big1 & this is: | %s\n", strnstr(big1, little5, biglen));
	return (0);

}
