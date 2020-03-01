#include "parser.h"

void	ft_puterror(char *str)
{
	ft_putendl_fd("Error", 2);
	ft_putendl_fd(str, 2);
}