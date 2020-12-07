all: mko
	${CC} ${FLAGS} ${SRCO} -o ${NAME}

SRC = *.c
mko:
	${CC} ${FLAGS} -c ${SRC}
SRCO = *.o

CC = gcc
FLAGS = -Wall -Werror -Wextra
NAME = main

clean:
	rm -rf main.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o
fclean: clean
	rm ${NAME}
re: fclean all