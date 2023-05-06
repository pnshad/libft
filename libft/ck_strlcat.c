/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 02:35:35 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/06 03:19:11 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ck_strlcat(void)
{
	printf("ft_strlcat >>> testing...\n\n");

	// Test case 1: Joining a string with another string, ensuring null termination
    printf("Test case 1: Joining a string with another string, ensuring null termination\n");
    char dst14a[15] = "Hello";
    char dst14b[15] = "Hello";
    char src08[9] = ", World!";
    size_t d14s08 = 13;
    printf("                  src: \"%s\"\n", src08);
    printf("dst before ft_strlcat: \"%s\"\n", dst14a);
    printf("    ft_strlcat output: \"%zu\"\n", ft_strlcat(dst14a, src08, d14s08));
    printf(" dst after ft_strlcat: \"%s\"\n", dst14a);
    printf("   dst before strlcat: \"%s\"\n", dst14b);
    printf("       strlcat output: \"%zu\"\n", strlcat(dst14b, src08, d14s08));
    printf("    dst after strlcat: \"%s\"\n", dst14b);
    assert(strcmp(dst14a, dst14b) == 0);
    printf("\n");

    // Test case 2: Joining a string with another long string, ensuring null termination
    printf("Test case 2: Joining a string with another long string, ensuring null termination\n");
    char dst17a[17] = "Hello";
    char dst17b[17] = "Hello";
    char src17[] = ", my name is John";
    size_t d17s17 = 17;
    printf("                  src: \"%s\"\n", src17);
    printf("dst before ft_strlcat: \"%s\"\n", dst17a);
    printf("    ft_strlcat output: \"%zu\"\n", ft_strlcat(dst17a, src17, d17s17));
    printf(" dst after ft_strlcat: \"%s\"\n", dst17a);
    printf("   dst before strlcat: \"%s\"\n", dst17b);
    printf("       strlcat output: \"%zu\"\n", strlcat(dst17b, src17, d17s17));
    printf("    dst after strlcat: \"%s\"\n", dst17b);
    assert(strcmp(dst17a, dst17b) == 0);
    printf("\n");

    // Test case 3: Joining a string with an empty string, ensuring null termination
    printf("Test case 3: Joining a string with an empty string, ensuring null termination\n");
    char dst00a[1] = "";
    char dst00b[1] = "";
    char src00[] = "";
    size_t d00s08 = 0;
    printf("                  src: \"%s\"\n", src00);
    printf("dst before ft_strlcat: \"%s\"\n", dst00a);
    printf("    ft_strlcat output: \"%zu\"\n", ft_strlcat(dst00a, src00, d00s08));
    printf(" dst after ft_strlcat: \"%s\"\n", dst00a);
    printf("   dst before strlcat: \"%s\"\n", dst00b);
    printf("       strlcat output: \"%zu\"\n", strlcat(dst00b, src00, d00s08));
    printf("    dst after strlcat: \"%s\"\n", dst00b);
    assert(strcmp(dst00a, dst00b) == 0);
    printf("\n");

    // Test case 4: Joining an empty string with a string, ensuring null termination
    printf("Test case 4: Joining an empty string with a string, ensuring null termination\n");
    char dst02a[2] = "1";
    char dst02b[2] = "1";
    size_t d02s08 = 1;
    printf("                  src: \"%s\"\n", src08);
    printf("dst before ft_strlcat: \"%s\"\n", dst02a);
    printf("    ft_strlcat output: \"%zu\"\n", ft_strlcat(dst02a, src08, d02s08));
    printf(" dst after ft_strlcat: \"%s\"\n", dst02a);
    printf("   dst before strlcat: \"%s\"\n", dst02b);
    printf("       strlcat output: \"%zu\"\n", strlcat(dst02b, src08, d02s08));
    printf("    dst after strlcat: \"%s\"\n", dst02b);
    assert(strcmp(dst02a, dst02b) == 0);
    printf("\n");

    // Test case 5: Joining a string with another string, including null bytes
    printf("Test case 5: Joining a string with another string, including null bytes\n");
    char dst14c[15] = "Hello";
    char dst14d[15] = "Hello";
    char srcnu[] = "NULL \0 is here";
    size_t d14snu = 14;
    printf("                  src: \"%s\"\n", srcnu);
    printf("dst before ft_strlcat: \"%s\"\n", dst14c);
    printf("    ft_strlcat output: \"%zu\"\n", ft_strlcat(dst14c, srcnu, d14snu));
    printf(" dst after ft_strlcat: \"%s\"\n", dst14c);
    printf("   dst before strlcat: \"%s\"\n", dst14d);
    printf("       strlcat output: \"%zu\"\n", strlcat(dst14d, srcnu, d14snu));
    printf("    dst after strlcat: \"%s\"\n", dst14d);
    assert(strcmp(dst14c, dst14d) == 0);
   	printf("\n");

	printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}
