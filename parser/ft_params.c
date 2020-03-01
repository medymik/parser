#include "parser.h"

int		ft_paramshandle(char argc, char **argv)
{
	int status;
	status = 0;
	if (argc >= 2 && argc <= 3)
	{
		status = (argc == 2) ? 0 : -1;
		status += ft_extcheck(argv[1]);
		status += (argc == 3) ? ft_compare(argv[2], "--save") : 0;
	}
	return (status);
}