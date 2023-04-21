/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_strtrim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 22:53:12 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/13 23:52:48 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *src1 = "          hello world       ";
	char *src2 = "\t\t\t\n\thello world\t\t\t\" ";
	char *src3 = "\t\t\t\n\" , ";
	char *set1 = "\t\n \",";
	char *set2 = "hello";

	printf("src = starts>%s<ends\n", src1);
	printf("dst = starts>%s<ends\n", ft_strtrim(src1, set1));
	printf("--- --- --- --- --- --- --- --- --- --- --- \n");	
	printf("src = starts>%s<ends\n", src2);
	printf("dst = starts>%s<ends\n", ft_strtrim(src2, set1));
	printf("--- --- --- --- --- --- --- --- --- --- --- \n");	
	printf("src = starts>%s<ends\n", src3);
	printf("dst = starts>%s<ends\n", ft_strtrim(src3, set1));
	printf("--- --- --- --- --- --- --- --- --- --- --- \n");	
	printf("src = starts>%s<ends\n", src1);
	printf("dst = starts>%s<ends\n", ft_strtrim(src1, set2));
	printf("--- --- --- --- --- --- --- --- --- --- --- \n");	
	printf("src = starts>%s<ends\n", src2);
	printf("dst = starts>%s<ends\n", ft_strtrim(src2, set2));
	printf("--- --- --- --- --- --- --- --- --- --- --- \n");	
	printf("src = starts>%s<ends\n", src3);
	printf("dst = starts>%s<ends\n", ft_strtrim(src3, set2));
	printf("--- --- --- --- --- --- --- --- --- --- --- \n");	
	printf("src = starts>%s<ends\n", src1);
	printf("dst = starts>%s<ends\n", ft_strtrim(src1, NULL));
	printf("--- --- --- --- --- --- --- --- --- --- --- \n");	
	printf("src = starts>%s<ends\n", NULL);
	printf("dst = starts>%s<ends\n", ft_strtrim(NULL, set1));
	printf("--- --- --- --- --- --- --- --- --- --- --- \n");	

	return (0);
}
