/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_libft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:36:40 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/24 13:03:43 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_libck.h"
#include <time.h>

int main(void)
{
    clock_t start_time, end_time;
    double cpu_time_used;

    // Record the start time
    start_time = clock();

    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	
	ck_atoi();
    ck_bzero();
    ck_calloc();
    ck_isalnum();
    ck_isalpha();
	ck_isascii();
	ck_isdigit();
	ck_isprint();
	ck_memchr();
	ck_memcmp();
	ck_memcpy();
	ck_memmove();
	ck_memset();
	ck_strchr();
	ck_strdup();
	ck_strjoin();
	ck_strlcat();
	ck_strlcpy();
	ck_split();
	ck_strlen();
	ck_strncmp();
	ck_strnstr();
	ck_strrchr();
	ck_strtrim();
	ck_substr();
	ck_toupper();
	ck_tolower();
	ck_itoa();
	ck_strmapi();
	ck_striteri();
	ck_putchar_fd();
	ck_putstr_fd();
	ck_putendl_fd();
    ck_putnbr_fd();
	ck_lstnew();
	ck_lstadd_front();
	ck_lstsize();
	ck_lstlast();
	ck_lstadd_back();
	ck_lstdelone();
	ck_lstclear();
	ck_lstiter();
	ck_lstmap();
	// Record the end time
    end_time = clock();

    // Calculate the CPU time used
    cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

    // Print the CPU time used
	printf("\nTime taken: %f seconds\n", cpu_time_used);
    printf("All functions have passed all their test cases successfully!\n");

    return (0);
}
