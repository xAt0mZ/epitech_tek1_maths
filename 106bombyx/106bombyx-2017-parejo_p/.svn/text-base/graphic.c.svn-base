/*
** graphic.c for 106bombyx in /home/parejo_p/module_math/106bombyx
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Sat Feb 23 21:29:46 2013 pelayo parejopagador
** Last update Sun Feb 24 16:12:52 2013 pelayo parejopagador
*/

#include "hbombyx.h"

int		find_max_nbr(float k)
{
  int		i;
  float		max;
  float		save;
  int		save2;
  int		result;

  i = 1;
  max = 10.0;
  save = 0;
  result = 1;
  while (i++ <= 101)
    {
      max = k * max * ((1000.0 - max) / 1000.0);
      if (save < max)
	save = max;
    }
  while (result * 10 < save)
    result = result * 10;
  save2 = result;
  while (result < save)
    result = result + save2;
  return (result);
}

int		draw_points(int x, int y, t_mlx *smlx, float max)
{
  float		scale_x;
  float		scale_y;

  scale_x = (WIN_X - BORDER * 2) / 100;
  scale_y = (WIN_Y - BORDER * 2) / max;
  x = BORDER + x * scale_x;
  y = (WIN_Y - BORDER) - (y * scale_y);
  mppti(x - 1, y, smlx, COLOR);
  mppti(x, y - 1, smlx, COLOR);
  mppti(x, y, smlx, COLOR);
  mppti(x, y + 1, smlx, COLOR);
  mppti(x + 1, y, smlx, COLOR);
  return (0);
}

void		bars(int x, int y, t_mlx *smlx, char option)
{
  int		i;

  i = 0;
  while (option == 'y' && i++ < 8)
    mppti(x + i, y, smlx, COLOR);
  while (option == 'x' && i++ < 8)
    mppti(x, y - i, smlx, COLOR);
}

void		scaler1(int x, int y, int max, t_mlx *smlx)
{
  int		scale;

  scale = BORDER;
  while (y <= (WIN_Y - BORDER))
    {
      if (y == scale && y != WIN_Y - BORDER)
      	{
      	  scale = scale + (WIN_Y - BORDER * 2) / (max / 100);
      	  bars(x, y, smlx, 'y');
      	}
      mppti(x, y, smlx, COLOR);
      y++;
    }
  scale = BORDER;
  while (x <= (WIN_X - BORDER))
    {
      if (x == scale)
	{
	  scale = scale + (WIN_X - BORDER * 2) / 5;
	  bars(x, y, smlx,'x');
	}
      mppti(x, y, smlx, COLOR);
      x++;
    }
}
