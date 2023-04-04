/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_bzero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:49:49 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/04 17:09:13 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 


int main()
{
    char str1[] = "Hello, world!";
    char str2[] = "Testing 1 2 3";
    char str3[] = "Hello, world!";
    char str4[] = "Testing 1 2 3";

    int arr[] = {1, 2, 3, 4, 5};
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    size_t len3 = sizeof(arr);

    // Test case 1: Zero out a string
    printf("Test case 1: Zero out a string\n");
    printf("Before ft_bzero: %s\n", str1);
    ft_bzero(str1, len1);
    printf("After ft_bzero:  %s\n", str1);
    printf("Before bzero:   %s\n", str2);
    bzero(str2, len2);
    printf("After bzero:    %s\n", str2);

    // Check that the output of ft_bzero matches bzero
    assert(memcmp(str1, str2, len1) == 0);

    // Test case 2: Zero out an array of integers
    printf("\nTest case 2: Zero out an array of integers\n");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    ft_bzero(arr, len3);
    printf("After ft_bzero:  ");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    bzero(arr, len3);
    printf("After bzero:    ");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Check that the output of ft_bzero matches bzero
    assert(memcmp(arr, (int[]){0, 0, 0, 0, 0}, len3) == 0);

    // Test case 3: Zero out a portion of a string
    printf("\nTest case 3: Zero out a portion of a string\n");
    printf("Before ft_bzero: %s\n", str3);
    ft_bzero(str3, 5);
    printf("After ft_bzero:  %s\n", str3);
    printf("Before bzero:   %s\n", str4);
    bzero(str4, 5);
    printf("After bzero:    %s\n", str4);

    // Check that the output of ft_bzero matches bzero
    printf("%d is the memcmp output", memcmp(str3, str4, 5));
    assert(memcmp(str3, str4, 5) == 0);

    printf("\nAll test cases passed!\n"); // Print a message indicating that all tests passed

    return 0;
}
