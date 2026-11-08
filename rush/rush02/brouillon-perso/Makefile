# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faudinet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 18:48:31 by faudinet          #+#    #+#              #
#    Updated: 2021/09/18 19:05:00 by faudinet         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c input_error.c parsing.c orc.c putchar.c

OBJS	= ${SRCS:.c=.0}

NAME	=

CC		= gcc -o
RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
