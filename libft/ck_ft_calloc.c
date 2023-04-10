/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_calloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 01:27:01 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/10 04:29:13 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *str_ft;
	char *str_sy;
	size_t	count;
	size_t	i;
	size_t	size;

	i = 0;
	count = 10;
	size = sizeof(char);
	str_ft =(char *)ft_calloc(count, size);
	str_sy =(char *)calloc(count, size);
    if (str_ft == NULL && str_sy == NULL)
        printf("count = %zu, size = %zu both str_ft & str_sy are NULL\n" , count, size);
    else if (str_ft == NULL)
        printf("count = %zu, size = %zu str_ft is NULL\n" , count, size);
    else if (str_sy == NULL)
        printf("count = %zu, size = %zu str_sy is NULL\n" , count, size);
    else
        while (i < count)
        {
            printf("ft_output: %d\t", str_ft[i]);
            printf("sy_output: %d\n", str_sy[i]);
            i++;
        }
	assert(ft_memcmp(str_ft, str_sy, count)==0);
	printf("count = %zu, size = %zu test is passed\n", count, size);

	i = 0;
	count = 0;
	size = sizeof(char);
	str_ft =(char *)ft_calloc(count, size);
	str_sy =(char *)calloc(count, size);
    if (str_ft == NULL && str_sy == NULL)
        printf("count = %zu, size = %zu both str_ft & str_sy are NULL\n" , count, size);
    else if (str_sy == NULL)
        printf("count = %zu, size = %zu str_sy is NULL\n", count, size);
    else
        while (i < count)
        {
            printf("ft_output: %d\t", str_ft[i]);
            printf("sy_output: %d\n", str_sy[i]);
            i++;
        }
//	assert(ft_memcmp(str_ft, str_sy, count)==0);i
	printf("count = %zu, size = %zu test is passed\n", count, size);

	i = 0;
	count = 10;
	size = 0;
	str_ft =(char *)ft_calloc(count, size);
	str_sy =(char *)calloc(count, size);
    if (str_ft == NULL && str_sy == NULL)
        printf("count = %zu, size = %zu both str_ft & str_sy are NULL\n" , count, size);
    else if (str_ft == NULL)
        printf("count = %zu, size = %zu str_ft is NULL\n", count, size);
    else if (str_sy == NULL)
        printf("count = %zu, size = %zu str_sy is NULL\n", count, size);
    else
        while (i < count)
        {
            printf("ft_output: %d\t", str_ft[i]);
            printf("sy_output: %d\n", str_sy[i]);
            i++;
        }
//	assert(ft_memcmp(str_ft, str_sy, count)==0);
	printf("count = %zu, size = %zu test is passed\n", count, size);
	
	i = 0;
	count = SIZE_MAX;
	size = sizeof(char);
	str_ft =(char *)ft_calloc(count, size);
	str_sy =(char *)calloc(count, size);
	if (str_ft == NULL && str_sy == NULL)
		printf("count = %zu, size = %zu both str_ft & str_sy are NULL\n" , count, size);
	else if (str_ft == NULL)
		printf("count = %zu, size = %zu str_ft is NULL\n", count, size);
	else if (str_sy == NULL)
		printf("count = %zu, size = %zu str_sy is NULL\n", count, size);
	else
		/*while (i < count)
		{	
			printf("ft_output: %d\t", str_ft[i]);
			printf("sy_output: %d\n", str_sy[i]);
			i++;
		}*/
	assert(ft_memcmp(str_ft, str_sy, count)==0);
	printf("count = %zu, size = %zu test is passed\n", count, size);
	printf("output arrays are identical, test passed!\n");
	return (0);
}
