/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:40:01 by yes-slim          #+#    #+#             */
/*   Updated: 2022/11/08 16:17:06 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_len(unsigned int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 16;
		i++;
	}
	return (i);
}

void	upper(unsigned int n, char *res)
{
	char	*upperhex;
	int		a;
	int		i;

	upperhex = "0123456789ABCDEF";
	i = 0;
	while (n)
	{
		a = n % 16;
		res[i] = upperhex[a];
		n /= 16;
		i++;
	}
	res[i] = '\0';
}

void	lower(unsigned int n, char *res)
{
	char	*lowerhex;
	int		a;
	int		i;

	lowerhex = "0123456789abcdef";
	i = 0;
	while (n)
	{
		a = n % 16;
		res[i] = lowerhex[a];
		n /= 16;
		i++;
	}
	res[i] = '\0';
}

int	ft_print_hex(unsigned int n, char c)
{
	char	*res;

	res = malloc(sizeof(char) * (ft_len(n) + 1));
	if (!res)
		return (0);
	if (c == 'X')
		upper(n, res);
	if (c == 'x')
		lower(n, res);
	return (ft_print_str((res)));
}
