/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printarr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 03:12:15 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/25 00:29:02 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_libmy.h"

void my_printa(const void *arr, size_t arr_size, size_t elem_size,const char *format)
{
    const unsigned char *p;
	size_t	i;
	size_t	count;

	p = arr;
	i = 0;
	if (!(strcmp(format,"%c")) && arr && !arr_size)
		arr_size = strlen(arr) + 1;

	if (elem_size == 0)
		count = 0;
	else
		count = arr_size / elem_size;
    printf("{");
	if ((arr_size > 25 && !(strcmp(format,"%c"))) || !arr)
		printf("%s",(char *)arr);
	else
		while (i < count) 
		{
        	printf("[");
        	if (!(strcmp(format,"%c")) && !(*(p + i * elem_size)))
				printf("\\0 ");
			else if (!(strcmp(format,"%c")) && !(isprint(*(p + i * elem_size))))
				printf("0x%02X", (unsigned char)*(p + i * elem_size));
			else
			{	
				printf(" ");
				printf(format, *(int *)(p + i * elem_size));
        		printf(" ");
			}
			printf("]");
			i++;
    	}
	printf("}");
}
