#include "helpers.h"

int		ft_isnumeric(char *str)
{
	size_t	i;

	i = -1;
	while (str[++i])
		if (!ft_isdigit(str[i]))
			return (0);
	return (1);
}