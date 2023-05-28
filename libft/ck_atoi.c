/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:31:50 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/12 16:58:44 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_libmy.h"

// Declaration of a helper function
static void run_atoi_test_case(char *input, char *description);

// The main function to test ft_atoi function
void ck_atoi(void)
{
    // Input strings for test cases
    char input1[] = "hello123";
    char input2[] = "-456bye";
    char input3[] = "0";
    char input4[] = "2147483647";
    char input5[] = "-2147483648";
    char input6[] = "-+123";
    char input7[] = "   -12 3";

    // Print the start of the test
    printf("\nft_atoi  >>> testing...\n\n");

    // Run each test case using the helper function
    run_atoi_test_case(input1, "1: input beginning with alphabet");
    run_atoi_test_case(input2, "2: input with sign ending with alphabet");
    run_atoi_test_case(input3, "3: zero");
    run_atoi_test_case(input4, "4: Maximum positive number");
    run_atoi_test_case(input5, "5: Minimum negative number");
    run_atoi_test_case(input6, "6: Repeated sign symbols");
    run_atoi_test_case(input7, "7: Space deliminated numbers");
    run_atoi_test_case(NULL, "8: NULL input");
	
    // Print the result of the test
    printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}

// A helper function to run a single test case
static void run_atoi_test_case(char *input, char *description)
{

    // Print the test case description and input
    printf("Test case %s\n", description);
    printf("  input: %s\n", input);

    // Checking for NULL inputs before running the functions
	if (!input)
	{
		printf("ft_atoi: function does not handle NULL input\n");
		printf("   atoi: function does not handle NULL input\n");
	}
	else
	{
		// Declaring output vaiables
    	int ft_atoi_out;
    	int sy_atoi_out;
		
		// Running ft_atoi function and the system atoi function on the inpu
		ft_atoi_out = ft_atoi(input);
    	sy_atoi_out = atoi(input);

    	// Print the results of the ft_atoi and atoi functions
    	printf("ft_atoi:\t%d\n", ft_atoi_out);
    	printf("   atoi:\t%d\n", sy_atoi_out);

    	// Check if the two outputs are equal using assert
    	assert(ft_atoi_out == sy_atoi_out);
	}
    // Add a new line for clarity
    printf("\n");
}

