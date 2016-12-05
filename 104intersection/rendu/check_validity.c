/*
** check_validity.c for 104intersection in /home/baron_l//local/rendu/projets/maths/104intersection/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Jan  6 19:22:11 2013 louis-philippe baron
** Last update Sun Jan  6 20:34:26 2013 louis-philippe baron
*/

#include	"h104intersection.h"

static int	check_overflow(int ac, char **av)
{
  int		i;
  int		k;

  k = 1;
  while (k < ac)
    {
      i = 0;
      while (av[k][i])
	i++;
      if ((i >= 10 && av[k][0] != '-') || (i >= 11 && av[k][0] == '-'))
	return (ERROR);
      k++;
    }
  return (0);
}

static int	check_arg(char **av)
{
  int		nb;

  nb = atoi(av[8]);
  if (av[1][0] == '1' || av[1][0] == '2')
    {
      if (nb <= 0)
	return (ERROR);
    }
  else
    {
      if (nb % 90 == 0)
	return (ERROR);
    }
  return (0);
}

static int	check_option(char **av)
{
  if ((av[1][0] == '1' && av[1][1] == '\0') ||
      (av[1][0] != '2' && av[1][1] == '\0') ||
      (av[1][0] != '3' && av[1][1] == '\0'))
    return (0);
  return (ERROR);
}

static int	check_content(int ac, char **av)
{
  int		k;
  int		i;

  k = 1;
  while (k < ac)
    {
      i = 0;
      while (av[k][i])
	{
	  if (!(av[k][i] >= '0' && av[k][i] <= '9') && av[k][i] != '-')
	    return (ERROR);
	  i++;
	}
      k++;
    }
  return (0);
}

int		check_validity(int ac, char **av)
{
  if (check_content(ac, av) == ERROR)
    {
      printf("\nArguments should only be numbers.\n\n");
      return (ERROR);
    }
  if (check_option(av) == ERROR)
    {
      printf("\nFirst argument is wrong. %s\n", OPTION);
      return (ERROR);
    }
  if (check_overflow(ac, av) == ERROR)
    {
      printf("Some numbers may be in overflow\n");
      return (ERROR);
    }
  if (check_arg(av) == ERROR)
    {
      printf("If option is 1 or 2, arg must be greater than 0, else if option is 3, arg must not be a modulo of 90 degrees.\n");
      return (ERROR);
    }
  return (0);
}
