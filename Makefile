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
	rm -rf *.o
fclean: clean
	rm ${NAME}
re: fclean all
