/*
** print.c for 103architecte in /home/parejo_p/module_math/103architecte/all
**
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
**
** Started on  Sun Dec 16 13:47:24 2012 pelayo parejopagador
** Last update Sun Dec 16 14:00:44 2012 pelayo parejopagador
*/

#include <stdio.h>
#include "h103.h"

void print_manager(int *matrix, char **av, int ac)
{
  long	i;
  int	j;

  j = 1;
  i = 1;
  while (j < ac)
    {
      if (av[j][0] == 'T')
	printf("translation de vecteur (%s,%s)\n", av[j + 1], av[j + 2]);
      else if (av[j][0] == 'H')
	printf("homothetie de rapports %s et %s\n", av[j + 1], av[j + 2]);
      else if (av[j][0] == 'R')
	{
	  printf("rotation d'angle %s degres\n", av[j + 1]);
	  i = i * 1000;
	}
      else if (av[j][0] == 'S')
	{
	  printf("symetrie par rapports a un axe incline de %s degres\n", av[j + 1]);
	  i = i * 1000000;
	}
      j++;
    }
  print_matrix_float(matrix, i);
}

void	print_matrix_float(int *matrix, long i)
{
  int	k;

  k = 0;
  while (k < 9)
    {
      printf("   %.3f  %.3f  %.3f\n", (float)(matrix[k] / i), (float)(matrix[k + 1] / i), (float)(matrix[k + 2]) / i);
      k = k + 3;
    }
}
