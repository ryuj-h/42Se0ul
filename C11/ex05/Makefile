SRC			= ./ft_atoi.c ./ft_core.c ./ft_opera.c ./ft_print.c ./main.c

OBJS		= ${SRC:.c=.o}

INCS		= includes

NAME		= do-op

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}


${NAME} : ${OBJS}
				${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean : 
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re: fclean all