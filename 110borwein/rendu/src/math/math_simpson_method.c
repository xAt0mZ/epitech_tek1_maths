/*
** math_regtangular_method.c for 110borwein in /home/parejo_p/module_math/110borwein
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Tue Apr  9 16:25:37 2013 pelayo parejopagador
** Last update Tue Apr  9 19:08:51 2013 pelayo parejopagador
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

static float	add_res1(float a, float h, float n, int nbr)
{
  float	i;
  float	add;
  float	x;

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

static float	add_res2(float a, float h, float n, int nbr)
{
  float	i;
  float	add;
  float	x;

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


int	math_simpson_method(int nbr)
{
  float	a;
  float	b;
  float	n;
  float	h;
  float	result;

  a = 0.00000000001;
  b = 5000;
  n = 10000;
  h = (b - a) / n;
  result = ((b - a) / (6 * n)) * (function(nbr, a) + function(nbr, b)	\
				  + 2 * add_res1(a, h, n, nbr)		\
				  + 4 * add_res2(a, h, n, nbr));
  printf("Méthode de Simpson\n\tI%d = %0.10f\n", nbr, result);
  printf("\tdiff = %0.10f\n", result - (PI / 2));
  return (SUCCESS);
}
