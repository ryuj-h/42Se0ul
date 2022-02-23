CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -c

NAME	= libft.a

SRCDIR	= srcs
INCDIR	= includes

SRCS	= ${SRCDIR}/ft_putchar.c ${SRCDIR}/ft_swap.c ${SRCDIR}/ft_putstr.c ${SRCDIR}/ft_strlen.c ${SRCDIR}/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}

RM		= rm -f

all:		${NAME}

${NAME}:	${OBJS}
			ar -rc ${NAME} ${OBJS}

${OBJS}:	${SRCS}	
			${CC} ${CFLAGS} $< -o $@ -I ${INCDIR}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
