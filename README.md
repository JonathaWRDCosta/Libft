# Libft

Libft is a custom implementation of some of the standard C library functions. It provides several useful functions to perform operations on strings, memory, characters, and file handling. This library is designed to be used as a base for other C projects and aims to provide a comprehensive set of utility functions.

## Table of Contents
- [Libft](#libft)
  - [Table of Contents](#table-of-contents)
  - [Features](#features)
    - [Character Functions](#character-functions)
    - [Conversion Functions](#conversion-functions)
    - [Memory Functions](#memory-functions)
    - [String Functions](#string-functions)
    - [File Functions](#file-functions)
    - [Bonus (Linked List Functions)](#bonus-linked-list-functions)
  - [Requirements](#requirements)
  - [Directory Structure](#directory-structure)
  - [Compiling and Usage](#compiling-and-usage)
    - [To compile with bonus features:](#to-compile-with-bonus-features)
    - [To clean the project:](#to-clean-the-project)
    - [To remove everything (clean and recompile):](#to-remove-everything-clean-and-recompile)
  - [Functions](#functions)
  - [Clean and Rebuild](#clean-and-rebuild)
  - [License](#license)

## Features

This library includes a variety of functions, categorized as follows:

### Character Functions
- `ft_isalnum()`
- `ft_isalpha()`
- `ft_isascii()`
- `ft_isdigit()`
- `ft_isprint()`

### Conversion Functions
- `ft_atoi()`
- `ft_itoa()`
- `ft_tolower()`
- `ft_toupper()`

### Memory Functions
- `ft_bzero()`
- `ft_calloc()`
- `ft_memchr()`
- `ft_memcmp()`
- `ft_memcpy()`
- `ft_memmove()`
- `ft_memset()`

### String Functions
- `ft_split()`
- `ft_strchr()`
- `ft_strdup()`
- `ft_striteri()`
- `ft_strjoin()`
- `ft_strlcat()`
- `ft_strlcpy()`
- `ft_strlen()`
- `ft_strmapi()`
- `ft_strncmp()`
- `ft_strnstr()`
- `ft_strrchr()`
- `ft_strtrim()`
- `ft_substr()`

### File Functions
- `ft_putchar_fd()`
- `ft_putendl_fd()`
- `ft_putnbr_fd()`
- `ft_putstr_fd()`

### Bonus (Linked List Functions)
- `ft_lstadd_back()`
- `ft_lstadd_front()`
- `ft_lstclear()`
- `ft_lstdelone()`
- `ft_lstiter()`
- `ft_lstlast()`
- `ft_lstmap()`
- `ft_lstnew()`
- `ft_lstsize()`

## Requirements

To compile this project, you will need the following:

- A C compiler (`cc`)
- Make utility

## Directory Structure

The project is structured as follows:

```
.
├── Makefile            # Makefile for compiling and building the project
├── include/            # Header files for the library functions
│   └── libft.h         # Main header file containing function prototypes
├── lib/                # Library output directory (where `libft.a` will be stored)
├── objs/               # Object files directory
├── srcs/               # Source files for the library
└── subject/            # The subject files for the project (if applicable)

```

## Compiling and Usage

To compile and build the library, simply run:

```bash
make
```

This will create a static library `libft.a` in the `lib` directory.

### To compile with bonus features:
If you want to include the bonus linked list functions, you can use the `bonus` target:

```bash
make bonus
```

### To clean the project:
To remove object files and the compiled library:

```bash
make clean
```

### To remove everything (clean and recompile):
To completely clean the project and rebuild everything:

```bash
make fclean
make all
```

## Functions

For a full list and description of the functions provided by this library, refer to the header file `libft.h` inside the `include` directory.

Each function has been written and tested to behave exactly as its standard counterpart (if applicable), and extra functions such as linked list operations have been added as part of the bonus.

## Clean and Rebuild

To clean up compiled files and the static library, run:

```bash
make clean
```

To fully clean and remove all files, including the static library, run:

```bash
make fclean
```

To rebuild everything, run:

```bash
make re
```

This will remove all object files and the library, and then recompile everything from scratch.

## License

This project is open-source and available under the MIT License.