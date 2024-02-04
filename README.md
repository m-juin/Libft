# Libft

<img alt="libft" src="https://img.shields.io/static/v1?label=Libft&message=125+/+125&color=yellow&style=plastic"/>

# Project

Libft is the first project in the 42 program. It aims to introduce the students to the standard C functions by creating a library containing their own version of theses functions. They were advised to improve this library as the program progressed.

# Constraints

According to the subject there is 2 contraints for this project:
*  The global variables are prohibited.
*  The whole files of the projects need to follow 42 norm ([Link](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf))

# Subject Functions

The project can be devided in 3 parts:

## Part 1 - Libc functions

|    Name    | Description | Folder | Mark |
|:----------:|      --     |  :--:  |:----:|
| isalpha  | Test if a character is alphabetic | [Link](https://github.com/m-juin/Libft/blob/master/src/char/ft_isalpha.c)| :white_check_mark: |
| isdigit  | Test if a character is decimal-digit | [Link](https://github.com/m-juin/Libft/blob/master/src/char/ft_isdigit.c)| :white_check_mark: |
| isalnum  | Test if a character is alpha-numeric | [Link](https://github.com/m-juin/Libft/blob/master/src/char/ft_isalnum.c)| :white_check_mark: |
| isascii  | Test if a character is in the ascii table | [Link](https://github.com/m-juin/Libft/blob/master/src/char/ft_isascii.c)| :white_check_mark: |
| isprint  | Test if a character is printable | [Link](https://github.com/m-juin/Libft/blob/master/src/char/ft_isprint.c)| :white_check_mark: |
| strlen  | Return a string size | [Link](https://github.com/m-juin/Libft/blob/master/src/string/ft_strlen.c)| :white_check_mark: |
| memset  | Fill memory with a constant byte  | [Link](https://github.com/m-juin/Libft/blob/master/src/memory/ft_memset.c)| :white_check_mark: |
| bzero  | Fill memory with a null byte | [Link](https://github.com/m-juin/Libft/blob/master/src/memory/ft_bzero.c)| :white_check_mark: |
| memcpy  | Copy memory part from a src to a dest | [Link](https://github.com/m-juin/Libft/blob/master/src/memory/ft_memcpy.c)| :white_check_mark: |
| memmove  | Copy memory part from a src to a dest passing by a temp | [Link](https://github.com/m-juin/Libft/blob/master/src/memory/ft_memmove.c)| :white_check_mark: |
| strlcpy  | Copy in a safe way a string | [Link](https://github.com/m-juin/Libft/blob/master/src/string/ft_strlcpy.c)| :white_check_mark: |
| strlcat  | Concatenate in a safe way two string | [Link](https://github.com/m-juin/Libft/blob/master/src/string/ft_strlcat.c)| :white_check_mark: |
| toupper  | Return a alphabetic character upper-case | [Link](https://github.com/m-juin/Libft/blob/master/src/char/ft_toupper.c)| :white_check_mark: |
| tolower  | Return a alphabetic character lower-case | [Link](https://github.com/m-juin/Libft/blob/master/src/char/ft_tolower.c)| :white_check_mark: |
| strchr  | Returns a pointer to the first occurrence of a character in a string | [Link](https://github.com/m-juin/Libft/blob/master/src/string/ft_strchr.c)| :white_check_mark: |
| strrchr  | Returns a pointer to the last occurrence of a character in a string | [Link](https://github.com/m-juin/Libft/blob/master/src/string/ft_strrchr.c)| :white_check_mark: |
| strncmp  | Compares a part of two strings | [Link](https://github.com/m-juin/Libft/blob/master/src/string/ft_strncmp.c)| :white_check_mark: |
| memchr  | Returns a pointer to the first occurrence of an int in a memory part | [Link](https://github.com/m-juin/Libft/blob/master/src/memory/ft_memchr.c)| :white_check_mark: |
| memcmp  | Compare two memory part | [Link](https://github.com/m-juin/Libft/blob/master/src/memory/ft_memcmp.c)| :white_check_mark: |
| strnstr | Returns a pointer to the first occurrence of a string in another string part | [Link](https://github.com/m-juin/Libft/blob/master/src/string/ft_strnstr.c)| :white_check_mark: |
| atoi  | Convert a string to a int | [Link](https://github.com/m-juin/Libft/blob/master/src/conversion/ft_atoi.c)| :white_check_mark: |
| calloc  | Allocate memory of given size and set it to 0 | [Link](https://github.com/m-juin/Libft/blob/master/src/memory/ft_calloc.c)| :white_check_mark: |
| strdup  | Duplicate a string   | [Link](https://github.com/m-juin/Libft/blob/master/src/string/ft_strdup.c)| :white_check_mark: |

## Part 2 - Additional functions

|    Name    | Description | Folder | Mark |
|:----------:|      --     |  :--:  |:----:|
| ft_substr  | Returns the substring of the given string at the given start position with the given length | [Link](https://github.com/m-juin/Libft/blob/master/src/string/ft_substr.c)| :white_check_mark: |
| ft_strjoin | Combinate two string into another | [Link](https://github.com/m-juin/Libft/blob/master/src/string/ft_strjoin.c) | :white_check_mark: |
| ft_strtrim | Removes all whitespace characters from the beginning and the end of a string | [Link](https://github.com/m-juin/Libft/blob/master/src/string/ft_strtrim.c) | :white_check_mark: |
| ft_split | Split a string using a char as delimiter | [Link](https://github.com/m-juin/Libft/blob/master/src/string/ft_split.c) | :white_check_mark: |
| ft_itoa | Convert an int to a string | [Link](https://github.com/m-juin/Libft/blob/master/src/conversion/ft_itoa.c) | :white_check_mark: |
| ft_strmapi | Applies a function to each character of a string to create a “fresh” new string resulting from the successive applications of f | [Link](https://github.com/m-juin/Libft/blob/master/src/string/ft_strmapi.c) | :white_check_mark: |
| ft_striteri | Applies a to each character of a string. Each character is passed by address to f to be modified if necessary | [Link](https://github.com/m-juin/Libft/blob/master/src/string/ft_striteri.c) | :white_check_mark: |
| ft_putchar_fd | Outputs a character to the desired fd | [Link](https://github.com/m-juin/Libft/blob/master/src/print/ft_putchar_fd.c) | :white_check_mark: |
| ft_putstr_fd | Outputs a string to the desired fd | [Link](https://github.com/m-juin/Libft/blob/master/src/print/ft_putstr_fd.c) | :white_check_mark: |
| ft_putendl_fd | Outputs a string followed by a new line to the desired fd | [Link](https://github.com/m-juin/Libft/blob/master/src/print/ft_putendl_fd.c) | :white_check_mark: |
| ft_putnbr_fd | Outputs a int to the desired fd | [Link](https://github.com/m-juin/Libft/blob/master/src/print/ft_putnbr_fd.c) | :white_check_mark: |

## Part 3 - Bonus functions

Subject bonus part aim to teach the chained list to the students. Each function is designed to work with the following struct:

```clike=
typedef struct s_list
{
	void		*content;
	struct s_list	*next;
} t_list;
```

|    Name    | Description | Folder | Mark |
|:----------:|      --     |  :--:  |:----:|
| ft_lstnew | Create a new node where next = NULL | [Link](https://github.com/m-juin/Libft/blob/master/src/list/ft_lstnew.c)| :white_check_mark: |
| ft_lstadd_front | Add a node as the first element of the list | [Link](https://github.com/m-juin/Libft/blob/master/src/list/ft_lstadd_front.c)| :white_check_mark: |
| ft_lstsize | Return list size | [Link](https://github.com/m-juin/Libft/blob/master/src/list/ft_lstsize.c)| :white_check_mark: |
| ft_lstlast | Return the last node of the list | [Link](https://github.com/m-juin/Libft/blob/master/src/list/ft_lstlast.c)| :white_check_mark: |
| ft_lstadd_back | Add a node as the last element of the list | [Link](https://github.com/m-juin/Libft/blob/master/src/list/ft_lstadd_back.c)| :white_check_mark: |
| ft_lstdelone | Delete and free a node from the list | [Link](https://github.com/m-juin/Libft/blob/master/src/list/ft_lstdelone.c)| :white_check_mark: |
| ft_lstclear  | Deletes and frees the a node and every successor of that node | [Link](https://github.com/m-juin/Libft/blob/master/src/list/ft_lstclear.c)| :white_check_mark: |
| ft_lstiter  | Apply a function to a node and every successor of that node | [Link](https://github.com/m-juin/Libft/blob/master/src/list/ft_lstiter.c)| :white_check_mark: |
| ft_lstmap  | Apply a function to a node and every successor of that node then create a new list resulting of the successive applications of the function | [Link](https://github.com/m-juin/Libft/blob/master/src/list/ft_lstmap.c)| :white_check_mark: |


# *Not-in-subject* functions

Here are the functions I added to my libft library that are not asked by the subject

|    Name    | Description | Folder |
|:----------:|      --     |  :--: |
| ft_atoll | Convert a string to a long long | [Link](https://github.com/m-juin/Libft/blob/master/src/conversion/ft_atoll.c) |
| get_next_line | Retrieve the next line of a given fd | [Link](https://github.com/m-juin/Libft/blob/master/src/gnl/get_next_line.c) |
| ft_printf_fd | Recreation of standard printf (accepted flags are %c %s %d %i %u %x %X %p %%) and desired on a given fd | [Link](https://github.com/m-juin/Libft/blob/master/src/print/ft_printf_fd.c) |
| ft_puthexa_fd | Outputs an int into a desired base to a desired fd | [Link](https://github.com/m-juin/Libft/blob/master/src/print/ft_puthexa_fd.c) |
| ft_putptr_fd | output a variable pointer into hexadecimal format to a desired fd | [Link](https://github.com/m-juin/Libft/blob/master/src/print/ft_putptr_fd.c) |
| ft_str_mega_join | Create a new string resulting from the addition of multiple string | [Link](https://github.com/m-juin/Libft/blob/master/src/string/ft_str_mega_join.c) |
| ft_strjoin_f | Combinate two string into another then free the sources strings | [Link](https://github.com/m-juin/Libft/blob/master/src/string/ft_strjoin_f.c) |


## Usage

``make`` to compile.

``clean`` to clean all compiled files without the library file.

``fclean`` to clean all compiled files with the library file.

``re`` to fclean then make.
