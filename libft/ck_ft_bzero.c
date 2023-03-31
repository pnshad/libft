/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_bzero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 21:48:55 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/01 00:30:53 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "hello";
    char str2[] = "world";
    char str3[] = "goodbye";

    printf("Before bzero:\nstr1: %s\nstr2: %s\nstr3: %s\n\n", str1, str2, str3);

    ft_bzero(str1, sizeof(str1));
    bzero(str2, sizeof(str2));

    printf("After ft_bzero and bzero:\nstr1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);

    return 0;
}
