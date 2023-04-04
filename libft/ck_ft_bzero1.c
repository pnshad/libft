/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_ft_bzero2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:21:17 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/04 17:23:44 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main() {
  char str[] = "Hello, world!";
  size_t len = sizeof(str);

  ft_bzero(str, len);
  bzero(str, len);

  for (size_t i = 0; i < len; i++) {
    if (str[i] != '\0') {
      printf("Error: ft_bzero() did not zero out all bytes in str\n");
      return 1;
    }
  }

  printf("Success: ft_bzero() and bzero() both zeroed out str\n");

  return 0;
}
