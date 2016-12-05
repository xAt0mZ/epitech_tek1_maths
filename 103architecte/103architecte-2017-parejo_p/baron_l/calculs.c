/*
** calculs.c for 103architecte in /home/baron_l//local/rendu/piscine/projets/maths/103architecte
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Dec 10 18:22:45 2012 louis-philippe baron
** Last update Thu Dec 13 19:47:56 2012 louis-philippe baron
*/

#include	"h103.h"

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

int		**fill_matrix_by_option(int **matrix, int nb, int ac, char **av)
{
  int		j;
  int		i;

  j = 1;
  i = 0;
  while (j < ac && i < nb)
    {
      if (av[j][0] == 'T')
	fill_translation(matrix[i], av, j);
      if (av[j][0] == 'H')
	fill_homothety(matrix[i], av, j);
      if (av[j][0] == 'R')
	fill_rotation(matrix[i], av, j);
      if (av[j][0] == 'S')
	fill_symmetry(matrix[i], av, j);
      if (av[j][0] == 'T' || av[j][0] == 'H' ||
	  av[j][0] == 'R' || av[j][0] == 'S')
	i++;
      j++;
    }
  return (matrix);
}

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
