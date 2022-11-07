/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_HEX.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:10:32 by yes-slim          #+#    #+#             */
/*   Updated: 2022/11/07 14:50:28 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static char	*ft_rev(char *str)
{
	int		i;
	int		len;
	char	tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

int	ft_put_hexa(int n)
{
	int		i;
	int		t;
	char	*hex;
	char	*res;
	
	hex = "0123456789ABCDEF";
	t = n;
	i = 0;
	while (t)
	{
		t = t/16;
		i++;
	}
	res = malloc(sizeof(char) * i);
	i = 0;
	while (n)
	{
		int a = n % 16;
		res[i] = hex[a];
		n = n / 16;
		i++;
	}
	res[i] = '\0';
	res = ft_rev(res);
	i = ft_putstr(res);
	free(res);
	return (i);
}
