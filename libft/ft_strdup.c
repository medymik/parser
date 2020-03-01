/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mymik <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:57:24 by mymik             #+#    #+#             */
/*   Updated: 2019/11/02 11:45:45 by mymik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (str)
	{
		ft_strlcpy(str, s1, len + 1);
		return (str);
	}
	return (NULL);
}
