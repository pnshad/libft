/* ********************************************d****************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:50:09 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/04 19:50:09 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ck_memcpy(void)
{
    char src[] = "Hello, World!";
    char *dst = (char *)malloc(strlen(src) + 1 * sizeof(char));
    char *dst2 = (char *)malloc(strlen(src) + 1 * sizeof(char));
    int digsrc[] = {1, 2, 2, 4, 5};
    int *digdst = (int *)malloc(5 * sizeof(int));
    int *digdst2 = (int *)malloc(5 * sizeof(int));
    printf("ft_memcpy >>> testing...\n\n");

    printf("Test case 1: copying 'Hello, World!' into a destination string using ft_memcpy\n");
    printf("src: \"%s\"\n", src);
    printf("dst before copying: \"%s\"\n", dst);
    ft_memcpy(dst, src, strlen(src));
    printf("dst after ft_memcpy: \"%s\"\n", dst);
    printf("dst2 before copying: \"%s\"\n", dst2);
    memcpy(dst2, src, strlen(src));
	printf("dst2 after memcpy: \"%s\"\n", dst2);
    assert(strcmp(dst, dst2) == 0);
    printf("\n");

    printf("Test case 2: copying {1, 2, 2, 4, 5} into a destination array using ft_memcpy\n");
    printf("\ndigsrc: {1, 2, 2, 4, 5}\n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", digsrc[i]);
    printf("\ndigdst before copying:\n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", digdst[i]);
    ft_memcpy(digdst, digsrc, 5 * sizeof(int));
    printf("\ndigdst after ft_memcpy:\n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", digdst[i]);
    
    printf("\ndigdst2 before copying:\n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", digdst2[i]);
	memcpy(digdst2, digsrc, 5 * sizeof(int));
    printf("\ndigdst2 after memcpy:\n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", digdst2[i]);
    assert(memcmp(digdst, digdst2, 5 * sizeof(int)) == 0);
    printf("\n");
    
	free(dst);
    free(dst2);
    free(digdst);
    free(digdst2);
printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}
