/*
** matrix.c for 103architecte in /home/parejo_p/module_math/103architecte/all
**
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
**
** Started on  Fri Dec 14 13:44:12 2012 pelayo parejopagador
** Last update Sun Dec 16 13:21:41 2012 pelayo parejopagador
*/

#include	"h103.h"

int		**init_matrix(int ac, char **av)
{
  int		**matrix;
  int		nb;
  int		i;
  int		j;

  nb = nb_of_mat(ac, av);
  if ((matrix = malloc((nb + 1) * sizeof(int *))) == NULL)
    return (NULL);
  j = 0;
  while (j < nb)
    {
      i = 0;
      if ((matrix[j] = malloc(9 * sizeof(int))) == NULL)
	return (NULL);
      while (i < 9)
	{
	  matrix[j][i] = 0;
	  i++;
	}
      j++;
    }
  matrix = fill_matrix_by_option(matrix, nb, ac, av);
  return (matrix);
}

int		**fill_matrix_by_option(int **matrix, int nb, int ac, char **av)
{
  int		j;
  int		i;

  j = 1;
  i = 0;
  while (j < ac && i < nb)
    {
      if (av[j][0] == 'T')
	fill_translation(matrix[i], av[j + 1], av[j + 2]);
      if (av[j][0] == 'H')
	fill_homothety(matrix[i], av[j + 1], av[j + 2]);
      if (av[j][0] == 'R')
	fill_rotation(matrix[i], av[j + 1]);
      if (av[j][0] == 'S')
	matrix[i] = fill_symmetry(av[j + 1]);
      if (av[j][0] == 'T' || av[j][0] == 'H' ||
	  av[j][0] == 'R' || av[j][0] == 'S')
	i++;
      j++;
    }
  return (matrix);
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
	  printf("%d  %d  %d\n", matrix[j][i], matrix[j][i + 1], matrix[j][i + 2]);
	  i = i + 3;
	}
      printf("\n");
      j++;
    }
  return (0);
}

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
