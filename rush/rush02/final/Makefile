# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faudinet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/18 18:48:31 by faudinet          #+#    #+#              #
#    Updated: 2021/09/19 19:05:57 by dvallien         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c input_error.c split.c orc.c display.c

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

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
