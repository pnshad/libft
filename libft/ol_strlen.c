/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_strlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:10:41 by pnourish          #+#    #+#             */
/*   Updated: 2023/03/28 20:32:19 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	assert(ft_strlen("Hello")==strlen("Hello"));
	assert(ft_strlen("")==strlen(""));
	assert(ft_strlen("1234567890")==strlen("1234567890"));
	assert(ft_strlen("\n")==strlen("\n"));
	assert(ft_strlen("This is a long one.")==strlen("This is a long one."));
	assert(ft_strlen("中文")==strlen("中文"));
	assert(ft_strlen("🙂😊😀")==strlen("🙂😊😀"));
	printf("The function passed all test cases\n");
}
