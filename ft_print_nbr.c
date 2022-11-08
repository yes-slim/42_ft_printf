/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:32:17 by yes-slim          #+#    #+#             */
/*   Updated: 2022/11/08 15:38:21 by yes-slim         ###   ########.fr       */
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

int	ft_print_nb(int nb)
{
	int	l;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
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