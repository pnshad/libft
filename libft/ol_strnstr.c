/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_strnstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 21:42:42 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/02 01:09:16 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    char *big1 = "in this sentence I want you to try to find this beautiful word, isn't it beautiful";
    char *little1 = "beautiful";
    char *little2 = "";
    char *little3 = "technical";
    char *little4 = "\0";
    char *little5 = "this";
    int biglen;

    biglen = strlen(big1);
    printf("ft_output of\n\t%s\n&\n\t%s\nis: | \t%s\n",big1, little1, ft_strnstr(big1, little1, biglen));
    printf("sy_output of\n\t%s\n&\n\t%s\nis: | \t%s\n",big1, little1, strnstr(big1, little1, biglen));
    assert(strcmp(ft_strnstr(big1, little1, biglen), strnstr(big1, little1, biglen)) == 0);

    printf("ft_output of\n\t%s\n&\n\t%s\nis: | \t%s\n",big1, little2, ft_strnstr(big1, little2, biglen));
    printf("sy_output of\n\t%s\n&\n\t%s\nis: | \t%s\n",big1, little2, strnstr(big1, little2, biglen));
    assert(strcmp(ft_strnstr(big1, little2, biglen), strnstr(big1, little2, biglen)) == 0);

    printf("ft_output of\n\t%s\n&\n\t%s\nis: | \t%s\n",big1, little3, ft_strnstr(big1, little3, biglen));
    printf("sy_output of\n\t%s\n&\n\t%s\nis: | \t%s\n",big1, little3, strnstr(big1, little3, biglen));
    assert(ft_strnstr(big1, little3, biglen) == strnstr(big1, little3, biglen));

    printf("ft_output of\n\t%s\n&\n\t%s\nis: | \t%s\n",big1, little4, ft_strnstr(big1, little4, biglen));
    printf("sy_output of\n\t%s\n&\n\t%s\nis: | \t%s\n",big1, little4, strnstr(big1, little4, biglen));
    assert(strcmp(ft_strnstr(big1, little4, biglen), strnstr(big1, little4, biglen)) == 0);

    printf("ft_output of\n\t%s\n&\n\t%s\nis: | \t%s\n",big1, little5, ft_strnstr(big1, little5, biglen));
    printf("sy_output of\n\t%s\n&\n\t%s\nis: | \t%s\n",big1, little5, strnstr(big1, little5, biglen));
    assert(strcmp(ft_strnstr(big1, little5, biglen), strnstr(big1, little5, biglen)) == 0);

printf("function passed all test cases successfully!");
    return (0);
}
