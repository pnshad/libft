/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_strncmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:35:42 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/30 18:03:02 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	const char* test1 = "abcdefg";
    const char* test2 = "abcdefh";
    const char* test3 = "abcdef";
    const char* test4 = "abcdefg";
    const char* test5 = "abcdefg";
    const char* test6 = "abcde\0fgh";
    const char* test7 = "abcde\0fghij";
	const char* test8 = "";

	printf("sys= %d ft= %d ",strncmp(test1, test2, 7),ft_strncmp(test1, test2, 7));
	printf("sys= %d ft= %d ",strncmp(test1, test3, 6),ft_strncmp(test1, test3, 6));
	printf("sys= %d ft= %d ",strncmp(test1, test5, 0),ft_strncmp(test1, test5, 0));
	printf("sys= %d ft= %d ",strncmp(test1, test6, 8),ft_strncmp(test1, test6, 8));
	printf("sys= %d ft= %d ",strncmp(test6, test7, 6),ft_strncmp(test6, test7, 6));
	printf("sys= %d ft= %d ",strncmp(test6, test8, 6),ft_strncmp(test6, test8, 6));
	printf("sys= %d ft= %d ",strncmp(test8, test1, 6),ft_strncmp(test8, test1, 6));
	printf("sys= %d ft= %d ",strncmp(test1, test4, 9),ft_strncmp(test1, test4, 9));
	assert(ft_strncmp(test1, test2, 7)==strncmp(test1, test2, 7));
	assert(ft_strncmp(test1, test3, 6)==strncmp(test1, test3, 6));
	assert(ft_strncmp(test1, test5, 0)==strncmp(test1, test5, 0));
	assert(ft_strncmp(test1, test6, 8)==strncmp(test1, test6, 8));
	assert(ft_strncmp(test6, test7, 6)==strncmp(test6, test7, 6));
	assert(ft_strncmp(test6, test8, 6)==strncmp(test6, test8, 6));
	assert(ft_strncmp(test8, test1, 6)==strncmp(test8, test1, 6));
	assert(ft_strncmp(test1, test4, 9)==strncmp(test1, test4, 9));
	return (0);
}
