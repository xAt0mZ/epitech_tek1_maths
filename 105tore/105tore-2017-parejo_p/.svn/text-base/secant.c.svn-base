/*
** secant.c for 105tore in /home/baron_l//local/rendu/projets/maths/105tore/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jan 15 19:11:26 2013 louis-philippe baron
** Last update Sun Jan 20 23:07:26 2013 pelayo parejopagador
*/

#include	<math.h>
#include	<features.h>
#include	<stdio.h>
#include	<stdlib.h>
#include	"htore.h"

int		secant(int ac, char **av)
{
  long double		x0;
  long double		x1;
  long double		x2;
  long double		e;
  long double		k;
  int		N;
  int		i;

  x0 = 0.4;
  x1 = 0.8;
  N = 1000;
  e = atof(av[7]);
  e = powl(0.1, e);
  (void)ac;
  i = 0;
  printf("Methode de la secant.\n");
  printf("Point initial 1 : %LG.\n", x0);
  printf("Point initial 2 : %LG.\n", x1);
  while (i < N)
    {
      x2 = x1 - (f(x1, av) * (x1 - x0) / (f(x1, av) - f(x0, av)));
      printf("Iteration %d  : x = %LG\n", i + 1, x2);
      k = ABS(f(x0, av));
      if (k < e)
	{
	  printf("f(x) = %LG\n", f(x0, av));
	  return (0);
	}
      x0 = x1;
      x1 = x2;
      i++;
    }
  if (i == N)
    {
      printf("Nombre d'itterations max atteinte, le resultat pourrait etre imprecit voire incorrecte.\n");
      printf("f(x) = %LG\n", f(x0, av));
    }
  return (0);
  return (0);
}
