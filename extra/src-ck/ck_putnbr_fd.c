/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 01:53:23 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/17 04:16:02 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_libmy.h"

void	ft_putnbr_fd(int n, int fd);

void    run_putnbr_fd_test_case(int n,char *d);

void ck_putnbr_fd(void)
{
    printf("\nft_putnbr_fd >>> testing...\n\n");

	run_putnbr_fd_test_case(0, "Test case 1: n = 0");
    run_putnbr_fd_test_case(123456789, "Test case 2: n is a positive number");
    run_putnbr_fd_test_case(-987654321, "Test case 3: n is a negative number");
    run_putnbr_fd_test_case(2147483647, "Test case 4: n is the maximum value for a 32-bit signed integer");
    run_putnbr_fd_test_case(-2147483647, "Test case 5: n is one less than the minimum value for a 32-bit signed integer");
    run_putnbr_fd_test_case(-2147483648, "Test case 6: n is the minimum value for a 32-bit signed integer");

    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}

void 	run_putnbr_fd_test_case(int n,char *d)
{
	printf("Test case %s\n", d);
    printf("     Source integer: ");
    my_printa(&n, sizeof(n), sizeof(int), "%d");
	int fd = open("test_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); // open file for writing
    if (fd == -1)
    {
        perror("unable to create/access the file"); // print error message if file cannot be opened
        return;
    }
    
	ft_putnbr_fd(n, fd);
	
	close(fd); // close file
    
	fd = open("test_file.txt", O_RDONLY); // open file for reading
    if (fd == -1)
    {
        perror("unable to access the file"); // print error message if file cannot be opened
        return;
    }

    // Measure the file's contents size
    off_t file_size = lseek(fd, 0, SEEK_END);

    // Allocate buffer dynamically based on the file's contents size
    char* out_ex = calloc(file_size + 1, sizeof(char));
    snprintf(out_ex, file_size + 1, "%d", n);
	printf("\n    Expected output: ");
    my_printa(out_ex, 0, sizeof(char), "%c");

	char* out_ft = (char*)malloc(file_size + 1);
    if (!out_ft || !out_ex)
    {
        perror("unable to allocate memory for the outputs");
        close(fd);
        return;
    }

    // Reset the file pointer to the beginning of the file
    lseek(fd, 0, SEEK_SET);

    // Read the file's contents into the dynamically allocated buffer
    read(fd, out_ft, file_size);

    out_ft[file_size + 1] = '\0'; // Add null-terminator at the end of the buffer

    close(fd); // close file
	printf("\nft_putnbr_fd output: ");
    my_printa(out_ft, 0, sizeof(char), "%c");
    printf("\n\n");
	assert(strcmp(out_ft, out_ex) == 0);

    // Delete the file
    fd = unlink("test_file.txt");

    // Free the dynamically allocated buffer
    free(out_ft);
}

