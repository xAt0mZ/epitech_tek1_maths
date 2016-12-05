/*
** p_calc.c for 101vecteur in /home/parejo_p/module_math/101vecteur
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Tue Nov 13 16:52:20 2012 pelayo parejopagador
** Last update Tue Nov 13 19:53:29 2012 louis-philippe baron
*/

#include <stdlib.h>
#include "h_101vecteur.h"

void	calc(int *u, int *v, int size)
{
  int	*add_uv;
  int	i;
  int	mult_uv;

  add_uv = xmalloc(sizeof(int) * size);
  i = 0;
  my_putstr("\nvecteur u+v :\t\t");
  while (i < size)
    {
      add_uv[i] = u[i] + v[i];
      my_put_nbr(add_uv[i]);
      my_putchar('\t');
      i++;
    }
  i = 0;
  my_putstr("\nproduit scalaire u*v :\t");
  mult_uv = 0;
  while (i < size)
    {
      mult_uv = mult_uv + (u[i] * v[i]);
      i++;
    }
  my_put_nbr(mult_uv);
  free(add_uv);
}

void	calc2(int *u, int p, int size)
{
  int	i;
  int	*pu;

  i = 0;
  my_putstr("\nvecteur p*u\t\t");
  pu = xmalloc(sizeof(int) * size);
  while(i < size)
    {
      pu[i] = p * u[i];
      my_put_nbr(pu[i]);
      my_putchar('\t');
      i++;
    }
  free(pu);
}
