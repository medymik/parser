#ifndef PARSER_H
# define PARSER_H
# include "../libft/libft.h"
# include "../helpers/helpers.h"
# include <fcntl.h>
# include "../includes/cube3d.h"

int		ft_extcheck(char *ext);
int		ft_compare(char *s1, char *s2);
int		ft_paramshandle(char argc, char **argv);
void	ft_puterror(char *str);
int		handler(char **tab);
int		ft_parseresolution(char *line);
int		ft_parsecolor(char *line);
int		ft_parsetextures(char *line);
int		ft_parsemap(char	*line);
#endif