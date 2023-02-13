# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 15:01:45 by cmartino          #+#    #+#              #
#    Updated: 2023/02/13 14:39:29 by cmartino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

FILES	= push_swap \
			ft_repush_small_sort \
			ft_instructions \
			ft_min_and_max \
			ft_sort_three \
			ft_small_sort \
			ft_fill_stack \
			ft_lst_utils2 \
			ft_lst_utils \
			ft_lst_index \
			ft_memcpy \
			ft_malloc \
			ft_putstr \
			ft_split \
			ft_radix \
			ft_exit \
			ft_atoi


SRCS	= ${addprefix SRCS/, $(addsuffix .c, $(FILES))}

OBJS	= ${SRCS:.c=.o}

CC 		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all :	${NAME}

${NAME}:	${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re