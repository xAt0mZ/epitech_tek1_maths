/*
** hbombyx.h for 106bombyx in /home/baron_l//local/rendu/projets/maths/106bombyx/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Feb 18 10:47:41 2013 louis-philippe baron
** Last update Sun Feb 24 18:13:03 2013 louis-philippe baron
*/

#ifndef	PROJET_H_
#define	PROJET_H_

#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>
#include	"h_list.h"
#include	<mlx.h>

#define	WIN_X	(1800)
#define	WIN_Y	(900)
#define BORDER	WIN_Y / 20
#define COLOR	0xFFFFFF

#define	ERROR	(-1)

typedef struct  s_mlx
{
  void          *mlx;
  void          *win;
  void          *img;
  char          *data;
  int		color;
  int           bpp;
  int           sizeline;
  int           endian;
  int           h;
  int           w;
}               t_mlx;

void		my_putchar(char);
void		my_putstr(char *);

int		option_1(char *);
int		option_2(char *, char *);

int		manage_expose(t_mlx *);
int		manage_key(int);
int		init(t_mlx *);
int		init_img(t_mlx *, int, int);

int		mppti(int, int, t_mlx *, int);

int		draw_points(int, int, t_mlx *, float);
int		find_max_nbr(float);
void		bars(int, int, t_mlx *, char);
void		scaler1(int, int, int, t_mlx *);

void		scaler2(int, int, float, t_mlx *);
int		draw_points2(float, float, t_mlx *, float);
float		find_max2(t_list *);

#endif
