/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 18:40:39 by cfusaro           #+#    #+#             */
/*   Updated: 2017/09/12 18:23:18 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		start(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(start(str[i])))
			return (0);
		i++;
	}
	return (1);
}
