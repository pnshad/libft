/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:31:50 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/07 02:28:28 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  void run_atoi_test_case(char *input, char *description);

void ck_atoi(void)
{
	char input1[] = "hello123";
	char input2[] = "-456bye";
	char input3[] = "0";
	char input4[] = "2147483647";
	char input5[] = "-2147483648";
	char input6[] = "-+123";
	char input7[] = "   -12 3";

	printf("\nft_atoi  >>> testing...\n\n");
	
	run_atoi_test_case(input1, "1: input beginning with alphabet");
	run_atoi_test_case(input2, "2: input with sign ending with alphabet");
	run_atoi_test_case(input3, "3: zero");
	run_atoi_test_case(input4, "4: Maximum positive number");
	run_atoi_test_case(input5, "5: Minimum negative number");
	run_atoi_test_case(input6, "6: Repeated sign symbols");
	run_atoi_test_case(input7, "7: Space deliminated numbers");
	
	printf("function passed all test cases successfully!");
	printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}

static	void run_atoi_test_case(char *input, char *description)
{
	int ft_atoi_out;
	int sy_atoi_out;
	printf("Test case %s\n", description);
	printf("  input: %s\n", input);
	ft_atoi_out = ft_atoi(input);
	sy_atoi_out = atoi(input);
	printf("ft_atoi:\t%d\n", ft_atoi_out);
	printf("   atoi:\t%d\n", sy_atoi_out);
	assert(ft_atoi_out == sy_atoi_out);
	printf("\n");
}
