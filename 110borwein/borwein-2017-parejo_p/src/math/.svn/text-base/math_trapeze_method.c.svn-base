/*
** math_regtangular_method.c for 110borwein in /home/parejo_p/module_math/110borwein
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Tue Apr  9 16:25:37 2013 pelayo parejopagador
** Last update Thu Apr 18 17:44:44 2013 louis-philippe baron
*/

#include	<math.h>
#include	<stdio.h>
#include	<stdlib.h>
#include	"main_types.h"

static double	function(int nbr, double x)
{
  double pi;
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

int		math_trapeze_method(int nbr, char *max, char *precision)
{
  double	a;
  double	i;
  double	add;
  double	b;
  double	n;
  double	h;
  double	x;
  double	result;

  a = 0.00000000001;
  i = 1;
  add = 0;
  b = atof(max);
  n = atof(precision);
  h = (b - a) / n;
  while (i < n)
    {
      x = a + i * h;
      add = add + function(nbr, x);
      i++;
    }
  result = function(nbr, a) + function(nbr, b) + 2 * add;
  result = ((b - a) / (2 * n)) * result;
  printf("Méthode des trapèzes\n\tI%d = %0.10f\n", nbr, result);
  printf("\tdiff = %0.10f\n", (result - (PI / 2)));
  return (SUCCESS);
}
