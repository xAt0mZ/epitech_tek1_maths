/*
** main.c for 103architecte in /home/baron_l//local/rendu/piscine/projets/maths/103architecte
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Dec 10 11:42:15 2012 louis-philippe baron
** Last update Thu Dec 13 20:19:38 2012 louis-philippe baron
*/

#include	"h103.h"

int		free_matrix(int **matrix, int nb)
{
  int		j;

  j = 0;
  while (j < nb)
    {
      free(matrix[j]);
      j++;
    }
  free(matrix);
  return (0);
}

int		print_matrix(int **matrix, int nb)
{
  int		i;
  int		j;

  j = 0;
  while (j < nb)
    {
      i = 0;
      while (i < 9)
	{
	  printf("%d %d %d\n", matrix[j][i], matrix[j][i + 1], matrix[j][i + 2]);
	  i = i + 3;
	}
      j++;
    }
  return (0);
}

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
  print_matrix(matrix, nb);
  printf("(%d, %d)\n", point->x, point->y);
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
