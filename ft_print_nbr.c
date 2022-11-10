/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:27:34 by yes-slim          #+#    #+#             */
/*   Updated: 2022/11/10 11:55:51 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbr(int i, int *len)
{
	if (i == INT_MIN)
		ft_print_str("-2147483648", len);
	else if (i < 0)
	{
		ft_print_char('-', len);
		i *= -1;
	}
	if (i > 9)
	{
		ft_print_nbr((i / 10), len);
		ft_print_nbr((i % 10), len);
	}
	if (i >= 0 && i <= 9)
		ft_print_char((i + '0'), len);
}
