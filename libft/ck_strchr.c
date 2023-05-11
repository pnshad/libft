/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:12:24 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/11 17:31:07 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ck_strchr(void)
{   
    char str1[] = "Hello, world!";
    char str3[] = "abcdefg";
    char str4[] = "11111";
    char str5[] = "This string contains the letter a.";
    char str6[] = "The rain in Spain falls mainly on the plain.";
    char str7[] = "Mississippi vibe";
    
	printf("\nft_strchr >>> testing...\n\n");

	// Test case 1: Searching for a character in the middle of a string
    printf("Test case 1: Searching for a character in the middle of a string\n");
    printf("String: \"%s\"\n", str1);
    printf("Search character: 'w'\n");
    printf("ft_strchr output: %p\n", ft_strchr(str1, 'w'));
    printf("   strchr output: %p\n", strchr(str1, 'w'));
    assert(ft_strchr(str1, 'w') == strchr(str1, 'w'));
    printf("\n");

    // Test case 2: Searching for a character at the beginning of a string
    printf("Test case 2: Searching for a character at the beginning of a string\n");
    printf("String: \"%s\"\n", str3);
    printf("Search character: 'a'\n");
    printf("ft_strchr output: %p\n", ft_strchr(str3, 'a'));
    printf("   strchr output: %p\n", strchr(str3, 'a'));
    assert(ft_strchr(str3, 'a') == strchr(str3, 'a'));
    printf("\n");

    // Test case 3: Searching for a character that does not appear in the string
    printf("Test case 3: Searching for a character that does not appear in the string\n");
    printf("String: \"%s\"\n", str4);
    printf("Search character: '2'\n");
    printf("ft_strchr output: %p\n", ft_strchr(str4, '2'));
    printf("   strchr output: %p\n", strchr(str4, '2'));
    assert(ft_strchr(str4, '2') == strchr(str4, '2'));
    printf("\n");

    // Test case 4: Searching for a null character
    printf("Test case 4: Searching for a null character \n");
    printf("String: \"%s\"\n", str5);
    printf("Search character: '\\0'\n");
    printf("ft_strchr output: %p\n", ft_strchr(str5, '\0'));
    printf("   strchr output: %p\n", strchr(str5, '\0'));
    assert(ft_strchr(str5, '\0') == strchr(str5, '\0'));
    printf("\n");

    // Test case 5: Searching for a character that appears multiple times in the string
    printf("Test case 5: Searching for a character that appears multiple times in the string\n");
    printf("String: \"%s\"\n", str6);
    printf("Search character: 'a'\n");
    printf("ft_strchr output: %p\n", ft_strchr(str6, 'a'));
    printf("   strchr output: %p\n", strchr(str6, 'a'));
    assert(ft_strchr(str6, 'a') == strchr(str6, 'a'));
    printf("\n");

    // Test case 6: Searching for a character at the end of a string
    printf("Test case 6: Searching for a character at the end of a string\n");
    printf("String: \"%s\"\n", str7);
    printf("Search character: 'e'\n");
    printf("ft_strchr output: %p\n", ft_strchr(str7, 'e'));
    printf("   strchr output: %p\n", strchr(str7, 'e'));
    assert(ft_strchr(str7, 'e') == strchr(str7, 'e'));
    printf("\n");

    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}

static void run_strchr_test_case(void *qry ,char tgt, char *des)
    printf("Test case %s\n");
    printf("          String:");
	print_array(str)
    printf("Search character: 'w'\n");
    printf("ft_strchr output: %p\n", ft_strchr(str1, 'w'));
    printf("   strchr output: %p\n", strchr(str1, 'w'));
    assert(ft_strchr(str1, 'w') == strchr(str1, 'w'));
    printf("\n");
	
	// Test case 1: Searching for a character in the middle of a string
    printf("Test case 1: Searching for a character in the middle of a string\n");
    printf("String: \"%s\"\n", str1);
    printf("Search character: 'w'\n");
    printf("ft_strchr output: %p\n", ft_strchr(str1, 'w'));
    printf("   strchr output: %p\n", strchr(str1, 'w'));
    assert(ft_strchr(str1, 'w') == strchr(str1, 'w'));
    printf("\n");
