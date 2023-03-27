/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_isprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 20:37:01 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/26 21:01:00 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>
#include <ctype.h>
#include "ft_isprint.c"

int	main(void)
{
	assert(ft_isprint('A') == isprint('A'));
	assert(ft_isprint('\t') == isprint('\t'));
	assert(ft_isprint(' ') == isprint(' '));
	assert(ft_isprint('\0') == isprint('\0'));
	assert(ft_isprint('\x02') == isprint('\x02'));
	assert(ft_isprint(0xE9) == isprint(0xE9));
	printf("The function passed all test cases\n");
	return (0);
}
