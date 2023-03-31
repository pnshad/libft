/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_bzero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 21:48:55 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/31 23:42:10 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	char *test1 = "replace me with zeroes if you can!";
	ft_bzero(test1, 10);
	printf("the out: %s", test1);
	return (0);
}
