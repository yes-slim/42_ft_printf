# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 19:11:52 by yes-slim          #+#    #+#              #
#    Updated: 2022/11/10 18:55:36 by yes-slim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra -c

NAME = libftprintf.a

LIBF = ar -rc

DEL = rm -f

CSRCS = ft_printf.c\
		ft_print_char.c\
		ft_print_str.c\
		ft_print_nbr.c\
		ft_print_nbr_uns.c\
		ft_print_hex_low.c\
		ft_print_hex_up.c\
		ft_print_adr.c\
		
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