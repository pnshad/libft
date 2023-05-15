/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_strlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:10:41 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/14 03:13:00 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void run_strlen_test_case(char *src, char *des);

void	ck_strlen(void)
{
	// Print header for the test cases
    printf("ft_strlen >>> testing...\n\n");

	// Test case 1: a normal string
	run_strlen_test_case("Hello", "1: a normal string");

	// Test case 2: an empty string
	run_strlen_test_case("", "2: an empty string");

	// Test case 3: a string of numbers
	run_strlen_test_case("1234567890", "3. a string of numbers");

	// Test case 4: a string with non printable charachter
	run_strlen_test_case("\n", "4: a string with non printable charachter");

	// Test case 5: a string containing non unicode characters 
	run_strlen_test_case("中文", "5: a string containing non unicode characters");

	// Test case 6: a string containing emojies 
	run_strlen_test_case("🙂😊😀", "6: a string containing emojies");

    printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}

void run_strlen_test_case(char *src, char *des)
{
	size_t	out_ft;
	size_t	out_sy;

    // Print the test case description and input parameters
    printf("Test case %s", des);
    printf("\n   source string: ");
    my_printa(src, strlen(src) + 1, sizeof(char), "%c");

	// Call the custom strlen function and print the result
    out_ft = ft_strlen(src);
    printf("\nft_strlen output: %zu", out_ft);

	// Call the standard strlen function and print the result
    out_sy = strlen(src);
    printf("\n   strlen output: %zu", out_sy);
	
	// Controlling the outputs
	assert(out_sy == out_ft);
    printf("\n\n");
}
