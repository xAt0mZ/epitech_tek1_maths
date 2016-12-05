/*
** math_init.c for 110Borwein in /home/parejo_p/module_math/110borwein
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Tue Apr  9 15:32:22 2013 pelayo parejopagador
** Last update Tue Apr  9 18:39:58 2013 pelayo parejopagador
*/

#include	<stdlib.h>
#include	"math_functions.h"
#include	"main_types.h"

int	math_init(char *number)
{
  int	nbr;

  nbr = atoi(number);
  math_rectangular_method(nbr);
  math_trapeze_method(nbr);
  math_simpson_method(nbr);
  return (SUCCESS);
}
