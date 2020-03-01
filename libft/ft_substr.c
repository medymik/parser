/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mymik <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:06:32 by mymik             #+#    #+#             */
/*   Updated: 2019/11/03 16:12:44 by mymik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*r;
	char	*p;
	size_t	lens;

	if (!s)
		return (NULL);
	lens = ft_strlen(&s[start]);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	lens = (lens <= len) ? lens : len;
	str = (char*)malloc(sizeof(char) * (lens + 1));
	if (!str)
		return (NULL);
	r = str;
	p = (char*)(s + start);
	if (str)
	{
		while (lens-- && *p)
		{
			*(str++) = *(p++);
		}
		*str = '\0';
	}
	return (r);
}
