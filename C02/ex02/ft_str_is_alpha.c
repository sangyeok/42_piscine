/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeok <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:51:45 by sangyeok          #+#    #+#             */
/*   Updated: 2022/02/20 13:38:59 by sangyeok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	a;

	i = 0;
	while (str[i])
	{
		a = str[i];
		if (!((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
