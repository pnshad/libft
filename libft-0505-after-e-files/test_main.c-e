/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_libft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 01:36:40 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/05 16:22:42 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "test_header.h"
#include <time.h>

int main(void)
{
    clock_t start_time, end_time;
    double cpu_time_used;

    // Record the start time
    start_time = clock();

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
	ck_memmove();

    // Record the end time
    end_time = clock();

    // Calculate the CPU time used
    cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

    // Print the CPU time used
    printf("Time taken: %f seconds\n", cpu_time_used);

    return (0);
}
