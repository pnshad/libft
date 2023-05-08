/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printarr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 03:12:15 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/08 04:15:37 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmy.h"

void	print_array(void* array, size_t arrsize, size_t elmsize)
{
	size_t	i;
	size_t	arrlen;

	i = 0;
	if (elmsize == 0) 
		arrlen = 0;
	else
		arrlen = arrsize / elmsize;
    printf("[");
    while (i < arrlen)
	{
        if (i > 0) printf(", ");
        if (elmsize == sizeof(char))
            printf("'%c'", ((char*)array)[i]);
        if (elmsize == sizeof(int))
            printf("%d", ((int*)array)[i]);
		i++;
    }
    printf("]\n");
}
