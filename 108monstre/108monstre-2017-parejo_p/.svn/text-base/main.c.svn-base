/*
** main.c for 108monstre in /home/baron_l//local/rendu/projets/maths/108monstre/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Mar 20 16:47:03 2013 louis-philippe baron
** Last update Sun Mar 24 22:22:37 2013 pelayo parejopagador
*/

#include	"hmonstre.h"

static float	calc(float a, int nmax, float x)
{
  float		res;
  int		k;

  k = 0;
  res = 0;
  while (k <= nmax)
    {
      res += (cos((powf(a, (float)k) * PI * x)) / powf(2.0, (float)k));
      k++;
    }
  return (res);
}

static int	monstre(char *coef, char *max, t_mlx *smlx)
{
  int		nmax;
  float		a;
  float		x;
  float		res;

  if (check_validity(coef, max) == ERROR)
    return (ERROR);
  if (init(smlx) == ERROR || init_img(smlx) == ERROR)
    return (ERROR);
  a = atof(coef);
  nmax = atoi(max);
  x = -2.0;
  draw_lines(smlx);
  while (x <= 2.01)
    {
      res = calc(a, nmax, x);
      draw_points(x, res, smlx);
      x += 0.001;
    }
  mlx_put_image_to_window(smlx->mlx, smlx->win, smlx->img, 0, 0);
  mlx_expose_hook(smlx->win, &manage_expose, smlx);
  mlx_key_hook(smlx->win, &manage_key, 0);
  mlx_loop(smlx->mlx);
  return (0);
}

int		main(int ac, char **av)
{
  t_mlx		smlx;

  if (ac == 3)
    {
      if (monstre(av[1], av[2], &smlx) == ERROR)
	return (ERROR);
    }
  else
    {
      my_putstr("Usage : [ ./108monstre a nmax ] with :\n");
      my_putstr("- 'a'\ta number in ]2 ; +inf[\n");
      my_putstr("- 'nmax'\ta number in |N\n");
    }
  return (0);
}
