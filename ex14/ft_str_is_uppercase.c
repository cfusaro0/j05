/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 19:00:40 by cfusaro           #+#    #+#             */
/*   Updated: 2017/09/12 18:32:05 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		start(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
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
