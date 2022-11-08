# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 19:11:52 by yes-slim          #+#    #+#              #
#    Updated: 2022/11/08 13:59:41 by yes-slim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc 

CFLAGS = -Wall -Werror -Wextra -c

NAME = libprintf.a

LIBF = ar -rc

DEL = rm -rf

CSRCS =
		
OBJF = $(CSRCS:.c=.o)


all : $(NAME)

$(NAME) : $(OBJF)
	$(LIBF) $(NAME) $(OBJF)

clean :
	$(DEL) $(OBJF)

fclean :
	$(DEL) $(OBJF) $(NAME)

re : fclean all

.PHONY : all clean fclean re