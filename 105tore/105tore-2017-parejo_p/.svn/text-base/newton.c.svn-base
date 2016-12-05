/*
** newton.c for 105tore in /home/baron_l//local/rendu/projets/maths/105tore/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jan 15 19:10:45 2013 louis-philippe baron
** Last update Sun Jan 20 23:06:13 2013 pelayo parejopagador
*/

#include	<math.h>
#include	<features.h>
#include	<stdio.h>
#include	<stdlib.h>
#include	"htore.h"

int		newton(int ac, char **av)
{
  long double		x0;
  long double		e;
  long double		k;
  int		N;
  int		i;

  x0 = 0.5;
  N = 1000;
  e = atof(av[7]);
  e = powl(0.1, e);
  (void)ac;
  i = 0;
  printf("Methode de Newton.\n");
  printf("Point initial : %LG.\n", x0);
  while (i < N)
    {
      x0 = x0 - (f(x0, av) / f_prime(x0, av));
      printf("Iteration %d  : x = %LG\n", i + 1, x0);
      k = ABS(f(x0, av));
      if (k < e)
	{
	  printf("f(x) = %LG\n", f(x0, av));
	  return (0);
	}
      i++;
    }
  if (i == N)
    {
      printf("Nombre d'itterations max atteinte, le resultat pourrait etre imprecit voire incorrecte.\n");
      printf("f(x) = %LG\n", f(x0, av));
    }
  return (0);
}

long double		f_prime(long double x, char **av)
{
  long double		result;

  result = atof(av[6]) * 4 * powl(x, 3) + atof(av[5]) * 3 * powl(x, 2) + atof(av[4]) * 2 * x + atof(av[3]);
  return (result);
}
