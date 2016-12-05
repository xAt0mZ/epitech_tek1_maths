/*
** p_scalar_product.c for 101vecteur in /home/parejo_p/module_math/101vecteur
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Mon Nov 12 13:19:52 2012 pelayo parejopagador
** Last update Tue Nov 13 19:50:55 2012 louis-philippe baron
*/

#include <stdlib.h>
#include <time.h>
#include "h_101vecteur.h"

void	aff_vectors(int *u, int *v, int size)
{
  int	i;

  i = 0;
  my_putstr("vecteur u :\t\t");
  while (i < size)
    {
      my_put_nbr(u[i]);
      my_putchar('\t');
      i++;
    }
  my_putchar('\n');
  my_putstr("vecteur v :\t\t");
  i = 0;
  while (i < size)
    {
      my_put_nbr(v[i]);
      my_putchar('\t');
      i++;
    }
}

int	*set_scalar(char *av2)
{
  int	*u;
  int	size;
  int	i;

  size = my_getnbr(av2);
  u = xmalloc(sizeof(int) * size);
  i = 0;
  while (i < size)
    {
      u[i] = rand() %101;
      i++;
    }
  return (u);
}

int	scalar_product(char **av)
{
  int	p;
  int	*u;
  int	*v;
  int	size;

  size = my_getnbr(av[2]);
  srand(time(NULL));
  p = rand() % 101;
  my_putstr("p :\t\t\t");
  my_put_nbr(p);
  my_putchar('\n');
  u = set_scalar(av[2]);
  v = set_scalar(av[2]);
  aff_vectors(u, v, size);
  calc2(u, p, size);
  calc(u, v, size);
  my_putchar('\n');
  free(u);
  free(v);
  return (0);
}
