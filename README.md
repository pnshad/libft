# Libft

## Introduction

Libft is a personal C library created as part of the 42 school curriculum. This library is designed to help students understand the basics of C programming, including memory management, data structures, and algorithms. It includes a variety of functions, from basic string manipulation to more complex data structure operations.

## Description

![Results](results.png)

This project is your very first project as a student at 42. You will need to recode a few functions of the C standard library as well as some other utility functions that you will use during your whole cursus.

**Achievement:**
- Libft: Success
- Score: 125
- Time Spent: Solo – about 70 hours – 462 XP

Keywords: Unix logic

Skills: Rigor, Algorithms & AI, Imperative programming

## Features

Libft includes the following categories of functions:

### String Manipulation

| Function              | Description                                                |
|-----------------------|------------------------------------------------------------|
| ft_strlen             | Calculate the length of a string                           |
| ft_strcpy             | Copy a string                                              |
| ft_strncpy            | Copy a string with a specified maximum length              |
| ft_strdup             | Duplicate a string                                         |
| ft_strcat             | Concatenate two strings                                    |
| ft_strncat            | Concatenate two strings with a specified maximum length    |
| ft_strlcat            | Concatenate two strings with size limitation               |
| ft_strchr             | Locate the first occurrence of a character in a string     |
| ft_strrchr            | Locate the last occurrence of a character in a string      |
| ft_strstr             | Locate a substring in a string                             |
| ft_strnstr            | Locate a substring in a string with a specified max length |
| ft_strcmp             | Compare two strings                                        |
| ft_strncmp            | Compare two strings with a specified maximum length        |
| ft_strnew             | Create a new string with a specified size                  |
| ft_strdel             | Delete a string                                            |
| ft_strclr             | Clear the contents of a string                             |
| ft_striter            | Apply a function to each character of a string             |
| ft_striteri           | Apply a function to each character of a string with index   |
| ft_strmap             | Create a new string by applying a function to each character|
| ft_strmapi            | Create a new string by applying a function to each character with index|
| ft_strequ             | Compare two strings lexicographically                      |
| ft_strnequ            | Compare two strings lexicographically up to a specified maximum length|
| ft_strsub             | Create a new substring from a string                       |
| ft_strjoin            | Join two strings                                           |
| ft_strtrim            | Trim leading and trailing whitespace from a string         |
| ft_strsplit           | Split a string into an array of substrings                  |

### Memory Management

| Function              | Description                                                |
|-----------------------|------------------------------------------------------------|
| ft_memset             | Fill memory with a constant byte                           |
| ft_bzero              | Set the first n bytes of memory to zero                    |
| ft_memcpy             | Copy memory area                                           |
| ft_memccpy            | Copy memory area until a specific character is found       |
| ft_memmove            | Move memory area                                           |
| ft_memchr             | Locate the first occurrence of a character in a memory area|
| ft_memcmp             | Compare memory areas                                       |
| ft_memalloc           | Allocate memory                                            |
| ft_memdel             | Free memory                                                |

### Character Checks

| Function              | Description                                                |
|-----------------------|------------------------------------------------------------|
| ft_isalpha            | Check if a character is alphabetic                         |
| ft_isdigit            | Check if a character is a digit                            |
| ft_isalnum            | Check if a character is alphanumeric                       |
| ft_isascii            | Check if a character is ASCII                              |
| ft_isprint            | Check if a character is printable                          |
| ft_toupper            | Convert a character to uppercase                           |
| ft_tolower            | Convert a character to lowercase                           |

### List Manipulation

| Function              | Description                                                |
|-----------------------|------------------------------------------------------------|
| ft_lstnew             | Create a new list node                                     |
| ft_lstdelone          | Delete a list node                                         |
| ft_lstdel             | Delete a list and its content                              |
| ft_lstadd             | Add a new element at the beginning of a list               |
| ft_lstiter            | Apply a function to each element of a list                 |
| ft_lstmap             | Create a new list resulting from the application of a function to each element of a list|

### Input/Output

| Function              | Description                                                |
|-----------------------|------------------------------------------------------------|
| ft_putchar            | Output a character to the standard output                  |
| ft_putstr             | Output a string to the standard output                     |
| ft_putendl            | Output a string to the standard output followed by a newline character|
| ft_putnbr             | Output an integer to the standard output                   |
| ft_putchar_fd         | Output a character to a specified file descriptor          |
| ft_putstr_fd          | Output a string to a specified file descriptor             |
| ft_putendl_fd         | Output a string to a specified file descriptor followed by a newline character|
| ft_putnbr_fd          | Output an integer to a specified file descriptor           |

## Folder Structure

The project that has been submitted with a score of 125 is located in the `libft_125_submitted` folder. The ongoing development of other projects is located in the `new_libft` folder. 

Please note that the functions beginning with `ft_np_` inside the `new_libft` folder are NULL protected, providing additional safety measures.

## Installation

To install Libft, clone the repository to your local machine:

```bash
git clone https://github.com/yourusername/libft.git
```

Then, navigate to the libft directory and run the `make` command:

```bash
cd libft
make
```

This will compile the library and create a `libft.a` file.

## Usage

To use Libft in your C projects, include the `libft.h` header file at the top of your C files:

```c
#include "libft.h"
```

Then, when compiling your project, link the `libft.a` file:

```bash
gcc -L. -lft yourfile.c -o yourprogram
```

## Contributing

Contributions to Libft are welcome. If you find a bug or have an idea for a new feature, please open an issue or submit a pull request.

## License

Libft is released under the MIT License. See the [LICENSE](LICENSE.md) file for more details.

## Acknowledgements

This project is part of the 42 school curriculum. Thanks to the 42 school for providing the opportunity to work on this project.