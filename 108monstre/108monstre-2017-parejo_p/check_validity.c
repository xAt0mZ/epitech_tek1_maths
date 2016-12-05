/*
** check_validity.c for 108monstre in /home/baron_l//local/rendu/projets/maths/108monstre/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Mar 20 17:02:08 2013 louis-philippe baron
** Last update Wed Mar 20 17:29:34 2013 louis-philippe baron
*/

#include	"hmonstre.h"

static int	check_max(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9'))
	return (ERROR);
      i++;
    }
  return (0);
}

static int	check_coef(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9') && str[i] != '.')
	return (ERROR);
      i++;
    }
  return (0);
}

int		check_validity(char *coef, char *max)
{
  float		a;
  int		nmax;

  a = atof(coef);
  nmax = atoi(max);
  if (check_coef(coef) == ERROR || a <= 2.0)
    {
      my_putstr("Please enter a valid 'a' number ");
      my_putstr("choosen in ]2 ; +inf[\n");
      return (ERROR);
    }
  if (check_max(max) == ERROR || nmax < 0)
    {
      my_putstr("Please enter a valid 'nmax' number ");
      my_putstr("choosen in |N");
      return (ERROR);
    }
  return (0);
}
