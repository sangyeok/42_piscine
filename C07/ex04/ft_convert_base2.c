/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:21:21 by sangyeok          #+#    #+#             */
/*   Updated: 2022/02/23 16:21:26 by sangyeok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	size_nbr(int nbr, char *base, int size)
{
	int		base_size;
	long	nb;

	base_size = ft_strlen(base);
	if (nbr < 0)
	{
		nb = nbr * -1;
		size++;
	}
	else
		nb = nbr;
	while (nb >= base_size)
	{
		nb /= base_size;
		size++;
	}
	size++;
	return (size);
}

void	ft_putnbr_base2(int nbr, char *base, char *nbr2)
{
	int		size_base;
	long	nb;
	int		i;
	int		len_nbr2;

	size_base = ft_strlen(base);
	len_nbr2 = size_nbr(nbr, base, 0);
	nb = nbr;
	i = 0;
	if (nb < 0)
	{
		nbr2[0] = '-';
		nb *= -1;
		i = 1;
	}
	len_nbr2--;
	while (nb >= size_base)
	{
		nbr2[len_nbr2] = base[nb % size_base];
		nb /= size_base;
		len_nbr2--;
	}
	if (nb < size_base)
		nbr2[i] = base[nb];
}
