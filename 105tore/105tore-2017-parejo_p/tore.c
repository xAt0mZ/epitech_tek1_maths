/*
** tore.c for 105tore in /home/baron_l//local/rendu/projets/maths/105tore/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jan 15 18:55:41 2013 louis-philippe baron
** Last update Sun Jan 20 21:42:57 2013 pelayo parejopagador
*/

#include	<stdio.h>
#include	"htore.h"

int		tore(int ac, char **av)
{
  int		nb;
  int		(*fct[3])(int, char **);

  if (check_validity(ac, av) == ERROR)
    return (ERROR);
  printf("%s x^4 + %s x^3 + %s x^2 + %s x + %s = 0\n", av[6], av[5], av[4], av[3], av[2]);
  fct[0] = &bisection;
  fct[1] = &newton;
  fct[2] = &secant;
  nb = my_getnbr(av[1]);
  if (fct[nb - 1](ac, av) == ERROR)
    return (ERROR);
  return (0);
}
