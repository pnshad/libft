/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_strjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:11:45 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/12 19:12:23 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	 main(void)
{
	char	*es = "";
	char	*s1 = "Hello, ";
	char	*s2 = "World!";
	char	*sl = "a long conversationt to check the function";
	char	*nu = NULL;
	char	*nz = "here we are trying to have \0 break our program";


	printf("s1:  %s\n", s1);
	printf("s2:  %s\n", s2);
	printf("out: %s\n", ft_strjoin(s1, s2));
	printf("----\t----\t----\t----\n");	
	
	printf("s1:  %s\n", s1);
	printf("s2:  %s\n", es);
	printf("out: %s\n", ft_strjoin(s1, es));
	printf("----\t----\t----\t----\n");	
	
	printf("s1:  %s\n", es);
	printf("s2:  %s\n", sl);
	printf("out: %s\n", ft_strjoin(es, sl));
	printf("----\t----\t----\t----\n");	

	printf("s1:  %s\n", es);
	printf("s2:  %s\n", sl);
	printf("out: %s\n", ft_strjoin(sl, es));
	printf("----\t----\t----\t----\n");	


	printf("s1:  %s\n", nz);
	printf("s2:  %s\n", sl);
	printf("out: %s\n", ft_strjoin(nz, sl));
	printf("----\t----\t----\t----\n");	

	printf("s1:  %s\n", NULL);
	printf("s2:  %s\n", s2);
	printf("out: %s\n", ft_strjoin(NULL, s2));
	printf("----\t----\t----\t----\n");	

	printf("s1:  %s\n", s1);
	printf("s2:  %s\n", NULL);
	printf("out: %s\n", ft_strjoin(s1, NULL));
	printf("----\t----\t----\t----\n");	

	printf("s1:  %s\n", NULL);
	printf("s2:  %s\n", NULL);
	printf("out: %s\n", ft_strjoin(NULL, NULL));
	printf("----\t----\t----\t----\n");	
	
	return (0);
}
