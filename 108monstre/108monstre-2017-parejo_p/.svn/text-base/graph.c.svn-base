/*
** graph.c for 108monstre in /home/parejo_p/module_math/108monstre
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Sun Mar 24 20:37:46 2013 pelayo parejopagador
** Last update Sun Mar 24 22:56:11 2013 pelayo parejopagador
*/

#include	"hmonstre.h"

void	draw_lines(t_mlx *smlx)
{
  int	x;
  int	y;

  x = BORDER;
  y = BORDER;
  while (y <= (WIN_Y - BORDER))
    {
      mppti(x, y, smlx, 0xFFFFFF);
      y++;
    }
  while (x <= (WIN_X - BORDER))
    {
      mppti(x, y, smlx, 0xFFFFFF);
      x++;
    }
}

void	draw_points(float x, float y, t_mlx *smlx)
{
  float scale_x;
  float scale_y;

  scale_x = (WIN_X - BORDER * 2) / 4;
  scale_y = (WIN_Y - BORDER * 2) / 4;
  x = (WIN_X / 2) + (x * scale_x);
  y = (WIN_Y / 2) - (y * scale_y);
  mppti((int)x, (int)y, smlx, 0xFFFFFF);
}
