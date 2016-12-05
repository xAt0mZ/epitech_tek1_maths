/*
** calc.c for 103architecte in /home/parejo_p/module_math/103architecte
**
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
**
** Started on  Mon Dec 10 09:39:29 2012 pelayo parejopagador
** Last update Sun Dec 16 13:16:53 2012 pelayo parejopagador
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "h_functions.h"
#include "h_103architecte.h"
#include "h103.h"

void	calc_manager(int **matrix, int i)
{
  while (i >= 1)
    {
      matrix[i - 1] = matrix_calc(matrix[i], matrix[i - 1]);
      i--;
    }
}

void		vector_calc(int **matrix, char **av, int ac, t_point *vector)
{
  long		i;
  int		j;
  t_point	*tmp;


  j = 1;
  i = 1;
  if ((tmp = malloc(sizeof(t_point))) == NULL)
    return;
  while (j < ac)
    {
      if (av[j][0] == 'R')
	i = i * 1000;
      else if (av[j][0] == 'S')
	i = i * 1000000;
      j++;
    }
  tmp->x = vector->x / i;
  tmp->y = vector->y / i;
  tmp->z = vector->z / i;
  vector->x = matrix[0][0] * tmp->x + matrix[0][1] * tmp->y + matrix[0][2] * tmp->z;
  vector->y = matrix[0][3] * tmp->x + matrix[0][4] * tmp->y + matrix[0][5] * tmp->z;
  vector->z = matrix[0][6] * tmp->x + matrix[0][7] * tmp->y + matrix[0][8] * tmp->z;
  free(tmp);
}

int	*matrix_calc(int *matrix1, int *matrix2)
{
  int	*matrix3;
  int	i;
  int	k;
  int	j;

  if ((matrix3 = malloc(sizeof(int) * 9)) == NULL)
    return (NULL);
  i = 0;
  k = 0;
  j = 0;
  while (j < 9)
    {
      matrix3[j] = (matrix1[k] * matrix2[i]) + (matrix1[k + 1] * matrix2[i + 3]) + (matrix1[k + 2] * matrix2[i + 6]);
      i++;
      if (i % 3 == 0 && i != 0)
	{
	  k = k + 3;
	  i = 0;
	}
      j++;
    }
  free(matrix2);
  return (matrix3);
}
