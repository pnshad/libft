/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:58:49 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/06 02:34:45 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ck_strjoin(void)
{
    char *s1;
    char *s2;

    printf("ft_strjoin >>> testing...\n\n");

    // Test case 1: Joining two non-empty strings
    printf("Test case 1: Joining two non-empty strings\n");
    printf("Challenge   : Testing ft_strjoin with two non-empty strings\n");
    s1 = "Hello";
    s2 = " ,World!";
    printf("        s1: \"%s\"\n", s1);
    printf("        s2: \"%s\"\n", s2);
    printf("ft_strjoin: \"%s\"\n", ft_strjoin(s1, s2));
    printf("  expected: \"%s\"\n", "Hello ,World!");
    assert(strcmp(ft_strjoin(s1, s2), "Hello ,World!") == 0);
    printf("\n");

    // Test case 2: Joining an empty string and a non-empty string
    printf("Test case 2: Joining an empty string and a non-empty string\n");
    printf("Challenge   : Testing ft_strjoin with an empty string and a non-empty string\n");
    s1 = "";
    s2 = " ,World!";
    printf("        s1: \"%s\"\n", s1);
    printf("        s2: \"%s\"\n", s2);
    printf("ft_strjoin: \"%s\"\n", ft_strjoin(s1, s2));
    printf("  expected: \"%s\"\n", " ,World!");
    assert(strcmp(ft_strjoin(s1, s2), " ,World!") == 0);
    printf("\n");

    // Test case 3: Joining a non-empty string and an empty string
    printf("Test case 3: Joining a non-empty string and an empty string\n");
    printf("Challenge   : Testing ft_strjoin with a non-empty string and an empty string\n");
    s1 = "Hello";
    s2 = "";
    printf("        s1: \"%s\"\n", s1);
    printf("        s2: \"%s\"\n", s2);
    printf("ft_strjoin: \"%s\"\n", ft_strjoin(s1, s2));
    printf("  expected: \"%s\"\n", "Hello");
    assert(strcmp(ft_strjoin(s1, s2), "Hello") == 0);
    printf("\n");

    // Test case 4: Joining two empty strings
    printf("Test case 4: Joining two empty strings\n");
    printf("Challenge   : Testing ft_strjoin with two empty strings\n");
    s1 = "";
    s2 = "";
    printf("        s1: \"%s\"\n", s1);
    printf("        s2: \"%s\"\n", s2);
    printf("ft_strjoin: \"%s\"\n", ft_strjoin(s1, s2));
    printf("  expected: \"%s\"\n", "");
    assert(strcmp(ft_strjoin(s1, s2), "") == 0);
    printf("\n");

    // Test case 5: Joining a NULL string and a non-empty string
    printf("Test case 5: Joining a NULL string and a non-empty string\n");
    printf("Challenge   : Testing ft_strjoin with a NULL string and a non-empty string\n");
    s1 = NULL;
    s2 = " ,World!";
    printf("        s1: %s\n", s1);
    printf("        s2: \"%s\"\n", s2);
    printf("ft_strjoin: \"%s\"\n", ft_strjoin(s1, s2));
    printf("  expected: \"%s\"\n", " ,World!");
    assert(strcmp(ft_strjoin(s1, s2), " ,World!") == 0);
    printf("\n");

    // Test case 6: Joining a non-empty string and a NULL string
    printf("Test case 6: Joining a non-empty string and a NULL string\n");
    printf("Challenge   : Testing ft_strjoin with a non-empty string and a NULL string\n");
    s1 = "Hello";
    s2 = NULL;
    printf("        s1: \"%s\"\n", s1);
    printf("        s2: %s\n", s2);
    printf("ft_strjoin: \"%s\"\n", ft_strjoin(s1, s2));
    printf("  expected: \"%s\"\n", "Hello");
    assert(strcmp(ft_strjoin(s1, s2), "Hello") == 0);
    printf("\n");

    // Test case 7: Joining two long strings
    printf("Test case 7: Joining two long strings\n");
    printf("Challenge   : Testing ft_strjoin with two long strings\n");
    s1 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. ";
    s2 = "Praesent euismod nisi eget velit commodo, eu elementum urna bibendum. Suspendisse potenti. In hac habitasse platea dictumst.";
    printf("        s1: \"%s\"\n", s1);
    printf("        s2: \"%s\"\n", s2);
    printf("ft_strjoin: \"%s\"\n", ft_strjoin(s1, s2));
    printf("  expected: \"%s\"\n", "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent euismod nisi eget velit commodo, eu elementum urna bibendum. Suspendisse potenti. In hac habitasse platea dictumst.");
    assert(strcmp(ft_strjoin(s1, s2), "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent euismod nisi eget velit commodo, eu elementum urna bibendum. Suspendisse potenti. In hac habitasse platea dictumst.") == 0);
    printf("\n");

    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}
