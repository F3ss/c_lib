all: lib.a 
	${CC} ${FLAGS} ${SRCO} -o ${NAME} -L. -lft

mko:
	${CC} ${FLAGS} -c ${SRC}

lib.a: mko
	ar rcs libft.a ${SRCO}

SRC = main.c ft_memset.c ft_bzero.c
SRCO = main.o ft_memset.o ft_bzero.o

CC = gcc
FLAGS = -Wall -Werror -Wextra
NAME = main

clean:
	rm -rf *.o
fclean: clean
	rm -rf *.a ${NAME}
re: fclean all
