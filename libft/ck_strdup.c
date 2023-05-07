/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:30:13 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/06 03:19:14 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ck_strdup(void)
{
    char *p_ft;
    char *p_sy;
    char *test1;
    char *test2;

    printf("ft_strdup >>> testing...\n\n");

    // Test case 1: Duplicating a non-empty string
    printf("Test case 1: Duplicating a non-empty string\n");
    printf("Challenge: Testing ft_strdup with a non-empty string input\n");
    test1 = "hello";
    printf("Input: \"%s\"\n", test1);
    p_ft = ft_strdup(test1);
    p_sy = strdup(test1);
    printf("ft_strdup output: \"%s\"\n", p_ft);
    printf("   strdup output: \"%s\"\n", p_sy);
    assert(memcmp((const void *)p_ft, (const void *)p_sy, ft_strlen(test1) + 1) == 0);
    printf("\n");

    // Test case 2: Duplicating an empty string
    printf("Test case 2: Duplicating an empty string\n");
    printf("Challenge: Testing ft_strdup with an empty string input\n");
    test1 = "";
    printf("Input: \"%s\"\n", test1);
    p_ft = ft_strdup(test1);
    p_sy = strdup(test1);
    printf("ft_strdup output: \"%s\"\n", p_ft);
    printf("   strdup output: \"%s\"\n", p_sy);
    assert(memcmp((const void *)p_ft, (const void *)p_sy, ft_strlen(test1) + 1) == 0);
    printf("\n");

    // Test case 3: Duplicating a string that contains null characters
    printf("Test case 3: Duplicating a string that contains null characters\n");
    printf("Challenge: Testing ft_strdup with a string containing null characters\n");
    test1 = "hello\0world";
    printf("Input: \"%s\"\n", test1);
    p_ft = ft_strdup(test1);
    p_sy = strdup(test1);
    printf("ft_strdup output: \"%s\"\n", p_ft);
    printf("   strdup output: \"%s\"\n", p_sy);
    assert(memcmp((const void *)p_ft, (const void *)p_sy, ft_strlen(test1) + 1) == 0);
    printf("\n");

    // Test case 4: Duplicating a null string
    printf("Test case 4: Duplicating a null string\n");
    printf("Challenge: Testing ft_strdup with a NULL input\n");
    test2 = NULL;
    printf("Input: NULL\n");
    p_ft = ft_strdup(test2);
    printf("ft_strdup output: %p\n", p_ft);
    printf("   strdup output: strdup doesn't handle NULL\n");
    assert(p_ft == NULL);
    printf("\n");
    
	printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}
