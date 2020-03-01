#include <unistd.h>
#include <fcntl.h>
#include "helpers/helpers.h"
#include "parser/parser.h"
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include "includes/cube3d.h"

int	main(int argc, char **argv)
{
	char	**tab;
	int		status;

	if (ft_paramshandle(argc, argv) == 1)
	{
		if ((tab = ft_filehandler(argv[1])))
		{
			status = handler(tab);
			ft_tableclear(tab);
			int i = 0;
			while (i < 5)
			{
				if (g_e.tex[i].set)
				{
					printf("%d %s\n",i,  g_e.tex[i].fname);
					free(g_e.tex[i].fname);
				}
				i++;
			}
			if (g_e.map != NULL)
			{
								printf("%s\n", "ok");
								ft_tableclear(g_e.map);
			}
			// i = 0;
			// while (g_e.map[i])
			// {
			// 	printf("%s\n", g_e.map[i++]);
			// }
			// ft_tableclear()
			return (!status);
		}
		ft_puterror(strerror(errno));
		return (1);
	}
	ft_puterror("Wrong program parameteres");
	return (1);
}