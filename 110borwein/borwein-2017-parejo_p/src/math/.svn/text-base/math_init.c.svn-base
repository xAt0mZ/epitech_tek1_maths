/*
** math_init.c for 110Borwein in /home/parejo_p/module_math/110borwein
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Tue Apr  9 15:32:22 2013 pelayo parejopagador
** Last update Thu Apr 18 19:06:36 2013 louis-philippe baron
*/

#include	<stdlib.h>
#include	<stdio.h>
#include	"math_functions.h"
#include	"main_types.h"

int		math_init(char *number)
{
  int		nbr;

  if (check(number) == ERROR)
    return (ERROR);
  nbr = atoi(number);
  math_rectangular_method(nbr, "5000", "10000");
  math_trapeze_method(nbr, "5000", "10000");
  math_simpson_method(nbr, "5000", "10000");
  return (SUCCESS);
}

int		math_init_2(char *number, char *other)
{
  int		nbr;
  double	test;

  if (check_2(number, other) == ERROR)
    return (ERROR);
  nbr = atoi(number);
  other = &other[1];
  test = atof(other);
  if (test == 0)
    {
      printf("Invalid 2nd arg\n");
      return (ERROR);
    }
  if (other[0] == 'M')
    {
      math_rectangular_method(nbr, other, "10000");
      math_trapeze_method(nbr, other, "10000");
      math_simpson_method(nbr, other, "10000");
    }
  else if (other[0] == 'P')
    {
      math_rectangular_method(nbr, "5000", other);
      math_trapeze_method(nbr, "5000", other);
      math_simpson_method(nbr, "5000", other);
    }
  return (SUCCESS);
}

int		math_init_3(char *number, char *max, char *precision)
{
  int		nbr;
  double	test;

  if (check_3(number, max, precision) == ERROR)
    return (ERROR);
  nbr = atoi(number);
  max = &max[1];
  precision = &precision[1];
  test = atof(max);
  if (test == 0)
    {
      printf("Invalid maximum\n");
      return (ERROR);
    }
  test = atof(precision);
  if (test == 0)
    {
      printf("Invalid precision\n");
      return (ERROR);
    }
  math_rectangular_method(nbr, max, precision);
  math_trapeze_method(nbr, max, precision);
  math_simpson_method(nbr, max, precision);
  return (SUCCESS);
}
