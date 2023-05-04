/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_strchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:55:17 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/10 21:24:26 by pnourish         ###   ########.fr       */
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
	
	assert(ft_strchr(str1, 'w')==strchr(str1, 'w'));
	assert(ft_strchr(str2, 'j')==strchr(str2, 'j'));
	assert(ft_strchr(str3, 'h')==strchr(str3, 'h'));
	assert(ft_strchr(str4, '1')==strchr(str4, '1'));
	assert(ft_strchr(str5, 'a')==strchr(str5, 'a'));
	assert(ft_strchr(str6, 'x')==strchr(str6, 'x'));
	assert(ft_strchr(str7, '\0')==strchr(str7, '\0'));

	printf("function passed all test cases with\n");
	return (0);
}
