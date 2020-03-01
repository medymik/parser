/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mymik <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 15:36:20 by mymik             #+#    #+#             */
/*   Updated: 2019/10/28 18:53:47 by mymik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	ls1;
	size_t	ls2;
	size_t	ls;

	if (!s1 || !s2)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	ls = ls1 + ls2;
	str = (char*)malloc(sizeof(char) * (ls + 1));
	if (!str)
		return (NULL);
	ft_memmove(str, s1, ls1);
	ft_memmove(str + ls1, s2, ls2);
	str[ls] = '\0';
	return (str);
}
