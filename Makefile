# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjuin <mjuin@student.42angouleme.fr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 13:38:40 by mjuin             #+#    #+#              #
#    Updated: 2023/02/03 15:01:43 by mjuin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	clang	

NAME	= 	libft.a
ROOT_DIR := $(dir $(realpath $(lastword $(MAKEFILE_LIST))))

INDI	=	\033[38;5;99m

CFLAGS	= 	-Wall -Wextra -Werror

SRCS	=	$(ROOT_DIR)/src/string/ft_split.c			\
			$(ROOT_DIR)/src/string/ft_strdup.c		\
			$(ROOT_DIR)/src/string/ft_strndup.c		\
			$(ROOT_DIR)/src/string/ft_strrchr.c		\
			$(ROOT_DIR)/src/string/ft_strcmp.c		\
			$(ROOT_DIR)/src/string/ft_strncmp.c		\
			$(ROOT_DIR)/src/string/ft_striteri.c		\
			$(ROOT_DIR)/src/string/ft_strtrim.c		\
			$(ROOT_DIR)/src/string/ft_strmapi.c		\
			$(ROOT_DIR)/src/string/ft_strchr.c		\
			$(ROOT_DIR)/src/string/ft_strlcat.c		\
			$(ROOT_DIR)/src/string/ft_strlcpy.c		\
			$(ROOT_DIR)/src/string/ft_strjoin.c		\
			$(ROOT_DIR)/src/string/ft_strjoin_f.c		\
			$(ROOT_DIR)/src/string/ft_str_mega_join.c \
			$(ROOT_DIR)/src/string/ft_substr.c		\
			$(ROOT_DIR)/src/string/ft_strnstr.c		\
			$(ROOT_DIR)/src/string/ft_strlen.c		\
			$(ROOT_DIR)/src/string/ft_strfindchr.c	\
			$(ROOT_DIR)/src/memory/ft_memchr.c		\
			$(ROOT_DIR)/src/memory/ft_calloc.c		\
			$(ROOT_DIR)/src/memory/ft_memmove.c		\
			$(ROOT_DIR)/src/memory/ft_memcmp.c		\
			$(ROOT_DIR)/src/memory/ft_bzero.c			\
			$(ROOT_DIR)/src/memory/ft_memset.c		\
			$(ROOT_DIR)/src/memory/ft_memcpy.c		\
			$(ROOT_DIR)/src/conversion/ft_atoi.c 		\
			$(ROOT_DIR)/src/conversion/ft_atoll.c 	\
			$(ROOT_DIR)/src/conversion/ft_itoa.c		\
			$(ROOT_DIR)/src/char/ft_isalnum.c			\
			$(ROOT_DIR)/src/char/ft_isdigit.c			\
			$(ROOT_DIR)/src/char/ft_isalpha.c			\
			$(ROOT_DIR)/src/char/ft_toupper.c			\
			$(ROOT_DIR)/src/char/ft_isascii.c			\
			$(ROOT_DIR)/src/char/ft_tolower.c			\
			$(ROOT_DIR)/src/char/ft_isprint.c			\
			$(ROOT_DIR)/src/list/ft_lstnew.c			\
 			$(ROOT_DIR)/src/list/ft_lstadd_front.c	\
			$(ROOT_DIR)/src/list/ft_lstsize.c			\
			$(ROOT_DIR)/src/list/ft_lstlast.c			\
			$(ROOT_DIR)/src/list/ft_lstadd_back.c		\
			$(ROOT_DIR)/src/list/ft_lstdelone.c		\
			$(ROOT_DIR)/src/list/ft_lstclear.c		\
			$(ROOT_DIR)/src/list/ft_lstiter.c			\
			$(ROOT_DIR)/src/list/ft_lstmap.c			\
			$(ROOT_DIR)/src/print/ft_putstr_fd.c		\
			$(ROOT_DIR)/src/print/ft_putchar_fd.c		\
			$(ROOT_DIR)/src/print/ft_putendl_fd.c		\
			$(ROOT_DIR)/src/print/ft_putnbr_fd.c		\
			$(ROOT_DIR)/src/print/ft_puthexa_fd.c		\
			$(ROOT_DIR)/src/print/ft_putptr_fd.c		\
			$(ROOT_DIR)/src/print/ft_printf_fd.c		\
			$(ROOT_DIR)/src/gnl/get_next_line.c		\
			$(ROOT_DIR)/src/gnl/get_next_line_utils.c	
			
OBJS= 	${SRCS:$(ROOT_DIR)/%.c=$(ROOT_DIR)/%.o}

RM		=	rm -f

${NAME}: ${OBJS}
	@ar rc ${NAME} ${OBJS}
	@printf "${INDI}libft compiled          \n\033[00m"

.c.o:
	@printf "Compiling libft .c to .o \r"
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:	$(NAME)
	
clean:
	@n=1; \
	for file in $(OBJS); do \
		if test -e $$file; then \
			if [ $$n -eq 1 ]; then \
				printf "Cleaning libft .o files \n"; \
			fi; \
			n=$$((n + 1)); \
			rm $$file; \
		fi \
	done

fclean:	clean
	@n=1; \
	if test -e ${NAME}; then \
		if [ $$n -eq 1 ]; then \
			printf "Cleaning libft.a\n"; \
		fi; \
		n=$$((n + 1)); \
		rm ${NAME}; \
	fi

re:	fclean all

.PHONY: all clean fclean re
