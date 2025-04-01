# libft - 42 C Library

## Introduction

**libft** is a personal C library created as part of the 42 curriculum. It consists of basic C functions that are commonly used in 42 projects and other C programming tasks. The purpose of **libft** is to implement functions that are typically found in the C standard library, as well as any additional utility functions that are useful for general-purpose programming.

---

## Functions Implemented

Below is a list of functions that are implemented in **libft**. These functions mimic some of the standard C library functions but with custom implementations.

| Function Name       | Description                                                           |
|---------------------|-----------------------------------------------------------------------|
| **ft_isalpha**       | Checks if a character is an alphabetic letter (a-z or A-Z).           |
| **ft_isdigit**       | Checks if a character is a digit (0-9).                               |
| **ft_isalnum**       | Checks if a character is alphanumeric (a-z, A-Z, 0-9).                 |
| **ft_isascii**       | Checks if a character is a valid ASCII character.                     |
| **ft_isprint**       | Checks if a character is printable (space or printable characters).    |
| **ft_strlen**        | Returns the length of a string (excluding the null terminator).        |
| **ft_strdup**        | Duplicates a string, allocating memory for the new string.             |
| **ft_strcpy**        | Copies a string into another string.                                  |
| **ft_strncpy**       | Copies up to `n` characters from one string to another.               |
| **ft_strcat**        | Appends a string to the end of another string.                         |
| **ft_strncat**       | Appends up to `n` characters from one string to another.              |
| **ft_strchr**        | Locates the first occurrence of a character in a string.              |
| **ft_strrchr**       | Locates the last occurrence of a character in a string.               |
| **ft_strstr**        | Finds the first occurrence of a substring in a string.                |
| **ft_strcmp**        | Compares two strings lexicographically.                               |
| **ft_strncmp**       | Compares up to `n` characters of two strings lexicographically.       |
| **ft_atoi**          | Converts a string to an integer.                                      |
| **ft_memset**        | Fills a block of memory with a specified value.                       |
| **ft_bzero**         | Sets a block of memory to zero.                                       |
| **ft_memcpy**        | Copies a block of memory from one location to another.                |
| **ft_memmove**       | Safely copies a block of memory even when the source and destination overlap. |
| **ft_memcmp**        | Compares two blocks of memory byte by byte.                           |
| **ft_memchr**        | Finds the first occurrence of a byte in a memory block.               |
| **ft_putchar**       | Outputs a single character to the standard output.                    |
| **ft_putstr**        | Outputs a string to the standard output.                              |
| **ft_putnbr**        | Outputs an integer to the standard output.                            |
| **ft_putendl**       | Outputs a string followed by a newline to the standard output.        |
| **ft_putnbr_fd**     | Outputs an integer to the file descriptor.                            |
| **ft_lstnew**        | Creates a new linked list node.                                       |
| **ft_lstadd**        | Adds a new node to the start of the list.                             |
| **ft_lstlast**       | Returns the last node of a linked list.                               |
| **ft_lstdelone**     | Deletes a node from the linked list.                                  |
| **ft_lstclear**      | Deletes and frees all nodes from the list.                            |
| **ft_lstiter**       | Iterates through a linked list, applying a function to each node.     |
| **ft_lstmap**        | Applies a function to each node of a list and creates a new list.     |

---

## Project Requirements

- **Implementation**: You must implement all the functions listed above and make sure they behave as expected, similar to their standard C library counterparts.
- **No External Libraries**: The library should be implemented entirely using the C language without relying on any external libraries.
- **Memory Management**: Ensure that all memory used is properly allocated and freed. Avoid memory leaks by writing efficient and correct memory management code.
- **Modularity**: Each function should be implemented in its own separate file, following a modular structure that makes the library easy to maintain and extend.
- **Bonus Functions**: Implement additional helper functions or optimizations that are commonly useful in other 42 projects.

---

