/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printarr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 03:12:15 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/07 03:35:07 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmy.h"

void	print_array(void* array, size_t size)
{
	size_t	i;

	i = 0;
    printf("[");
    while (i < size)
	{
        if (i > 0) printf(", ");
        if (sizeof(array[0]) == sizeof(char))
            printf("'%c'", ((char*)array)[i]);
        else if (sizeof(array[0]) == sizeof(int))
            printf("%d", ((int*)array)[i]);
		i++;
    }
    printf("]\n");
}
