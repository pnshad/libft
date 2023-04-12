/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_substr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:34:51 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/12 17:47:28 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    char 	src1[] = "Hello, world!";
    char 	*src2 = NULL;
	int		start;
	size_t	len;

	start = 7;
	len = 5;
	printf("start: %d\tlen: %zu\n", start, len);
	printf("src: %s\t", src1);
	printf("output: %s\n", ft_substr(src1, start, len));
	assert(ft_strncmp(ft_substr(src1, start, len), "world", len) == 0);

	start = 0;
	len = 5;
	printf("start: %d\tlen: %zu\n", start, len);
	printf("src: %s\t", src1);
	printf("output: %s\n", ft_substr(src1, start, len));
	assert(ft_strncmp(ft_substr(src1, start, len), "Hello", len) == 0);

	start = 7;
	len = 6;
	printf("start: %d\tlen: %zu\n", start, len);
	printf("src: %s\t", src1);
	printf("output: %s\n", ft_substr(src1, start, len));
	assert(ft_strncmp(ft_substr(src1 + 100, start, len), "world!", len) == 0);

	start = 3;
	len = 0;
	printf("start: %d\tlen: %zu\n", start, len);
	printf("src: %s\t", src1);
	printf("output: %s\n", ft_substr(src1, start, len));
	assert(ft_strncmp(ft_substr(src1, start, len), "", len) == 0);

	start = 7;
	len = 20;
	printf("start: %d\tlen: %zu\n", start, len);
	printf("src: %s\t", src1);
	printf("output: %s\n", ft_substr(src1, start, len));
	assert(ft_strncmp(ft_substr(src1, start, len), "world!", len) == 0);

	start = 13;
	len = 5;
	printf("start: %d\tlen: %zu\n", start, len);
	printf("src: %s\t", src1);
	printf("output: %s\n", ft_substr(src1, start, len));
	assert(ft_strncmp(ft_substr(src1, start, len), "", len) == 0);

	start = 7;
	len = 5;
	printf("start: %d\tlen: %zu\n", start, len);
	printf("src: %s\t", src2);
	printf("output: %s\n", ft_substr(src2, start, len));
	assert(ft_substr(src2, start, len) == NULL);

	return (0);
}
