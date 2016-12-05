/*
** main.c for 109titrage in /home/baron_l//local/rendu/projets/maths/109titrage/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Apr  2 13:55:58 2013 louis-philippe baron
** Last update Sat Apr  6 13:05:12 2013 louis-philippe baron
*/

#include	"htitrage.h"

static int	init_minmax(t_minmax *mmx)
{
  mmx->xmin = -1;
  mmx->xmax = -1;
  mmx->ymin = -1;
  mmx->ymax = -1;
  return (0);
}

int		main(int ac, char **av)
{
  t_all		all;
  t_minmax	mmx;

  init_minmax(&mmx);
  all.mmx = &mmx;
  if (ac == 1)
    {
      if (option1(&all) == ERROR)
	return (ERROR);
    }
  else if (ac == 2)
    {
      if (option2(av[1], &all) == ERROR)
	return (ERROR);
    }
  else
    {
      printf("Usage : \n");
      printf("- [./109titrage < file] for option 1 (derived method)\n");
      printf("- [./109titrage n < file] for option 2 (parallel method) ");
      printf("with 10 <= n <= 80\n");
    }
  return (0);
}
