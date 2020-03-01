#include "parser.h"

int		ft_extcheck(char *ext)
{
	size_t len;

	len = ft_strlen(ext);
	if (!ft_strncmp(&ext[len - 4], ".cub", 4))
		return (1);
	return (0);
}

int		ft_compare(char *s1, char *s2)
{
	size_t	len;
	size_t	lens1;
	size_t	lens2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	len = (lens1 > lens2) ? lens1 : lens2;
	if (!ft_strncmp(s1, s2, len))
		return (1);
	return (0);
}