# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjuin <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 10:16:13 by mjuin             #+#    #+#              #
#    Updated: 2022/10/12 10:39:58 by mjuin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC	= cc

AR	= ar rcs

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

<<<<<<< HEAD
SRCS_ALL = ${SRC_CHAR} $(SRC_IS) $(SRC_MEMORY) $(SRC_STR) \
 $(SRC_WRITE) $(SRC_MISC) $(SRC_LST)

SRC_CHAR = 	./SRC/Char/ft_toupper.c \
	./SRC/Char/ft_tolower.c

SRC_IS = 	./SRC/Is/ft_isalpha.c \
	./SRC/Is/ft_isdigit.c \
	./SRC/Is/ft_isalnum.c \
	./SRC/Is/ft_isascii.c \
	./SRC/Is/ft_isprint.c

SRC_MEMORY = ./SRC/Memory/ft_memset.c \
	./SRC/Memory/ft_bzero.c \
	./SRC/Memory/ft_memcpy.c \
	./SRC/Memory/ft_memmove.c \
	./SRC/Memory/ft_memchr.c \
	./SRC/Memory/ft_memcmp.c \
	./SRC/Memory/ft_calloc.c

SRC_STR = ./SRC/Str/ft_strlen.c \
	./SRC/Str/ft_strlcpy.c \
	./SRC/Str/ft_strlcat.c \
	./SRC/Str/ft_strchr.c \
	./SRC/Str/ft_strrchr.c \
	./SRC/Str/ft_strncmp.c \
	./SRC/Str/ft_strnstr.c \
	./SRC/Str/ft_strdup.c \
	./SRC/Str/ft_substr.c \
	./SRC/Str/ft_strjoin.c \
	./SRC/Str/ft_strtrim.c \
	./SRC/Str/ft_strmapi.c \
	./SRC/Str/ft_striteri.c

SRC_WRITE = ./SRC/Write/ft_putchar_fd.c \
	./SRC/Write/ft_putstr_fd.c \
	./SRC/Write/ft_putendl_fd.c \
	./SRC/Write/ft_putnbr_fd.c \
	./SRC/Write/ft_puthexa_fd.c \
	./SRC/Write/ft_uputnbr_fd.c \
	./SRC/Write/ft_printf.c

SRC_MISC = ./SRC/Misc/ft_atoi.c \
	./SRC/Misc/ft_split.c \
	./SRC/Misc/ft_itoa.c

SRC_LST	= ./SRC/Lst/ft_lstnew.c \
	./SRC/Lst/ft_lstadd_front.c \
	./SRC/Lst/ft_lstsize.c \
	./SRC/Lst/ft_lstlast.c \
	./SRC/Lst/ft_lstadd_back.c \
	./SRC/Lst/ft_lstdelone.c \
	./SRC/Lst/ft_lstclear.c \
	./SRC/Lst/ft_lstiter.c \
	./SRC/Lst/ft_lstmap.c

OBJS_ALL = ${SRCS_ALL:.c=.o}

OBJS_PRINTF = ${SRC_WRITE:.c=.o}

define PRINTF
endef
=======
SRCS	= ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

BNS	= ft_lstnew.c \
	  ft_lstadd_front.c \
	  ft_lstsize.c \
	  ft_lstlast.c \
	  ft_lstadd_back.c \
	  ft_lstdelone.c \
	  ft_lstclear.c \
	  ft_lstiter.c \
	  ft_lstmap.c

OBJS	= ${SRCS:.c=.o}

BNSS	= ${BNS:.c=.o}
>>>>>>> 2622c13091b25a12df80091afa94a1b3d7264cf0

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:	$(NAME)

$(NAME):	${OBJS_ALL}
	${AR} ${NAME} ${OBJS_ALL}

clean:
	${RM} ${OBJS_ALL}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

<<<<<<< HEAD
printf:		${OBJS_PRINTF}
	${AR} ${NAME} ${OBJS_PRINTF}

=======
>>>>>>> 2622c13091b25a12df80091afa94a1b3d7264cf0
.PHONY:
	re fclean clean all printf
