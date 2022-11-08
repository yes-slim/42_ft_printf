/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:07:03 by yes-slim          #+#    #+#             */
/*   Updated: 2022/11/08 16:16:56 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
// # include

int		ft_printf(const char *, ...);

int		ft_printchar(char c);
int		ft_print_str(char *str);
int		ft_print_nbr_U(unsigned int nb);
int		ft_print_nb(int nb);


int		ft_strlen(char *str);
char	*ft_rev(char *str);

#endif