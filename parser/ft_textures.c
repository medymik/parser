#include "parser.h"
#include "../includes/cube3d.h"

int		ft_textureindex(char *str)
{
	if (ft_compare(str, "NO"))
		return (0);
	if (ft_compare(str, "SO"))
		return (1);
	if (ft_compare(str, "WE"))
		return (2);
	if (ft_compare(str, "EA"))
		return (3);
	if (ft_compare(str, "S"))
		return (4);
	return (-1);
}

int		ft_istexture(char **tab)
{
	if (ft_compare(tab[0], "NO") && ft_fileexist(tab[1]))
		return (1);
	else if (ft_compare(tab[0], "SO") && ft_fileexist(tab[1]))
		return (1);
	else if (ft_compare(tab[0], "WE") && ft_fileexist(tab[1]))
		return (1);
	else if (ft_compare(tab[0], "EA") && ft_fileexist(tab[1]))
		return (1);
	else if (ft_compare(tab[0], "S") && ft_fileexist(tab[1]))
		return (1);
	return (0);
}

int		ft_settexture(char	**tab)
{
	if (g_e.tex[ft_textureindex(tab[0])].set > 0)
	{
		ft_puterror("Dupplicated (texture / sprite)");
		return (0);
	}
	g_e.tex[ft_textureindex(tab[0])].set += 1;
	g_e.tex[ft_textureindex(tab[0])].fname = ft_strdup(tab[1]);
	return (1);
}

int		ft_parsetextures(char *line)
{
	char	**tab;
	int status;

	status = 0;
	tab = ft_split(line, ' ');
	if (ft_tablecount(tab) == 2 && ft_istexture(tab))
		status = ft_settexture(tab);
	else
		ft_puterror("Invalide (texture / sprite)");
	ft_tableclear(tab);
	return (status);
}