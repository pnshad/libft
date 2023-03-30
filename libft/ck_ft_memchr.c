/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_memchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 20:00:44 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/30 23:09:12 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	char *test1 = "hello";
	char *test2 = "";
	char *test3 = "hel\0lo";
	char *test4 = "000";
	char *test5 = "12test";
	char *test6 = "\n\t";
	char *test7 = "\r\v\f";

	assert (ft_memchr(test1, 'l', 5) == memchr(test1, 'l', 5));	
	assert (ft_memchr(test2, 'k', 5) == memchr(test2, 'k', 5));
	assert (ft_memchr(test3, 'o', 6) == memchr(test3, 'o', 6));
	assert (ft_memchr(test3, 'o', 6) == memchr(test3, 'o', 6));
	assert (ft_memchr(test4, '0', 4) == memchr(test4, '0', 4));
	assert (ft_memchr(test5, 'l', 0) == memchr(test5, 'l', 0));
	assert (ft_memchr(test7, ' ', 3) == memchr(test7, ' ', 3));
	assert (ft_memchr(test6, '\t', 12) == memchr(test6, '\t', 12));

	printf("the function passed all test cases\n");
	
	return (0);
}
