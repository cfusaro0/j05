/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 15:28:58 by cfusaro           #+#    #+#             */
/*   Updated: 2017/09/13 16:41:25 by cfusaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nombre(char *str, int i)
{
	int result;
	int z;

	z = 1;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (z == 0)
			result = result * 10;
		result = result + (str[i] - 48);
		i++;
		z = 0;
	}
	return (result);
}

int		ft_atoi(char *str)
{
	int i;
	int result;
	int u;

	i = 0;
	result = 0;
	u = 0;
	while (!(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				u++;
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
				return (0);
		}
		if (str[i] > '9' || str[i] == '(' || (str[i] == '+' &&
						(str[i + 1] == '+' || str[i + 1] == '-')) || u > 1)
			return (0);
		i++;
	}
	result = nombre(str, i);
	if (u == 1)
		result = -result;
	return (result);
}
