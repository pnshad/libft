/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_strncmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:35:42 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/02 01:06:00 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	const char* test1 = "abcdefg";
    const char* test2 = "abcdefh";
    const char* test3 = "abcdef";
    const char* test4 = NULL;
    const char* test5 = "abcdefg";
    const char* test6 = "12abcde\0fgh";
    const char* test7 = "abcde\0fghij";
	const char* test8 = "";

	printf("n:7  ,s1:%s,\ts2=%s\tsys= %d\t\tft =%d\n", test1, test2, strncmp(test1, test2, 7) ,ft_strncmp(test1, test2, 7));
	printf("n:6  ,s1:%s,\ts2=%s\tsys= %d\t\tft= %d\n", test1, test3, strncmp(test1, test3, 6),ft_strncmp(test1, test3, 6));
	printf("n:0  ,s1:%s,\ts2=%s\tsys= %d\t\tft= %d\n", test1, test5 ,strncmp(test1, test5, 0),ft_strncmp(test1, test5, 0));
	printf("n:8  ,s1:%s,\ts2=%s\tsys= %d\t\tft= %d\n", test1, test6, strncmp(test1, test6, 8),ft_strncmp(test1, test6, 8));
	printf("n:6  ,s1:%s,\ts2=%s\tsys= %d\tft= %d\n", test6, test7, strncmp(test6, test7, 6),ft_strncmp(test6, test7, 6));
	printf("n:6  ,s1:%s,\ts2=%s\t\tsys= %d\t\tft= %d\n", test6, test8,strncmp(test6, test8, 6),ft_strncmp(test6, test8, 6));
	printf("n:6  ,s1:%s,\t\ts2=%s\tsys= %d\tft= %d\n", test8, test1,strncmp(test8, test1, 6),ft_strncmp(test8, test1, 6));
	// here I'm testing NULL input, as strncmp can't handle NULL we only use ft
	// if you remove the 'ft_' and change test4 to "" it will check correctly
	printf("n:9  ,s1:%s,\ts2=%s\tsys= %d\t\tft= %d\n", test1, test4, ft_strncmp(test1, test4, 9),ft_strncmp(test1, test4, 9));
	assert(ft_strncmp(test1, test2, 7)==strncmp(test1, test2, 7));
	assert(ft_strncmp(test1, test3, 6)==strncmp(test1, test3, 6));
	assert(ft_strncmp(test1, test5, 0)==strncmp(test1, test5, 0));
	assert(ft_strncmp(test1, test6, 8)==strncmp(test1, test6, 8));
	assert(ft_strncmp(test6, test7, 6)==strncmp(test6, test7, 6));
	assert(ft_strncmp(test6, test8, 6)==strncmp(test6, test8, 6));
	assert(ft_strncmp(test8, test1, 6)==strncmp(test8, test1, 6));
	// here I'm testing NULL input, as strncmp can't handle NULL we only use ft
	// if you remove the 'ft_' and change test4 to "" it will check correctly
	assert(ft_strncmp(test1, test4, 9)==ft_strncmp(test1, test4, 9));
	printf("function passed all test cases!\n");
	return (0);
}
