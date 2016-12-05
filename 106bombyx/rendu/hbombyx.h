/*
** hbombyx.h for 106bombyx in /home/baron_l//local/rendu/projets/maths/106bombyx/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Feb 18 10:47:41 2013 louis-philippe baron
** Last update Sat Feb 23 11:45:21 2013 louis-philippe baron
*/

#ifndef	PROJET_H_
#define	PROJET_H_

#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>
#include	<mlx.h>

#define	WIN_X	(1200)
#define	WIN_Y	(800)

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
int		inti_img(t_mlx *);

#endif
