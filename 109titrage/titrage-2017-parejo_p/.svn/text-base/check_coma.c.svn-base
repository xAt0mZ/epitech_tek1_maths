/*
** check_coma.c for 109titrage in /home/baron_l//local/rendu/projets/maths/109titrage/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Apr  5 13:36:51 2013 louis-philippe baron
** Last update Fri Apr  5 13:47:57 2013 louis-philippe baron
*/

#include	"htitrage.h"

static int	check_line(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (str[i] == ';')
	return (0);
      i++;
    }
  return (ERROR);
}

int		check_coma(char **file)
{
  int		k;
  int		max;

  max = 0;
  while (file[max])
    max++;
  k = 0;
  while (file[k])
    {
      if (k != max - 1 && check_line(file[k]) == ERROR)
	{
	  printf("Invalid file : error line %d : missing ';'\n", k + 1);
	  free_tab(file);
	  return (ERROR);
	}
      k++;
    }
  return (0);
}
