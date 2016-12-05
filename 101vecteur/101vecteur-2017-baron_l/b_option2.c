/*
** b_option2.c for 101vecteur in /home/baron_l//local/rendu/piscine/projets/101vecteur
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Nov 12 17:00:10 2012 louis-philippe baron
** Last update Tue Nov 13 19:44:29 2012 louis-philippe baron
*/

#include	<stdlib.h>
#include	<time.h>
#include	"option2.h"
#include	"h_101vecteur.h"

void		*my_malloc(int size)
{
  void		*res;

  res = malloc(size);
  if (res == NULL)
    {
      my_putstr("Could not alloc\n");
      exit(1);
    }
  return (res);
}

void		my_putres(int *res)
{
  int		i;

  i = 0;
  my_putstr("\nproduit vectoriel u^v :\t");
  while (i < 3)
    {
      my_put_nbr(res[i]);
      my_putchar('\t');
      i++;
    }
  my_putchar('\n');
}

void		option2()
{
  int		*vec_u;
  int		*vec_v;
  int		*res;

  srand(time(NULL));
  vec_u = set_scalar("3");
  vec_v = set_scalar("3");
  aff_vectors(vec_u, vec_v, 3);
  res = calc_p_vector(vec_u, vec_v);
  my_putres(res);
  free(res);
  free(vec_u);
  free(vec_v);
}

int		*calc_p_vector(int *u, int *v)
{
  int		*res;

  res = my_malloc(3 * sizeof(int));
  res[0] = u[1] * v[2] - u[2] * v[1];
  res[1] = u[2] * v[0] - u[0] * v[2];
  res[2] = u[0] * v[1] - u[1] * v[0];
  return (res);
}
