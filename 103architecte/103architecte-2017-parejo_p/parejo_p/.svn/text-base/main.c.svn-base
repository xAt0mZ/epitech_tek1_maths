/*
** main.c for 103architecte in /home/parejo_p/module_math/103architecte
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Mon Dec 10 09:39:29 2012 pelayo parejopagador
** Last update Thu Dec 13 11:38:18 2012 pelayo parejopagador
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "h_functions.h"
#include "h_103architecte.h"

int	manager(int ac, char **av)
{
  int	*origin;
  int	i;

  i = 0;
  if ((origin = malloc(sizeof(int) * 3)) == NULL)
    return (FAILURE);
  origin[0] = my_getnbr(av[1]);
  origin[1] = my_getnbr(av[2]);
  origin[2] = 1;
  matrix_manager(ac, av);
  printf("V(%d, %d, %d)\n", origin[0], origin[1], origin[2]);
  free(origin);
  return (SUCCESS);
}

int	main(int ac, char **av)
{
  if (ac > 2)
    {
      manager(ac, av);
      return (SUCCESS);
    }
  return (FAILURE);
}
