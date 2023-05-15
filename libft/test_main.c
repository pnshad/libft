/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_libft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:36:40 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/14 19:49:16 by pnourish         ###   ########.fr       */
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

    // Record the end time
    end_time = clock();

    // Calculate the CPU time used
    cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

    // Print the CPU time used
	printf("Time taken: %f seconds\n", cpu_time_used);
    printf("All functions have passed all their test cases successfully!\n");

    return (0);
}
