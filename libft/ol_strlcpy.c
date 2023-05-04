/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_strlcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 20:01:59 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/08 22:48:29 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int main(void)
{
	char dst5a[5];
	char dst0a[] = "";
	char dst1a[1] = {'1'};
	char dst5b[5];
	char dst0b[] = "";
	char dst1b[1] = {'1'};
	char src2[] = "Hi";
	char src5[] = "Hello";
	char src9[] = "Hello, Hi";
	char srcn[] = "NU\0,nn";
	size_t d5s2 = 4; 
	size_t d5s5 = 5;
	size_t d5s9 = 4;
	size_t d0s2 = 0;
	size_t d1s2 = 1;
	size_t d5sn = 4;
	size_t ft;
	size_t sy;

	ft = ft_strlcpy(dst5a, src2, d5s2);
	sy = strlcpy(dst5b, src2, d5s2);
	printf("d5s2_ft_strlcpy:\t%s\n", dst5a);
	printf("d5s2_sy_strlcpy:\t%s\n", dst5b);
	assert((ft == sy) && (strcmp(dst5a, dst5b) == 0));

	ft_strlcpy(dst5a, src5, d5s5);
	strlcpy(dst5b, src5, d5s5);
	printf("d5s5_ft_strlcpy:\t%s\n", dst5a);
	printf("d5s5_sy_strlcpy:\t%s\n", dst5b);
	assert((ft == sy) && (strcmp(dst5a, dst5b) == 0));

	ft_strlcpy(dst5a, src9, d5s9);
	strlcpy(dst5b, src9, d5s9);
	printf("d5s9_ft_strlcpy:\t%s\n", dst5a);
	printf("d5s9_sy_strlcpy:\t%s\n", dst5b);
	assert((ft == sy) && (strcmp(dst5a, dst5b) == 0));

	ft_strlcpy(dst0a, src2, d0s2);
	strlcpy(dst0b, src2, d0s2);
	printf("d0s2_ft_strlcpy:\t%s\n", dst0a);
	printf("d0s2_sy_strlcpy:\t%s\n", dst0b);
	assert((ft == sy) && (strcmp(dst0a, dst0b) == 0));

	ft_strlcpy(dst1a, src2, d1s2);
	strlcpy(dst1b, src2, d1s2);
	printf("d1s2_ft_strlcpy:\t%s\n", dst1a);
	printf("d1s2_sy_strlcpy:\t%s\n", dst1b);
	assert((ft == sy) && (strcmp(dst1a, dst1b) == 0));

	ft_strlcpy(dst5a, srcn, d5sn);
	strlcpy(dst5b, srcn, d5sn);
	printf("d5sn_ft_strlcpy:\t%s\n", dst5a);
	printf("d5sn_sy_strlcpy:\t%s\n", dst5b);
	assert((ft == sy) && (strcmp(dst5a, dst5b) == 0));

	printf("the function passed all test cases!\n");
	return 0;
}
