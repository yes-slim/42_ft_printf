/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:07:03 by yes-slim          #+#    #+#             */
/*   Updated: 2022/11/10 14:24:43 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);

void	ft_print_char(char c, int *len);
void	ft_print_str(char *str, int *len);
void	ft_print_nbr(int i, int *len);
void	ft_print_nbr_uns(unsigned int i, int *len);
void	ft_print_hex_up(unsigned int i, int *len);
void	ft_print_hex_low(unsigned int i, int *len);
void	ft_print_adr(unsigned long l, int *len);

#endif