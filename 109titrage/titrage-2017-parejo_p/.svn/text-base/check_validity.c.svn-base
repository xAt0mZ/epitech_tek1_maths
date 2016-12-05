/*
** check_validity.c for 109titrage in /home/baron_l//local/rendu/projets/maths/109titrage/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Apr  2 14:33:45 2013 louis-philippe baron
** Last update Sat Apr  6 13:09:14 2013 louis-philippe baron
*/

#include	"htitrage.h"

int		check_arg(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9'))
	return (0);
      i++;
    }
  i = atoi(str);
  if (!(i >= 10 && i <= 80))
    return (ERROR);
  return (0);
}

int		check_validity(char **file, t_all *all)
{
  if (check_content(file) == ERROR
      || check_coma(file) == ERROR
      || check_file(file, all) == ERROR)
    return (ERROR);
  return (0);
}
