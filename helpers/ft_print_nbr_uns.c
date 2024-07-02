/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr_uns.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:35:59 by yes-slim          #+#    #+#             */
/*   Updated: 2022/11/09 16:26:56 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbr_uns(unsigned int i, int *len)
{
	if (i > 9)
	{
		ft_print_nbr_uns((i / 10), len);
		ft_print_nbr_uns((i % 10), len);
	}
	if (i > 0 && i <= 9)
		ft_print_char((i + '0'), len);
}
