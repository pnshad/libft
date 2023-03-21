/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 04:39:26 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/03 05:11:04 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int start, int end)
{
	int size;
	int i;
	int *range;

	i = 0;
	size = start - end >= 0 ? (start - end) + 1  : (end - start) + 1;
	range = (int *)malloc(sizeof(int)*size);

	if (end > start)
	{	
		i = 0;
		while (i < size)
		{
			range[i] = start + i;
			i++;
		}
	}
	else
	{
		while (i < size)
		{
			range[i] = start - i;
			i++;
		}
	}
	return (range);
}

#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Usage: ./ft_range start end\n");
        return (1);
    }

    int start = atoi(argv[1]);
    int end = atoi(argv[2]);

    int *range = ft_range(start, end);
    if (!range)
    {
        printf("Error: ft_range returned NULL\n");
        return (1);
    }

    printf("[ ");
    for (int i = 0; i <= end - start; i++)
    {
        printf("%d ", range[i]);
    }
    printf("]\n");

    free(range);
    return (0);
}
