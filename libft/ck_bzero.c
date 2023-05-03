/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 02:06:57 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/03 05:51:26 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void ck_bzero(void)
{
    char str1[] = "Hello, world!";
    char str2[] = "Hello, world!";
    char str3[] = "Hello, world!";
    char str4[] = "Hello, world!";

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
	size_t len1 = strlen(str1);
    size_t len3 = sizeof(arr1);

	printf("\nft_bzero testing...\n\n");
	
	// Test case 1: Zero out a string
    printf("Test case 1: Zero out a string\n");
    printf("   input:\t%s\n", str1);
    ft_bzero(str1, len1);
    printf("ft_bzero:\t%s\n", (char *)str1);
	printf("   input:\t%s\n", str2);
    bzero(str2, len1);
    printf("   bzero:\t%s\n", (char *)str2);
    assert(memcmp(str1, str2, len1) == 0);

    // Test case 2: Zero out an array of integers
    printf("\nTest case 2: Zero out an array of integers\n");
    
    printf("   input:\t");
	for (size_t i = 0; i < 5; i++)
		printf("%d ", arr1[i]);
    printf("\n");
    ft_bzero(arr1, len3);
    printf("ft_bzero:\t");
    for (size_t i = 0; i < 5; i++)
		printf("%d ", arr1[i]);
    printf("\n");
    printf("   input:\t");
	for (size_t i = 0; i < 5; i++)
		printf("%d ", arr2[i]);
    printf("\n");
	bzero(arr2, len3);
    printf("   bzero:\t");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Check that the output of ft_bzero matches bzero
    assert(memcmp(arr1, arr2, len3) == 0);

    // Test case 3: Zero out a portion of a string
    printf("\nTest case 3: Zero out a portion of a string\n");
    printf("outputs are not strings and are printed as char arrays\n");
	printf("   input:\t%s\n", str3);
    ft_bzero(str3, 5);
    
    printf("ft_bzero:\t");
    for (size_t i = 0; i < len1; i++)
		printf("%c", str3[i]);
    printf("\n");

    printf("   input:\t%s\n", str4);
    bzero(str4, 5);
    

    printf("   bzero:\t");
    for (size_t i = 0; i < len1; i++)
        printf("%c", str4[i]);
    // Check that the output of ft_bzero matches bzero
    assert(memcmp(str3, str4, 5) == 0);

    printf("\nft_bzero passed all test cases successfully!\n");
	printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
	// Print a message indicating that all tests passed

}
