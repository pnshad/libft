/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 01:53:23 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/16 02:13:47 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <fcntl.h>

void ft_putchar_fd(char c, int fd);

void	ck_putchar_fd(void)
{
    int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); // open file for writing
    if (fd == -1)
    {
        perror("open"); // print error message if file cannot be opened
        return;
    }

    ft_putchar_fd('H', fd); // write character 'H' to file
    ft_putchar_fd('e', fd); // write character 'e' to file
    ft_putchar_fd('l', fd); // write character 'l' to file
    ft_putchar_fd('l', fd); // write character 'l' to file
    ft_putchar_fd('o', fd); // write character 'o' to file

    close(fd); // close file

    printf("File written successfully.\n");
}

