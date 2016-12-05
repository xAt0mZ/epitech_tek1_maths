/*
** check_validity.c for 103architecte in /home/baron_l//local/rendu/piscine/projets/maths/103architecte
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Dec 10 11:54:40 2012 louis-philippe baron
** Last update Sat Dec 15 12:18:12 2012 pelayo parejopagador
*/

#include	"h103.h"

int		check_nb(char *str)
{
  int		i;

  i = 0;
  if (str[0] == '-' && str[1])
    i++;
  if (str[0] == '-' && str[1] == '\0')
    return (ERROR);
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9'))
	return (ERROR);
      i++;
    }
  return (0);
}

int		check_long(int ac, char **av)
{
  int		j;

  j = 1;
  while (j < ac)
    {
      if ((av[j][0] == 'T' || av[j][0] == 'H' ||
	   av[j][0] == 'R' || av[j][0] == 'S') && av[j][1])
	return (ERROR);
      if (av[j][0] == 'T' || av[j][0] == 'H')
	if (j + 1 == ac || j + 2 == ac || (av[j + 1][0] != '-' && !(av[j + 1][0] >= '0' && av[j + 1][0] <= '9'))
	    || (av[j + 2][0] != '-' && !(av[j + 2][0] >= '0' && av[j + 2][0] <= '9')) ||
	    (j + 3 != ac && (av[j + 3][0] != 'R' && av[j + 3][0] != 'T' && av[j + 3][0] != 'H' && av[j + 3][0] != 'S')))
	  return (ERROR);
      if (av[j][0] == 'R' || av[j][0] == 'S')
	if (j + 1 == ac || (av[j + 1][0] != '-' && !(av[j + 1][0] >= '0' && av[j + 1][0] <= '9')) ||
	    (j + 2 < ac && (av[j + 2][0] != 'R' && av[j + 2][0] != 'T'
			    && av[j + 2][0] != 'H' && av[j + 2][0] != 'S')))
	  return (ERROR);
      if ((av[j][0] >= '0' && av[j][0] <= '9') || av[j][0] == '-')
	if (check_nb(av[j]) == ERROR)
	  return (ERROR);
      j++;
    }
  return (0);
}

int		check_content(int ac, char **av)
{
  int		i;
  int		j;

  j = 1;
  while (j < ac)
    {
      i = 0;
      while (av[j][i])
	{
	  if (av[j][i] != '-' && av[j][i] != 'T' && av[j][i] != 'H'
	      && av[j][i] != 'R' && av[j][i] != 'S' &&
	      !(av[j][i] >= '0' && av[j][i] <= '9'))
	    return (ERROR);
	  i++;
	}
      j++;
    }
  return (0);
}

int		check_validity(int ac, char **av)
{
  if (check_nb(av[1]) == ERROR || check_nb(av[2]) == ERROR)
    return (ERROR);
  if (check_content(ac, av) == ERROR)
    return (ERROR);
  if (check_long(ac, av) == ERROR)
    return (ERROR);
  return (0);
}
