# libft
42 common core

# Libft

## Introduction

Libft is a personal C library created as part of the 42 school curriculum. This library is designed to help students understand the basics of C programming, including memory management, data structures, and algorithms. It includes a variety of functions, from basic string manipulation to more complex data structure operations.

## Features

Libft includes the following categories of functions:

- String manipulation: Functions for handling and manipulating strings.
- Memory management: Functions for managing and manipulating memory.
- Character checks: Functions for checking the properties of characters.
- List manipulation: Functions for handling linked lists.
- Input/Output: Functions for handling input and output.

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

Libft is released under the MIT License. See the `LICENSE.md` file for more details.

## Acknowledgements

This project is part of the 42 school curriculum. Thanks to the 42 school for providing the opportunity to work on this project.
