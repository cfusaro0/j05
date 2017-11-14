/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 11:50:32 by cfusaro           #+#    #+#             */
/*   Updated: 2017/09/12 17:33:07 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (to_find[k])
		k++;
	if (k == 0)
		return (str);
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j == k - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
