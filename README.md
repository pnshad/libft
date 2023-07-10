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

## Guidelines and Resources

- [Subject Guidelines](libft.en.subject.pdf): This PDF document contains the guidelines and instructions for the Libft project. It provides detailed information on the requirements and expectations of the project. Please refer to this document for a comprehensive understanding of the project goals and specifications.

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

Please note that the functions beginning with `np_` inside the `new_libft` folder are NULL protected, providing additional safety measures.

The `extra` folder contains content related to development of my own libft test (currently under development). This folder may include additional test files, scripts, or other resources used in the testing process.

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
## Testing

To thoroughly test your Libft implementation, it is recommended to combine the use of two different testers:

1. [Supreme Tester Libft](https://github.com/FranFrau/Supreme-Tester-Libft): This tester includes a wide range of test cases to assess the correctness and performance of your Libft functions. Please follow the instructions provided in the Supreme Tester Libft repository to run the tests effectively. Here are the installation instructions:

   WARNING: This script uses some testers made by students of the 42 network. Be aware and test it on your own, as we never know if the moulinette has been updated. See if and where it fails, and understand what the testers tell you.

   Installation:
   - The folder name must be called "libft".
   - Run `sh tester.sh` to execute the tests.
   - Edit the 8th row in `libft-war-machine/my_config.sh` file to specify the correct path to your Libft directory.

   Testers:
   - [y3ll0w42](https://github.com/y3ll0w42/libft-war-machine)
   - [jtoty](https://github.com/jtoty/Libftest.git)
   - [Tripouille](https://github.com/Tripouille/libftTester.git)
   - [alelievr](https://github.com/alelievr/libft-unit-test.git)
   - [adrossig](https://github.com/adrossig/libft_tester.git)

2. [libft-tester-tokyo](https://github.com/usatie/libft-tester-tokyo): This tester is specifically designed for the Libft project and includes additional test cases to validate your implementation. Refer to the instructions in the libft-tester-tokyo repository to execute the tests accurately. Here are the usage instructions:

   Clone this repository to the root directory of your Libft repository:
   ```bash
   cd /path/to/your/libft/directory
   git clone https://github.com/usatie/libft-tester-tokyo.git
   cd libft-tester-tokyo
   ```

   Run the following commands to test your Libft functions:
   ```bash
   make all             # Test mandatory functions
   make libft-00        # Test Libft-00 ~ Libft-02 (change part number as per your project)
   make bonus           # Test bonus functions
   make strlen          # Test individual function (e.g., strlen)
   make norm            # Run Norminette & coding rules
   ```

   Please note that you can add more test cases and contribute to the tester by sending issues/PRs.

By combining these two testers, you can ensure comprehensive testing of your Libft library.

## Contributing

Contributions to Libft are welcome. If you find a bug or have an idea for a new feature, please open an issue or submit a pull request.

## License

Libft is released under the MIT License. See the [LICENSE](LICENSE.md) file for more details.

## Acknowledgements

This project is part of the 42 school curriculum. Thanks to the 42 school for providing the opportunity to work on this project.