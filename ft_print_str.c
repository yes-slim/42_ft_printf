/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:21:19 by yes-slim          #+#    #+#             */
/*   Updated: 2022/11/09 13:56:15 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_print_str(char *str, int *len)
{
	int	i;

	if (str)
	{
		i = 0;
		while (str[i])
		{
			ft_print_char(str[i], len);
			i++;
		}
	}
	else
		(*len) += write(1, "(null)", 6);
}
