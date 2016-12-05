/*
** hprojet.h for 108monstre in /home/baron_l//local/rendu/projets/maths/108monstre/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Mar 20 16:47:53 2013 louis-philippe baron
** Last update Wed Mar 20 19:13:01 2013 louis-philippe baron
*/

#ifndef	PROJET_H_
#define	PROJET_H_

#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>
#include	<math.h>
#include	<mlx.h>

#define	ERROR	(-1)
#define	PI	(3.1415926535)

#define	WIN_X	(800)
#define	WIN_Y	(600)

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
int		check_validity(char *, char *);

int		manage_expose(t_mlx *);
int		manage_key(int);
int		init(t_mlx *);
int		init_img(t_mlx *);

#endif
