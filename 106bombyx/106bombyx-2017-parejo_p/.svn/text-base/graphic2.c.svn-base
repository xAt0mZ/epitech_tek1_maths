/*
** graphic2.c for 106bombyx in /home/parejo_p/module_math/106bombyx
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Sun Feb 24 15:46:09 2013 pelayo parejopagador
** Last update Sun Feb 24 17:26:30 2013 pelayo parejopagador
*/

#include "hbombyx.h"

float		find_max2(t_list *list)
{
  float		result;
  float		save2;
  float		save;


  save = 0;
  result = 1;
  while (list != NULL)
    {
      if (save < list->x)
	save = list->x;
      list = list->next;
    }
  while (result * 10 < save)
    result = result * 10;
  save2 = result;
  while (result < save)
    result = result + save2;
  return (result);
}

int		draw_points2(float x, float y, t_mlx *smlx, float max)
{
  float		scale_x;
  float		scale_y;

  scale_x = (WIN_X - BORDER * 2) / 3;
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

void		scaler2(int x, int y, float max, t_mlx *smlx)
{
  int		scale;

  scale = BORDER;
  while (y <= (WIN_Y - BORDER))
    {
      if (y == scale && y != WIN_Y - BORDER)
	{
	  scale = scale + (WIN_Y - BORDER * 2) / (max / 200);
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
	  scale = scale + (WIN_X - BORDER * 2) / 6;
	  bars(x, y, smlx, 'x');
	}
      mppti(x, y, smlx, COLOR);
      x++;
    }
}
