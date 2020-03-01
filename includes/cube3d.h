#ifndef CUBE3D_H
# define CUBE3D_H

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>
# include <stdio.h>

typedef struct	s_img
{
	int bpp;
	int sl;
	int en;
	int *data;
}				t_img;
typedef struct	s_texture
{
	int set;
	char *fname;
	t_img img;
}				t_texture;
typedef struct	s_color
{
	int r;
	int g;
	int b;
}				t_color;
typedef struct	s_reso
{
	int w;
	int h;
}				t_reso;
typedef struct	s_env
{
	t_reso		r;
	t_color		fc;
	t_color		cc;
	t_texture	tex[5];
	char		**map;
}				t_env;
typedef struct	s_check
{
	int			fc;
	int			cc;
	int			r;
}				t_check;

t_check g_check;
t_env g_e;
#endif