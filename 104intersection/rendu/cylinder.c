/*
** cylinder.c for 104intersection in /home/baron_l//local/rendu/projets/maths/104intersection/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Jan  6 21:32:26 2013 louis-philippe baron
** Last update Sun Jan  6 22:05:25 2013 louis-philippe baron
*/

#include	"h_functions.h"
#include	"h104intersection.h"

int		cylinder(char **av)
{
  float		rayon;
  float		rayon_square;
  float		delta;
  t_struct	*a_b_c;
  t_struct	*point;
  t_struct	*vector;

  vector = init_vector(av);
  point = init_point(av);
  a_b_c = malloc(sizeof(t_struct));
  if (vector == NULL || point == NULL || a_b_c == NULL)
    return (ERROR);
  rayon = (float)atoi(av[8]);
  rayon_square = rayon * rayon;
  a_b_c->a = sqrtf(vector->a) + sqrtf(vector->b);
  a_b_c->b = 2 * (vector->a * point->a + vector->b * point->b);
  a_b_c->c = sqrtf(point->a) + sqrtf(point->b) - rayon_square;
  delta = sqrtf(a_b_c->b) - 4 * a_b_c->a * a_b_c->c;
  printf("Cylindre de rayon %f\n", rayon);
  printf("Droite passant par le point (%f, %f, %f), de vecteur directeur (%f, %f, %f)\n", point->a, point->b, point->c, vector->a, vector->b, vector->c);
  delta_calc(delta, a_b_c, vector, point);
  free(point);
  free(vector);
  free(a_b_c);
  return (SUCCESS);
}
