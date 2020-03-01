#include "helpers.h"

char	**ft_readfile(int fd)
{
	int ret;
	char *line;
	char **tab;

	tab = ft_tabnew();
	if (!tab)
		return (NULL);
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		tab = ft_tablejoin(tab, line);
		free(line);
	}
	if (*line)
		tab = ft_tablejoin(tab, line);
	free(line);
	if (ret < 0)
		return (NULL);
	return (tab);
}

int		ft_fileexist(char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	close(fd);
	return ((fd < 0) ? 0 : 1);
}

char	**ft_filehandler(char *filename)
{
	char	**tab;
	int		fd;

	if (ft_fileexist(filename))
	{
		fd = open(filename, O_RDONLY);
		tab = ft_readfile(fd);
		close(fd);
		return (tab);
	}
	return (NULL);
}