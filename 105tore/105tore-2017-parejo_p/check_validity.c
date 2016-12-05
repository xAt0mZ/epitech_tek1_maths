/*
** check_validity.c for 105tore in /home/baron_l//local/rendu/projets/maths/105tore/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jan 15 17:17:57 2013 louis-philippe baron
** Last update Tue Jan 15 17:52:08 2013 louis-philippe baron
*/

#include	"htore.h"

static	int	check_content(int ac, char **av)
{
  int		i;
  int		k;

  k = 1;
  while (k < ac)
    {
      i = 0;
      if (av[k][i] == '-')
	i++;
      while (av[k][i])
	{
	  if (!(av[k][i] >= '0' && av[k][i] <= '9'))
	    return (ERROR);
	  i++;
	}
      k++;
    }
  return (0);
}

static	int	check_overflow(int ac, char **av)
{
  int		k;
  int		nb;

  k = 1;
  while (k < ac)
    {
      nb = my_getnbr(av[k]);
      if ((av[k][0] == '-' && nb > 0) || (av[k][0] != '-' && nb < 0))
	return (ERROR);
      k++;
    }
  return (0);
}

static	int	check_option(char **av)
{
  int		nb;

  nb = my_getnbr(av[1]);
  if (nb != 1 && nb != 2 && nb != 3)
    return (ERROR);
  return (0);
}

int		check_validity(int ac, char **av)
{
  if (check_content(ac, av) == ERROR)
    {
      my_putstr("Params should only be numbers.\n");
      return (ERROR);
    }
  if (check_overflow(ac, av) == ERROR)
    {
      my_putstr("Some numbers may be in overflow.\n");
      return (ERROR);
    }
  if (check_option(av) == ERROR)
    {
      my_putstr("[option] should be :\n- [1] for the bisection method\n");
      my_putstr("- [2] for the Newton method\n- [3] for the secant method\n");
      return (ERROR);
    }
  return (0);
}
