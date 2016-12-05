/*
** check_validity.c for 196bombyx in /home/baron_l//local/rendu/projets/maths/106bombyx/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Feb 22 17:13:52 2013 louis-philippe baron
** Last update Fri Feb 22 20:16:27 2013 louis-philippe baron
*/

#include	"hbombyx.h"

static	int	check_overflow(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i++;
  if (i > 9)
    {
      my_putstr("Some numbers may be in overflow\n");
      return (ERROR);
    }
  return (0);
}

static	int	check_content_1(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9') && str[i] != '.')
	{
	  my_putstr("Please only enter positiv numbers.\n");
	return (ERROR);
	}
      i++;
    }
  return (0);
}

int		option_1(char *str)
{
  float		k;

  if (check_content_1(str) == ERROR)
    return (ERROR);
  if (check_overflow(str) == ERROR)
    return (ERROR);
  k = atof(str);
  if (k < 1 || k > 4)
    {
      my_putstr("Enter a number between 1 and 4 included\n");
      return (ERROR);
    }
  return (0);
}

static	int	check_content_2(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9'))
	{
	  my_putstr("Please only enter natural positiv numbers.\n");
	return (ERROR);
	}
      i++;
    }
  return (0);
}

int		option_2(char *str1, char *str2)
{
  int		x1;
  int		x2;

  if (check_content_2(str1) == ERROR || check_content_2(str2) == ERROR)
    return (ERROR);
  if (check_overflow(str1) == ERROR || check_overflow(str2) == ERROR)
    return (ERROR);
  x1 = atoi(str1);
  x2 = atoi(str2);
  if (x1 == x2)
    {
      my_putstr("Enter different numbers\n");
      return (ERROR);
    }
  if (x1 > x2)
    {
      my_putstr("Entre i_min and then i_max\n");
      return (ERROR);
    }
  return (0);
}
