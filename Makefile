all: lib.a
	${CC} ${FLAGS} ${SRCO} -o ${NAME} -lft -L.

SRC = *.c
mko:
	${CC} ${FLAGS} -c ${SRC}
SRCO = *.o

lib.a: mko
	ar r libft.a *.o


CC = gcc
FLAGS = -Wall -Werror -Wextra
NAME = main

clean:
	rm -rf *.o *.so
fclean: clean
	rm ${NAME}
re: fclean all
