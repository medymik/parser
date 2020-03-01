/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mymik <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:47:47 by mymik             #+#    #+#             */
/*   Updated: 2019/10/24 16:12:12 by mymik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	char		tmp;
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		tmp = '-';
		write(fd, &tmp, 1);
		nb = nb * -1;
	}
	if (nb < 10)
	{
		tmp = nb + 48;
		write(fd, &tmp, 1);
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}
