#include "libft.h"

int		ft_putnchar_fd(char *s, int n, int fd)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	return (i);
}
