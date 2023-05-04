/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 01:15:44 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/02 00:18:54 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    char src[] = "Hello, World!";
    char *dst;
    dst = (char *)malloc(strlen(src) + 1 * sizeof(char));
    char *dst2;
    dst2 = (char *)malloc(strlen(src) + 1 * sizeof(char));
    int digsrc[] = {1,2,2,4,5};
    int *digdst;
    digdst = (int *)malloc(5 * sizeof(int));
    int *digdst2;
    digdst2 = (int *)malloc(5 * sizeof(int));
    int i = 0;

    printf("\"%s\" is the src\n", src);
    printf("\"%s\" is the dst before the copy\n", dst);
    ft_memcpy(dst, src, strlen(src));
    memcpy(dst2, src, strlen(src));
    printf("\"%s\" is the dst after the ft_memcpy\n", dst);
    printf("\"%s\" is the dst2 after the memcpy\n", dst2);
    assert(strcmp(dst, dst2) == 0);

    while (i < 5)
    {
        printf("%d\n", digsrc[i]);
        i++;
    }
    printf("is digsrc\n");
    ft_memcpy(digdst, digsrc,5*sizeof(int));
    i = 0;
    while (i < 5)
    {
        printf("%d\n", digdst[i]);
        i++;
    }
    memcpy(digdst2, digsrc,5*sizeof(int));
    printf("is digdst by ft_memcpy\n");
    i = 0;
    while (i < 5)
    {
        printf("%d\n", digdst2[i]);
        i++;
    }
    printf("is digdst2 by memcpy\n");
    assert(memcmp(digdst, digdst2, 5*sizeof(int)) == 0);

    free(dst);
    free(dst2);
    free(digdst);
    free(digdst2);
    printf("All tests passed successfully!\n");
    return 0;
}
