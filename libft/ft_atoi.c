/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mymik <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:51:19 by mymik             #+#    #+#             */
/*   Updated: 2019/10/28 19:05:01 by mymik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int				i;
	int				sign;
	long			value;
	long			prev;

	i = 0;
	sign = 1;
	value = 0;
	while (((str[i] <= 13 && str[i] >= 9) || str[i] == 32) && str[i] != '\0')
		i++;
	if (str[i] == '-' || str[i] == '+')
		(str[i++] == '-') ? sign = -1 : 1;
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		prev = value;
		value = value * 10 + sign * (str[i] - '0');
		if (sign == 1 && prev > value)
			return (-1);
		else if (sign == -1 && prev < value)
			return (0);
		i++;
	}
	return (value);
}
