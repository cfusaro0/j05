/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 11:47:12 by cfusaro           #+#    #+#             */
/*   Updated: 2017/09/12 10:43:15 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int a;

	a = 0;
	while ((s1[a] || s2[a]) && (a < n))
	{
		if (s1[a] < s2[a])
			return (-1);
		if (s1[a] > s2[a])
			return (1);
		a++;
	}
	return (0);
}
