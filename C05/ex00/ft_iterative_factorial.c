/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:27:02 by sangyeok          #+#    #+#             */
/*   Updated: 2022/02/16 12:27:04 by sangyeok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;

	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	fac = 1;
	while (nb > 1)
	{
		fac *= nb;
		nb--;
	}
	return (fac);
}
