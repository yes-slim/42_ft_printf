# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 19:11:52 by yes-slim          #+#    #+#              #
#    Updated: 2022/11/07 14:47:59 by yes-slim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc 

CFLAGS = -Wall -Werror -Wextra -c

NAME = libprintf.a

LIBF = ar -rc

DEL = rm -rf

CSRCS = ft_put_HEX.c\
		ft_put_hexa.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_putnbr.c\
		ft_putnbr_uns.c\
			 
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