all: lib.a
	${CC} ${FLAGS} ${SRCO} -o ${NAME} -lft -L.

SRC = ft_atoi.c ft_memccpy.c ft_putstr_fd.c ft_strncmp.c ft_bzero.c \
		ft_memchr.c ft_split.c ft_strnstr.c ft_calloc.c ft_memcmp.c \
		ft_strchr.c ft_strrchr.c ft_isalnum.c ft_memcpy.c ft_strdup.c \
		ft_strtrim.c ft_isalpha.c ft_memmove.c ft_strjoin.c ft_substr.c \
		ft_isascii.c ft_memset.c ft_strlcat.c ft_tolower.c ft_isdigit.c \
		ft_putchar_fd.c ft_strlcpy.c ft_toupper.c ft_isprint.c \
		ft_putendl_fd.c ft_strlen.c ft_itoa.c ft_putnbr_fd.c \
		ft_strmapi.c \
		ft_lstnew.c 

SRCS_BONUS	= ft_lstnew.c 

mko:
	${CC} ${FLAGS} -c ${SRC}
	
SRCO = ${SRCS:.c=.o} ${SRCS_BONUS:.c=.o}

lib.a: mko
	ar r libft.a *.o

bonus:
	libfdt.h

CC = gcc
FLAGS = -Wall -Werror -Wextra
NAME = main

clean:
	rm -rf *.o *.so
fclean: clean
	rm ${NAME}
re: fclean all
