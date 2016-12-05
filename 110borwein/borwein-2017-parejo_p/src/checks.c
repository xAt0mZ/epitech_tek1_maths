/*
** checks.c for 110borwein in /home/baron_l//local/rendu/projets/maths/110borwein/borwein-2017-parejo_p/src
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Apr 18 17:05:51 2013 louis-philippe baron
** Last update Thu Apr 18 19:05:47 2013 louis-philippe baron
*/

#include	"main_functions.h"
#include	"math_functions.h"
#include	<stdio.h>

static int	check_this(char *str, char n)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9') && str[i] != n)
	return (ERROR);
      i++;
    }
  return (0);
}

int		check(char *number)
{
  if (check_this(number, 0) == ERROR)
    {
      printf("Invalid [n] as maximum limit\n");
      return (ERROR);
    }
  return (0);
}

int		check_2(char *number, char *other)
{
  if (check_this(number, 0) == ERROR)
    {
      printf("Invalid [n] as maximum limit\n");
      return (ERROR);
    }
  if (other[0] != 'M' && other[0] != 'P')
    {
      printf("Invalid 2nd argument\n");
      return (ERROR);
    }
  if (other[0] == 'M' && check_this(other, 'M') == ERROR)
    {
      printf("Invalid [Max] as maximum limit\n");
      return (ERROR);
    }
  else if (other[0] == 'P' && check_this(other, 'P') == ERROR)
    {
      printf("Invalid [Precision]\n");
      return (ERROR);
    }
  return (0);
}

int		check_3(char *number, char *max, char *precision)
{
  if (check_this(number, 0) == ERROR)
    {
      printf("Invalid [n] as maximum limit for product\n");
      return (ERROR);
    }
  if (max[0] != 'M')
    {
      printf("Invalid [Max] arg\n");
      return (ERROR);
    }
  if (precision[0] != 'P')
    {
      printf("Invalid [Precision] arg\n");
      return (ERROR);
    }
  if (check_this(max, 'M') == ERROR)
    {
      printf("Invalid [Max] as maximum limit for integral\n");
      return (ERROR);
    }
  if (check_this(precision, 'P') == ERROR)
    {
      printf("Invalid [Precision]\n");
      return (ERROR);
    }
  return (0);
}
