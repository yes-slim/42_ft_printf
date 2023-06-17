# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 19:11:52 by yes-slim          #+#    #+#              #
#    Updated: 2023/06/17 21:11:08 by yes-slim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#=================variables=========================#
CFLAGS  = -Wall -Werror -Wextra -I includes -c
NAME    = libftprintf.a
DEL     = rm -f
HELPERS = ft_printf ft_print_char ft_print_str ft_print_nbr\
		  ft_print_nbr_uns ft_print_hex_low ft_print_hex_up ft_print_adr
CSRCS   = $(addsuffix .c, $(addprefix helpers/, $(HELPERS)))
OBJF    = $(CSRCS:.c=.o)
#=================compile===========================#
%.o : %.c
	@echo $(grey)$(italic)"	~Compiling $<"$(reset)
	@cc $(CFLAGS) $< -o $@
#=================rules=============================#
all : $(NAME)

$(NAME) : $(OBJF)
	@ar -rc $(NAME) $(OBJF)

clean :
	@$(DEL) $(OBJF)
	@echo $(green)$(italic)$(bold)"	~Deleting files..."$(reset)

fclean : clean
	@$(DEL) $(NAME)
	@echo $(green)$(italic)$(bold)"	~Deleting libftprintf..."$(reset)

re : fclean all

.PHONY : all clean fclean re
#================colors=============================#
black = "\033[0;30m"
red = "\033[0;31m"
green = "\033[0;32m"
yellow = "\033[0;33m"
blue = "\033[0;34m"
purple = "\033[0;35m"
cyan = "\033[0;36m"
grey = "\033[0;90m"
#================font===============================#
bold = "\033[1m"
italic= "\033[3m"
underline = "\033[4m"
inverse = "\033[7m"
#===================================================#
reset = "\033[0m"
#===================================================#