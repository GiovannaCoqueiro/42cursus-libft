# 42cursus
---
## libft
###### Inside this repository, you can see all the code that has been created for the libft project, including the mandatory parts 1 and 2 as well as the bonus functions. These functions must be compiled into a library named libft.a using a Makefile.
---
#### Part 01
Re-code some of the Standard C Library. The functions must behavior as the originals.
| Function | Description |
| :--- | :--- |
| [isalpha](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_isalpha.c) | Check if it's an alphabetic character |
| [isdigit](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_isdigit.c) | Check if it's digit |
| [isalnum](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_isalnum.c) | Check if it's an alphanumeric character |
| [isascii](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_isascii.c) | Check if it's in the ASCII range |
| [isprint](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_isprint.c) | Check if it's a printable character |
| [strlen](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_strlen.c) | Calculate the lenght of a string |
| [memset](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_memset.c) | Fill the bytes of a block of memory with a constant value |
| [bzero](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_bzero.c) | Fill the bytes of a block of memory with zero |
| [memcpy](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_memcpy.c) | Copy a memory block |
| [memmove](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_memmove.c) | Copy a memory block |
| [strlcpy](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_strlcpy.c) | Copy a string |
| [strlcat](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_strlcat.c) | Concatenate two strings |
| [toupper](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_toupper.c) | Conver a character to uppercase |
| [tolower](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_tolower.c) | Convert a character to lowercase |
| [strchr](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_strchr.c) | Search for the first appearence of a character in a string |
| [strrchr](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_strrchr.c) | Search for the last appearence of a character in a string |
| [strncmp](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_strncmp.c) | Compare two strings |
| [memchr](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_memchr.c) | Search for a character in a block of memory |
| [memcmp](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_memcmp.c) | Compare two blocks of memory |
| [strnstr](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_strnstr.c) | Search for a substring in a string |
| [atoi](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_atoi.c) | Convert a string to an integer |
| [calloc](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_calloc.c) | Allocate memory and fill its bytes to zero (working correctly, but the test file still needs to be fixed) |
| [strdup](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_strdup.c) | Duplicate a string |

#### Part 02
Code some helpful functions that are not in the Standard C Library.
| Function | Description |
| :--- | :--- |
| [substr](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_substr.c) | Return a substring from a string |
| [strjoin](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_strjoin.c) | Concatenate two strings |
| [strtrim](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_strtrim.c) | Trim the beggining and the end of a string |
| [split](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_split.c) | Split a string |
| [itoa](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_itoa.c) | Convert a number into a string |
| [strmapi](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_strmapi.c) | Apply a function in every character of a string |
| [striteri](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_striteri.c) | Apply a function in every character of a string |
| [putchar_fd](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_putchar_fd.c) | Write a character to a file |
| [putstr_fd](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_putstr_fd.c) | Write a string to a file |
| [putendl_fd](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_putendl_fd.c) | Write a string to a file, followed by a new line |
| [putnbr_fd](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_putnbr_fd.c) | Write a number to a file |

#### Bonus
Code some functions to manipulate lists.
| Function | Description |
| :--- | :--- |
| [lstnew](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_lstnew.c) | Create a new node |
| [lstadd_front](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_lstadd_front.c) | Add a node in front of a list |
| [lstsize](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_lstsize.c) | Count the nodes in a list |
| [lstlast](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_lstlast.c) | Return the last noe of a list |
| [lstadd_back](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_lstadd_back.c) | Add a node in the end of a list |
| [lstdelone](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_lstdelone.c) | Free the content os a node in a list |
| [lstclear](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_lstclear.c) | Delete and free a list |
| [lstiter](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_lstiter.c) | Apply a function to every node of a list |
| [lstmap](https://github.com/GiovannaCoqueiro/42cursus-libft/blob/main/functions/ft_lstmap.c) | Apply a function to every node of a list |
---
## Instructions to use
Clone this repository in you local computer using a terminal:
- $> git clone https://github.com/GiovannaCoqueiro/42cursus-libft.git [libft_path]

After succefully cloning the lib in your local reposiory you run some comands you can find in Makefile:
- $> make all: or just 'make' compiles only the mandaory parts
- $> make bonus: compiles the bonus part
- $> make clean: deletes the object files created during cmpilation
- $> make fclean: executes the 'clean' comand and also deletes the libft.a
- $> make re: executes the 'fclean' comand followed by the 'all' comand
- $> make rebonus: executes the 'fclean' comand followed by the 'bonus' comand

To use libft in your projects you need to include its header:
- #include "libft.h"

To compile your projects that use libft you need to use the flags:
- $> ... -L [path/to/libft.a] -I [path/to/libft.h]