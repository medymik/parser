#include "parser.h"
#include "../includes/cube3d.h"

int		ft_iscolor(t_color color)
{
	if (color.r < 0 || color.r > 255)
		return (0);
	if (color.g < 0 || color.g > 255)
		return (0);
	if (color.b < 0 || color.b > 255)
		return (0);
	return (1);
}

int		parse_floor(char **color)
{
	if (g_check.fc > 0)
	{
		ft_puterror("Dupplicated color");
		return (0);
	}
	if (ft_isnumeric(color[0]) && ft_isnumeric(color[1]) && ft_isnumeric(color[2]))
	{
		g_check.fc += 1;
		g_e.fc.r = ft_atoi(color[0]);
		g_e.fc.g = ft_atoi(color[1]);
		g_e.fc.b = ft_atoi(color[2]);
		if (ft_iscolor(g_e.fc))
			return (1);
	}
	ft_puterror("Invalid color");
	return (0);
}

int		parse_ceilling(char **color)
{
	if (g_check.cc > 0)
	{
		ft_puterror("Dupplicated color");
		return (0);
	}
	if (ft_isnumeric(color[0]) && ft_isnumeric(color[1]) && ft_isnumeric(color[2]))
	{
		g_check.cc += 1;
		g_e.cc.r = ft_atoi(color[0]);
		g_e.cc.g = ft_atoi(color[1]);
		g_e.cc.b = ft_atoi(color[2]);
		if (ft_iscolor(g_e.cc))
			return (1);
	}
	ft_puterror("Invalid color");
	return (0);
}

int		ft_parsecolor(char *line)
{
	char	**tab;
	char	**color;
	int		status;

	status = 0;
	tab = ft_split(line, ' ');
	if (ft_compare(tab[0], "C") || ft_compare(tab[0], "F"))
	{
		color = ft_split(tab[1], ',');
		if (ft_tablecount(color) == 3)
		{
			status = (ft_compare(tab[0], "F")) ? parse_floor(color) : parse_ceilling(color);
		}
		ft_tableclear(color);
	}
	else
		ft_puterror("Invalid Color");
	ft_tableclear(tab);
	if (status)
			return (1);
	return (0);
}