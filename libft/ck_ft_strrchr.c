/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_strrchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:25:17 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/29 17:56:17 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char str1[] = "Hello, world!";
	char str2[] = "The quick brown fox jumps over the lazy dog.";
	char str3[] = "abcdefg";
	char str4[] = "11111";
	char str5[] = "This string contains the letter a.";
	char str6[] = "The rain in Spain falls mainly on the plain.";
	char str7[] = "Mississippi";
	
	assert(ft_strrchr(str1, 'w')==strrchr(str1, 'w'));
	assert(ft_strrchr(str2, 'j')==strrchr(str2, 'j'));
	assert(ft_strrchr(str3, 'h')==strrchr(str3, 'h'));
	assert(ft_strrchr(str4, '1')==strrchr(str4, '1'));
	assert(ft_strrchr(str5, 'a')==strrchr(str5, 'a'));
	assert(ft_strrchr(str6, 'x')==strrchr(str6, 'x'));
	assert(ft_strrchr(str7, '\0')==strrchr(str7, '\0'));

	printf("function passed all test cases with\n");
	return (0);
}
