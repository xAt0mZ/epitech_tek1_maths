/*
** math_regtangular_method.c for 110borwein in /home/parejo_p/module_math/110borwein
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Tue Apr  9 16:25:37 2013 pelayo parejopagador
** Last update Tue Apr  9 18:03:39 2013 pelayo parejopagador
*/

#include	<math.h>
#include	<stdio.h>
#include	"main_types.h"

static float	function(int nbr, float x)
{
  float pi;
  float	tmp;
  float	k;

  k = 0;
  pi = 1;
  while (k <= nbr)
    {
      tmp = (2 * k) + 1;
      pi = pi * (sinf(x / tmp) / (x / tmp));
      k++;
    }
  return (pi);
}

int	math_rectangular_method(int nbr)
{
  float	a;
  float	i;
  float	add;
  float	b;
  float	n;
  float	h;
  float	x;
  float	result;

  a = 0.00000000001;
  i = 0;
  add = 0;
  b = 5000;
  n = 10000;
  h = (b - a) / n;
  while (i < n)
    {
      x = a + i * h;
      add = add + function(nbr, x);
      i++;
    }
  result = (b - a) / n * add;
  printf("Méthode des rectangles\n\tI%d = %0.10f\n", nbr, result);
  printf("\tdiff = %0.10f\n", result - (PI / 2));
  return (SUCCESS);
}
