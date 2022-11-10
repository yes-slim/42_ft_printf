/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:50:49 by yes-slim          #+#    #+#             */
/*   Updated: 2022/11/09 16:26:37 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_adr(unsigned long l, int *len)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (l >= 16)
		ft_print_adr((l / 16), len);
	ft_print_char(hex[l % 16], len);
}
