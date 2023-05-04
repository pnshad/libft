/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:31:50 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/03 05:48:30 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ck_atoi(void)
{
  char input1[] = "hello123";
  char input2[] = "-456bye";
  char input3[] = "0";
  char input4[] = "2147483647";
  char input5[] = "-2147483648";
  char input6[] = "-+123";
  char input7[] = "   -12 3";

  int ft_atoi_out;
  int sy_atoi_out;

  printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n");
  printf("\nft_atoi will undergo testing...\n\n");

  printf("Test case 1: input beginning with alphabet\n");
  printf("  input:\t%s\n", input1);
  ft_atoi_out = ft_atoi(input1);
  sy_atoi_out = atoi(input1);
  printf("ft_atoi:\t%d\n", ft_atoi_out);
  printf("   atoi:\t%d\n", sy_atoi_out);
  assert(ft_atoi_out == sy_atoi_out);
  printf("\n");
  
  printf("Test case 2: input with sign ending with alphabet\n");
  printf("  input:\t%s\n", input2);
  ft_atoi_out = ft_atoi(input2);
  sy_atoi_out = atoi(input2);
  printf("ft_atoi:\t%d\n", ft_atoi_out);
  printf("   atoi:\t%d\n", sy_atoi_out);
  assert(ft_atoi_out == sy_atoi_out);
  printf("\n");
  
  printf("Test case 3: zero\n");
  printf("  input:\t%s\n", input3);
  ft_atoi_out = ft_atoi(input3);
  sy_atoi_out = atoi(input3);
  printf("ft_atoi:\t%d\n", ft_atoi_out);
  printf("   atoi:\t%d\n", sy_atoi_out);
  assert(ft_atoi_out == sy_atoi_out);
  printf("\n");
  
  printf("Test case 4: Maximum positive number\n");
  printf("  input:\t%s\n", input4);
  ft_atoi_out = ft_atoi(input4);
  sy_atoi_out = atoi(input4);
  printf("ft_atoi:\t%d\n", ft_atoi_out);
  printf("   atoi:\t%d\n", sy_atoi_out);
  assert(ft_atoi_out == sy_atoi_out);
  printf("\n");
  
  printf("Test case 5: Minimum negative number\n");
  printf("  input:\t%s\n", input5);
  ft_atoi_out = ft_atoi(input5);
  sy_atoi_out = atoi(input5);
  printf("ft_atoi:\t%d\n", ft_atoi_out);
  printf("   atoi:\t%d\n", sy_atoi_out);
  assert(ft_atoi_out == sy_atoi_out);
  printf("\n");
  
  printf("Test case 6: Repeated sign symbols\n");
  printf("  input:\t%s\n", input6);
  ft_atoi_out = ft_atoi(input6);
  sy_atoi_out = atoi(input6);
  printf("ft_atoi:\t%d\n", ft_atoi_out);
  printf("   atoi:\t%d\n", sy_atoi_out);
  assert(ft_atoi_out == sy_atoi_out);
  printf("\n");

  printf("Test case 7: Space deliminated numbers\n");
  printf("  input:\t%s\n", input7);
  ft_atoi_out = ft_atoi(input7);
  sy_atoi_out = atoi(input7);
  printf("ft_atoi:\t%d\n", ft_atoi_out);
  printf("   atoi:\t%d\n", sy_atoi_out);
  assert(ft_atoi_out == sy_atoi_out);
  printf("\n");
  
  printf("\nft_atoi passed all test cases successfully!\n");
  printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}
