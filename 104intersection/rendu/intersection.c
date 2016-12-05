/*
** intersection.c for 104intersection in /home/parejo_p/module_math/104intersection
**
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
**
** Started on  Sun Jan  6 18:03:07 2013 pelayo parejopagador
** Last update Sun Jan  6 22:29:45 2013 louis-philippe baron
*/

/*
** x² + y² + z² = r²
** point(av[2], 3, 4)
** vector(av[5], 6, 7)
*/

#include	"h_functions.h"
#include	"h104intersection.h"

int	intersection(int ac, char **av)
{
  int		nb;

  if (check_validity(ac, av) == ERROR)
    return (ERROR);
  if (av[1][0] == '1')
    nb = sphere(av);
  else if (av[1][0] == '2')
    nb = cylinder(av);
  else  if (av[1][0] == '3')
    printf("Not done yet :)\n");
  if (nb == ERROR)
    {
      printf("Error occured in the function\n");
      return (ERROR);
    }
  return (SUCCESS);
}

t_struct	*init_point(char **av)
{
  t_struct	*point;

  if ((point = malloc(sizeof(t_struct))) == NULL)
    return (NULL);
  point->a = (float)atoi(av[2]);
  point->b = (float)atoi(av[3]);
  point->c = (float)atoi(av[4]);
  return (point);
}

t_struct	*init_vector(char **av)
{
  t_struct	*vector;

  if ((vector = malloc(sizeof(t_struct))) == NULL)
    return (NULL);
  vector->a = (float)atoi(av[5]);
  vector->b = (float)atoi(av[6]);
  vector->c = (float)atoi(av[7]);
  return (vector);
}

int	delta_calc(float delta, t_struct *a_b_c, t_struct *vector, t_struct *point)
{
  float	k1;
  float	k2;
  float	a;
  float	b;

  a = a_b_c->a;
  b = a_b_c->b;
  if (delta < 0)
    {
      printf("Nombre de point d'intersection : 0\n");
      return (FAILURE);
    }
  else if (delta == 0)
    {
      k1 = (-b) / (2 * a);
      printf("Nombre de point d'intersection : 1\n");
      printf("Point 1 : (%f, %f, %f)\n", ((k1 * vector->a) + point->a), ((k1 * vector->b) + point->b), ((k1 * vector->c) + point->c));
    }
  else
    {
      k1 = (-b + sqrtf(delta)) / (2 * a);
      k2 = (-b - sqrtf(delta)) / (2 * a);
      printf("delta = %f, k1 = %f, k2 = %f\n", delta, k1, k2);
      printf("Nombre de point d'intersection : 2\n");
      printf("Point 1 : (%f, %f, %f)\n", ((k1 * (vector->a)) + (point->a)), ((k1 * (vector->b)) + (point->b)), ((k1 * (vector->c)) + (point->c)));
      printf("Point 2 : (%f, %f, %f)\n", ((k2 * vector->a) + point->a), ((k2 * vector->b) + point->b), ((k2 * vector->c) + point->c));
    }
  return (SUCCESS);
}
