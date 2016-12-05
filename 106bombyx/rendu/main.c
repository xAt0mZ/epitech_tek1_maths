/*
** main.c for 106bombyx in /home/baron_l//local/rendu/projets/maths/106bombyx/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Feb 18 10:46:53 2013 louis-philippe baron
** Last update Wed Mar 20 19:05:17 2013 louis-philippe baron
*/

#include	"hbombyx.h"

static	int	first_option(char *str, t_mlx *smlx)
{
  int		i;
  float		k;
  float		x;

  if (option_1(str) == ERROR)
    return (ERROR);
  if (init(smlx) == ERROR || init_img(smlx) == ERROR)
    return (ERROR);
  i = 1;
  x = 10.0;
  k = atof(str);
  while (i <= 101)
    {
      printf("%f\n", x);
      x = k * x * ((1000.0 - x) / 1000.0);
      i++;
    }
  mlx_put_image_to_window(smlx->mlx, smlx->win, smlx->img, 0, 0);
  mlx_expose_hook(smlx->win, &manage_expose, smlx);
  mlx_key_hook(smlx->win, &manage_key, 0);
  mlx_loop(smlx->mlx);
  return (0);
}

static	int	calc(int min, int max)
{
  int		i;
  float		k;
  float		x;

  k = 1.0000000000;
  while (k < 4.000000000)
    {
      i = 1;
      x = 10.0;
      while (i <= min)
	{
	  x = k * x * ((1000.0 - x) / 1000.0);
	  i++;
	}
      while (i <= max)
	{
	  printf("%f\n", x);
	  x = k * x * ((1000.0 - x) / 1000.0);
	  i++;
	}
      k += 0.010000;
      printf("k = %f\n", k);
    }
  return (0);
}

static	int	second_option(char *str1, char *str2, t_mlx *smlx)
{
  int		min;
  int		max;

  if (option_2(str1, str2) == ERROR)
    return (ERROR);
  if (init(smlx) == ERROR || init_img(smlx) == ERROR)
    return (ERROR);
  min = atoi(str1);
  max = atoi(str2);
  calc(min, max);
  mlx_put_image_to_window(smlx->mlx, smlx->win, smlx->img, 0, 0);
  mlx_expose_hook(smlx->win, &manage_expose, smlx);
  mlx_key_hook(smlx->win, &manage_key, 0);
  mlx_loop(smlx->mlx);
  return (0);
}

int		main(int ac, char **av)
{
  t_mlx		smlx;

  if (ac == 2)
    {
      if (first_option(av[1], &smlx) == ERROR)
	return (ERROR);
    }
  else if (ac == 3)
    {
      if (second_option(av[1], av[2], &smlx) == ERROR)
	return (ERROR);
    }
  else
    {
      my_putstr("\nUsage :\n\n");
      my_putstr("[ ./106bombyx k ]\t\twith \"k\" the unique rate of growth.\n");
      my_putstr("[ ./106bombyx i_min i_max]\twith \"i's\", the values of bom");
      my_putstr("byx population between wich you want a synthetic scheme\n\n");
    }
  return (0);
}
