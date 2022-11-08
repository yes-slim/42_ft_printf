/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr_U.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:36:30 by yes-slim          #+#    #+#             */
/*   Updated: 2022/11/08 15:37:51 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	len(int nb)
{
	int	l;

	l = 0;
	while (nb)
	{
		nb /= 10;
		l++;
	}
	return (l);
}

int	ft_print_nbr_U(unsigned int nb)
{
	int	l;

	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	return (l = len(nb));
}