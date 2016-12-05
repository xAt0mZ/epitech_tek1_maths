/*
** main.c for 103architecte in /home/baron_l//local/rendu/piscine/projets/maths/103architecte
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Dec 10 11:42:15 2012 louis-philippe baron
** Last update Sun Dec 16 14:03:49 2012 pelayo parejopagador
*/

#include	"h103.h"

t_point		*init_point(char *nb1, char *nb2)
{
  t_point	*point;

  if ((point = malloc(sizeof(*point))) == NULL)
    return (NULL);
  point->x = my_getnbr(nb1);
  point->y = my_getnbr(nb2);
  point->z = 1;
  return (point);
}

int		nb_of_mat(int ac, char **av)
{
  int		i;
  int		nb;

  i = 1;
  nb = 0;
  while (i < ac)
    {
      if (av[i][0] == 'T' || av[i][0] == 'H' ||
	  av[i][0] == 'R' || av[i][0] == 'S')
	nb++;
      i++;
    }
  return (nb);
}

int		architecte(int ac, char **av)
{
  t_point	*point;
  int		**matrix;
  int		nb;

  if (check_validity(ac, av) == ERROR)
    {
      put_usage();
      return (ERROR);
    }
  if ((point = init_point(av[1], av[2])) == NULL)
    return (ERROR);
  if ((matrix = init_matrix(ac, av)) == NULL)
    return (ERROR);
  nb = nb_of_mat(ac, av);
  calc_manager(matrix, nb - 1);
  print_manager(matrix[0], av, ac);
  printf("(%.3f, %.3f)", point->x, point->y);
  vector_calc(matrix, av, ac, point);
  printf(" => (%.3f, %.3f)\n", point->x, point->y);
  free_matrix(matrix, nb);
  free(point);
  return (0);
}

int		main(int ac, char **av)
{
  if (ac >= 5)
    architecte(ac, av);
  else
    put_usage();
  return (0);
}
