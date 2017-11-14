/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 18:50:35 by cfusaro           #+#    #+#             */
/*   Updated: 2017/09/13 17:10:32 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		start(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
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
