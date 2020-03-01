#ifndef HELPERS_H
# define HELPERS_H
# include "../get_next_line/get_next_line.h"
# include "../libft/libft.h"
# include <unistd.h>
# include <fcntl.h>

char	**ft_tabnew(void);
char	**ft_tablejoin(char **tab, char *line);
size_t	ft_tablecount(char **tab);
void	ft_tableclear(char **tab);
int		ft_fileexist(char *path);
char	**ft_readfile(int fd);
char	**ft_filehandler(char *filename);
int		ft_isnumeric(char *str);
#endif