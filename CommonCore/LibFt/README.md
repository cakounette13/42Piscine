*This activity has been created as part of the 42 curriculum by dcarine.*

# 📚 Libft — Your Very First C Library

![Badge labeled language C, identifying the project language as C](https://img.shields.io/badge/language-C-blue)
![Badge labeled type static library, identifying the project as a static library](https://img.shields.io/badge/type-static_library-orange)
![Badge labeled school 42, identifying the project as part of the 42 curriculum](https://img.shields.io/badge/school-42-black)
![Badge labeled build Makefile, identifying Makefile as the build system](https://img.shields.io/badge/build-Makefile-green)

---

## 📖 Description

**Libft** is the foundational project of the 42 curriculum. Its main goal is to recreate a set of standard C library (`libc`) functions, along with additional utility functions and linked list manipulation tools, grouped into a single static library: `libft.a`.

In C programming, having access to reliable basic functions is essential. Re-implementing them from scratch provides a deep understanding of:
* **Memory management** and dynamic allocation (`malloc` / `free`).
* **Pointer arithmetic** and data structures.
* **Edge cases** and undefined behaviors defined in standard `man` pages.

Once completed, `libft.a` becomes a personal, reusable toolkit for future C assignments throughout the 42 cursus.

---

## ⚙️ Instructions

### 1. Compilation
The project uses a `Makefile` compliant with the 42 Norm (compiling with `cc` and the `-Wall -Wextra -Werror` flags without relinking).

To build the library at the root of the repository, run:
```bash
make
```

### 2. Makefile Rules

| Command              | Action 
| :------------------- | :--------------------------------------- 
| `make` or `make all` | Compiles all `.c` source files into `.o` object files and archives them into `libft.a` using `ar`.
| `make clean`         | Removes all temporary object files (`.o`).
| `make fclean`        | Removes all object files (`.o`) and the compiled library (`libft.a`).
| `make re`            | Performs a full rebuild (`fclean` followed by `all`).

### 3. Usage in Your Projects
To use `libft` in your own C programs, include the header file in your code:
```c
#include "libft.h"
```

Then, link the static library when compiling your project:
```bash
cc -Wall -Wextra -Werror main.c libft.a -o my_program
```

---

## 🧩 Library Overview

The library is structured into **three main parts**, covering 43 functions in total:

### 🔹 Part 1: Libc Functions
Exact re-implementations of standard C library functions (prefixed with `ft_`), adhering strictly to their `man` page specifications:

| Category                    | Functions 
| :-------------------------- | :--------------------------------
| **Character Checks & Case** | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
| **String Manipulation**     | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
| **Memory Manipulation**     | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
| **Conversion & Allocation** | `ft_atoi`, `ft_calloc`, `ft_strdup`

### 🔹 Part 2: Additional Functions
Custom utility functions either absent from `libc` or implemented in a different form to simplify string handling and file descriptor output:

| Function        | Description
| :-------------- | :-------------------------------------------
| `ft_substr`     | Allocates and returns a substring from a given string.
| `ft_strjoin`    | Concatenates two strings into a newly allocated string.
| `ft_strtrim`    | Trims specific characters from the beginning and end of a string.
| `ft_split`      | Splits a string into a `NULL`-terminated array of substrings using a delimiter.
| `ft_itoa`       | Converts an integer (`int`) into a newly allocated string.
| `ft_strmapi`    | Applies a function to each character of a string to create a new string.
| `ft_striteri`   | Applies a function to each character of a string in place (via pointer).
| `ft_putchar_fd` | Outputs a single character to a given file descriptor.
| `ft_putstr_fd`  | Outputs a string to a given file descriptor.
| `ft_putendl_fd` | Outputs a string followed by a newline to a given file descriptor.
| `ft_putnbr_fd`  | Outputs an integer to a given file descriptor.

### 🔹 Part 3: Linked List Functions
Functions built around the `t_list` structure (defined in `libft.h`) to create, traverse, modify, and clear singly linked lists:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
```

| Function          | Description |
| :---------------- | :--------------------------------------
| `ft_lstnew`       | Allocates and returns a new list node.
| `ft_lstadd_front` | Adds a new node at the beginning of the list.
| `ft_lstadd_back`  | Adds a new node at the end of the list.
| `ft_lstsize`      | Counts and returns the number of nodes in the list.
| `ft_lstlast`      | Returns the last node of the list.
| `ft_lstdelone`    | Frees a single node's content and the node itself without affecting subsequent nodes.
| `ft_lstclear`     | Deletes and frees a given node and all its successors, setting the list pointer to `NULL`.
| `ft_lstiter`      | Iterates through the list and applies a function to each node's content.
| `ft_lstmap`       | Iterates through the list, applies a function to each node, and creates a new list.

---

## 🔗 Resources

### Classic References
* **Linux Programmer's Manual (`man`):** Official documentation for standard library behaviors (`man 3 strlen`, `man 3 memmove`, `man 3 calloc`, etc.).
* **C Standard Library Reference:** [cppreference.com](https://cppreference.com) for checking type limits (`SIZE_MAX`, `INT_MIN`) and standard specifications.
* **42 Norm Documentation:** Official 42 intranet guidelines regarding code formatting, naming conventions, and structure constraints.

### AI Usage Disclosure
In accordance with the 42 AI policy:
* **Tasks & Scope:** AI was used strictly as a learning assistant to clarify theoretical C concepts (such as overlapping memory blocks in `ft_memmove`, `calloc` behavior when size is `0`, and function pointers) and to help format and structure this `README.md` file.
* **Implementation:** No source code (`.c` or `.h`) was generated by AI. All functions and unit tests were written, debugged, and verified manually to ensure full mastery of the codebase for peer evaluations and exams.
