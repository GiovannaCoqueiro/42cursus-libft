CC = gcc
CFLAGS =  -Wall -Wextra -Werror
FILES = *.c
OBJS = ${FILES:.c=.o}
LIB = libft.h
NAME = libft.a

all:	${NAME}

.c.o:
	${CC} ${CFLAGS} -I ${LIB} -c $< -o $@

${NAME}:	${OBJS}
	ar rc ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re: fclean all

.PHONY:	all clean fclean re