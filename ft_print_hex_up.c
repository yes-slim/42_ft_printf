/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_up.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:49:19 by yes-slim          #+#    #+#             */
/*   Updated: 2022/11/09 16:26:52 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex_up(unsigned int i, int *len)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (i >= 16)
		ft_print_hex_up((i / 16), len);
	ft_print_char(hex[i % 16], len);
}
