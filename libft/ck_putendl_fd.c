/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 01:53:23 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/17 02:30:46 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_libmy.h"

void	ft_putendl_fd(char *s, int fd);

void    run_putendl_fd_test_case(char *s,char *d);

void ck_putendl_fd(void)
{
    printf("\nft_putendl_fd >>> testing...\n\n");

    run_putendl_fd_test_case("Hello, World!", "Basic test to see if ft_putendl_fd writes successfully inside a file");
    run_putendl_fd_test_case("1234567890", "Test with numbers");
    run_putendl_fd_test_case("Testing\ttab", "Test with tab character");
    run_putendl_fd_test_case("New\nline", "Test with newline character");
    run_putendl_fd_test_case("", "Test with empty string");
    run_putendl_fd_test_case("Special\\ \" ' \n \t", "Test with special characters");
    run_putendl_fd_test_case("This string is longer than the previous ones", "Test with a string that is longer than the previous ones");
    run_putendl_fd_test_case("\0This string contains a null character", "Test with a string that contains a null character");

    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}

void 	run_putendl_fd_test_case(char *s,char *d)
{
	printf("Test case %s\n", d);
    printf("        Source string: ");
    my_printa(s, 0, sizeof(char), "%c");
	int fd = open("test_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); // open file for writing
    if (fd == -1)
    {
        perror("unable to create/access the file"); // print error message if file cannot be opened
        return;
    }
    ft_putendl_fd(s, fd);
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
    char* out_ex = (char*)malloc(file_size + 1);
	strlcpy(out_ex, s, file_size + 1);
	strlcat(out_ex, "\n", file_size + 1);
	printf("\n      Expected output: ");
    my_printa(out_ex, 0, sizeof(char), "%c");

	char* out_ft = (char*)malloc(file_size + 2);
	if (!out_ft || !out_ex)
    {
        perror("unable to allocate memory for outputs");
        close(fd);
        return;
    }

    // Reset the file pointer to the beginning of the file
    lseek(fd, 0, SEEK_SET);

    // Read the file's contents into the dynamically allocated buffer
    read(fd, out_ft, file_size);

    out_ft[file_size + 1] = '\0'; // Add null-terminator at the end of the buffer

    close(fd); // close file
	printf("\nft_putendl_fd output): ");
    my_printa(out_ft, 0, sizeof(char), "%c");
    printf("\n\n");
	assert(strcmp(out_ft, out_ex) == 0);
    
	// Delete the file
    fd = unlink("test_file.txt");	
    
	// Free the dynamically allocated buffer
    free(out_ft);
	free(out_ex);
}

