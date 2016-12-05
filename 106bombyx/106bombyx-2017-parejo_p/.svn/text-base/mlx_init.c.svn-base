/*
** mlx_init.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Feb 13 12:47:16 2013 louis-philippe baron
** Last update Sun Feb 24 18:25:22 2013 louis-philippe baron
*/

#include	"hbombyx.h"

int             manage_expose(t_mlx *smlx)
{
  mlx_put_image_to_window(smlx->mlx, smlx->win, smlx->img, 0, 0);
  mlx_string_put(smlx->mlx, smlx->win, 200, 200, 0xFFFFFF, "Ah que coucou bob !");
  return (0);
}

int		manage_key(int keycode)
{
  if (keycode == 65307)
    exit(0);
  return (0);
}

int		init(t_mlx *smlx)
{
  smlx->w = WIN_X;
  smlx->h = WIN_Y;
  if ((smlx->mlx = mlx_init()) == NULL)
    {
      my_putstr("Mlx can't be inizialised\n");
      return (ERROR);
    }
  if ((smlx->win = mlx_new_window(smlx->mlx, smlx->w,
				  smlx->h, "106bombyx : parejo_p.baron_l")) == NULL)
    {
      my_putstr("Windows can't be initialized\n");
      return (ERROR);
    }
  return (0);
}

int		init_img(t_mlx *smlx, int max, int option)
{
  int		x;
  int		y;

  if ((smlx->img = mlx_new_image(smlx->mlx, smlx->w, smlx->h)) == NULL)
    return (ERROR);
  if ((smlx->data = mlx_get_data_addr(smlx->img, &smlx->bpp, &smlx->sizeline,
				      &smlx->endian)) == NULL)
    return (ERROR);
  x = BORDER;
  y = BORDER;
  if (option == 1)
    scaler1(x, y, max, smlx);
  else
    scaler2(x, y, max, smlx);
  return (0);
}
