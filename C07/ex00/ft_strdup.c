/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:20:51 by sangyeok          #+#    #+#             */
/*   Updated: 2022/02/23 16:20:52 by sangyeok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ret;
	int		len;

	len = 0;
	while (src[len])
		len++;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	while (len >= 0)
	{
		ret[len] = src[len];
		len--;
	}
	return (ret);
}
