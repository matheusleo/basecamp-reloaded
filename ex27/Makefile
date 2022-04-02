SRCS	= ft_display_file.c

OBJS	= ${SRCS:.c=.o}

NAME	= ft_display_file

RM	= rm -f

.c.o:
			gcc -Wall -Wextra -Werror -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			gcc -Wall -Wextra -Werror ft_display_file.o   -o ft_display_file

all: ${NAME}

clean:
			${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

.PHONY:	all clean fclean
