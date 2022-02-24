/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:20:35 by sangyeok          #+#    #+#             */
/*   Updated: 2022/02/23 16:20:36 by sangyeok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	ret;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	ret = max - min;
	*range = malloc(sizeof(int) * ret);
	if (!*range)
		return (-1);
	ptr = *range;
	while (min < max)
	{
		*ptr = min;
		min++;
		ptr++;
	}
	return (ret);
}
