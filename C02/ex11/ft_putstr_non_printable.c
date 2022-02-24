/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:49:06 by sangyeok          #+#    #+#             */
/*   Updated: 2022/02/20 13:49:08 by sangyeok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*base;
	 int	neg;

	base = "0123456789abcdef";
	while (*str)
	{
		if (*str <= 31 || *str >= 127)
		{
			write(1, "\\", 1);
			if (*str < 0)
			{
				neg = (-128 - (*str)) * -1 + 128;
				write(1, &base[neg / 16], 1);
				write(1, &base[neg % 16], 1);
			}
			else
			{
				write(1, &base[*str / 16], 1);
				write(1, &base[*str % 16], 1);
			}
		}
		else
			write(1, str, 1);
		str++;
	}
}
