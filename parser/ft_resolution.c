#include "parser.h"
#include "../includes/cube3d.h"

int		ft_parseresolution(char *line)
{
	char	**tab;

	if (g_check.r  > 0)
	{
		ft_puterror("Dupplicated resolution");
		return (0);
	}
	tab = ft_split(line, ' ');
	if (ft_tablecount(tab) == 3 && ft_compare(tab[0], "R"))
	{
		if (ft_isnumeric(tab[1]) && ft_isnumeric(tab[2]))
		{
			g_check.r += 1;
			g_e.r.w = ft_atoi(tab[1]);
			g_e.r.h = ft_atoi(tab[2]);
			ft_tableclear(tab);
			return (1);
		}
	}
	ft_puterror("Invalid resolution");
	ft_tableclear(tab);
	return (0);
}

