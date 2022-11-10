/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_low.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:43:53 by yes-slim          #+#    #+#             */
/*   Updated: 2022/11/09 16:26:46 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex_low(unsigned int i, int *len)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (i >= 16)
		ft_print_hex_low((i / 16), len);
	ft_print_char(hex[i % 16], len);
}
