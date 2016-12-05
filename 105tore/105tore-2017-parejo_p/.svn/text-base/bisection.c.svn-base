/*
** bisection.c for 105tore in /home/baron_l//local/rendu/projets/maths/105tore/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jan 15 19:01:40 2013 louis-philippe baron
** Last update Sun Jan 20 22:32:26 2013 pelayo parejopagador
*/

#include	<math.h>
#include	<features.h>
#include	<stdio.h>
#include	<stdlib.h>
#include	"htore.h"

int		bisection(int ac, char **av)
{
  long double		x1;
  long double		x2;
  long double		xm;
  long double		e;
  long double		k;
  int		N;
  int		i;

  x1 = 0;
  x2 = 1;
  N = 1000;
  e = atof(av[7]);
  e = powl(0.1, e);
  i = 0;
  (void)ac;
  printf("Methode de la bissection.\n");
  printf("Point initial 1 : %LG.\n", x1);
  printf("Point initial 2 : %LG.\n", x2);
  while (i < N)
    {
      xm = (x2 + x1) / 2;
      printf("Iteration %d  : x = %LG\n", i + 1, xm);
      k = ABS(f(xm, av));
      if (k < e)
	{
	  printf("f(x) = %LG\n", f(xm, av));
	  return (0);
	}
      if (f(x1, av) * f(xm, av) > 0)
	x1 = xm;
      else
	x2 = xm;
      i++;
    }
  if (i == N)
    {
      printf("Nombre d'itterations max atteinte, le resultat pourrait etre imprecit voire incorrecte.\n");
      printf("f(x) = %LG\n", f(xm, av));
    }
  return (0);
}

long double		f(long double x, char **av)
{
  long double		result;

  result = atof(av[6]) * powl(x, 4) + atof(av[5]) * powl(x, 3) + atof(av[4]) * powl(x, 2) + atof(av[3]) * x + atof(av[2]);
  return (result);
}
