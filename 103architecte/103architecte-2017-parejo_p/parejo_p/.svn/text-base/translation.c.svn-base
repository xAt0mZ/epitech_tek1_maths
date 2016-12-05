/*
** translation.c for 103architecte in /home/parejo_p/module_math/103architecte
**
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
**
** Started on  Mon Dec 10 09:39:16 2012 pelayo parejopagador
** Last update Thu Dec 13 11:39:22 2012 pelayo parejopagador
*/

#include <unistd.h>
#include <stdlib.h>
#include "h_103architecte.h"
#include "h_functions.h"

int	translation(int *matrix, int i)
{
  int	k;

  if ((matrix = malloc(sizeof(int) * 9)) == NULL)
    return (FAILURE);
  k = 0;
  while (k < 9)
    {
      if (k == 0 || k == 4 || k == 8)
	matrix[k] = 1;
      else if (k == 2 || k == 5)
	matrix[k] = my_getnbr(av[i++]);
      else
	matrix[k] = 0;
      k++;
    }
}

/* int	translation(int *origin, char **av, int i) */
/* { */
/*   int	*matrix; */

/*   init(matrix, av, i); */
/*   calc(matrix, origins); */
/*   free(matrix); */
/*   return (SUCCESS); */
/* } */

int	*matrix_calc(int *matrix1, int *matrix2)
{
  int	*matrix3;
  int	i;
  int	k;

  if ((matrix3 = malloc(sizeof(int) * 9)) == NULL)
    return (FAILURE);
  i = 0;
  k = 0;
  while (i <= 8)
    {
      matrix3[i] = (matrix1[k] * matrix2[i]) + (matrix1[k + 1] * matrix2[k + 3]) + (matrix1[k + 2] * matrix2[k + 6]);
      i++;
      if (i % 3 == 0 && i != 0)
	{
	  k = k + 3;
	  i = 0;
	}
    }
  free(matrix1)
  free(matrix2)
  return (matrix3);
}

int	matrix_manager(int ac, char **av)
{
  int	i;
  int	*matrix1;
  int	*matrix2;
  i = 3;
  matrix1 = NULL;
  matrix2 = NULL;
  while (i < ac)
    {
      if (matrix1 == NULL && matrix2 == NULL)
	{
	  if (av[i++][0] == 'T')
	    matrix1 = translation(av[i], av[i + 1]);
	}
      else if (matrix1 != NULL && matrix2 ==NULL)
	{
	  if (av[i++][0] == 'T')
	    matrix2 = translation(av[i], av[i + 1]);
	}
      else if (matrix1 != NULL && matrix2 != NULL)
	{
	  i = i - 1;
	  matrix1 = calc_matrix(matrix2, matrix1);
	  matrix3 = NULL;
	}
      i++;
      while (k != 9)
	{
	  printf("%d\n", matrix1[k]);
	  k++;
	}
    }
}
