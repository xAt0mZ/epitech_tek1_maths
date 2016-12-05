/*
** math_regtangular_method.c for 110borwein in /home/parejo_p/module_math/110borwein
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Tue Apr  9 16:25:37 2013 pelayo parejopagador
** Last update Thu Apr 18 17:44:31 2013 louis-philippe baron
*/

#include	<math.h>
#include	<stdio.h>
#include	<stdlib.h>
#include	"main_types.h"

static double	function(int nbr, double x)
{
  double	pi;
  double	tmp;
  double	k;

  k = 0;
  pi = 1;
  while (k <= nbr)
    {
      tmp = (2 * k) + 1;
      pi = pi * (sin(x / tmp) / (x / tmp));
      k++;
    }
  return (pi);
}

static double	add_res1(double a, double h, double n, int nbr)
{
  double	i;
  double	add;
  double	x;

  i = 1;
  add = 0;
  while (i < n)
    {
      x = a + i * h;
      add = add + function(nbr, x);
      i++;
    }
  return (add);
}

static double	add_res2(double a, double h, double n, int nbr)
{
  double	i;
  double	add;
  double	x;

  i = 0;
  add = 0;
  while (i < n)
    {
      x = a + i * h + h / 2;
      add = add + function(nbr, x);
      i++;
    }
  return (add);
}


int		math_simpson_method(int nbr, char *max, char *precision)
{
  double	a;
  double	b;
  double	n;
  double	h;
  double	result;

  a = 0.00000000001;
  b = atof(max);
  n = atof(precision);
  h = (b - a) / n;
  result = ((b - a) / (6 * n)) * (function(nbr, a) + function(nbr, b)	\
				  + 2 * add_res1(a, h, n, nbr)		\
				  + 4 * add_res2(a, h, n, nbr));
  printf("Méthode de Simpson\n\tI%d = %0.10f\n", nbr, result);
  printf("\tdiff = %0.10f\n", result - (PI / 2));
  return (SUCCESS);
}
