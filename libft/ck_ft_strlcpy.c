/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_strlcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 20:01:59 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/07 22:59:39 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int main(void)
{
	char dst5a[5];
	char dst0a[0];
	char dst1a[1] = "1";
	char dst5b[5];
	char dst0b[0];
	char dst1b[1] = "1";
	char src2[] = "Hi";
	char src5[] = "Hello";
	char src9[] = "Hello, Hi";
	char srcn[] = "H\0i,\n";
	size_t d5s2 = 4; 
	size_t d5s5 = 5;
	size_t d5s9 = 4;
	size_t d0s2 = 0;
	size_t d1s2 = 1;
	size_t d5sn = 4;

	ft_strlcpy(dst5a, src2, d5s2);
	strlcpy(dst5b, src2, d5s2);
	printf("ft_strlcpy:\t%s", dst5a);
	printf("sy_strlcpy:\t%s", dst5b);
	assert(strcmp(dst5a, dst5b) == 0);

	ft_strlcpy(dst5a, src5, d5s5);
	strlcpy(dst5b, src5, d5s5);
	printf("ft_strlcpy:\t%s", dst5a);
	printf("sy_strlcpy:\t%s", dst5b);
	assert(strcmp(dst5a, dst5b) == 0);

	ft_strlcpy(dst5a, src9, d5s9);
	strlcpy(dst5b, src9, d5s9);
	printf("ft_strlcpy:\t%s", dst5a);
	printf("sy_strlcpy:\t%s", dst5b);
	assert(strcmp(dst5a, dst5b) == 0);

	ft_strlcpy(dst0a, src2, d0s2);
	strlcpy(dst0b, src2, d0s2);
	printf("ft_strlcpy:\t%s", dst0a);
	printf("sy_strlcpy:\t%s", dst0b);
	assert(strcmp(dst0a, dst0b) == 0);

	ft_strlcpy(dst1a, src2, d1s2);
	strlcpy(dst1b, src2, d1s2);
	printf("ft_strlcpy:\t%s", dst1a);
	printf("sy_strlcpy:\t%s", dst1b);
	assert(strcmp(dst1a, dst1b) == 0);

	ft_strlcpy(dst5a, srcn, d5sn);
	strlcpy(dst5b, srcn, d5sn);
	printf("ft_strlcpy:\t%s", dst5a);
	printf("sy_strlcpy:\t%s", dst5b);
	assert(strcmp(dst5a, dst5b) == 0);

	printf("the function passed all test cases!");
	return 0;
}
