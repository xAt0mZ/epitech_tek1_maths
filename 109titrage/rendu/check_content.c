/*
** check_content.c for 109titrage in /home/baron_l//local/rendu/projets/maths/109titrage/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Apr  5 13:36:08 2013 louis-philippe baron
** Last update Fri Apr  5 13:49:08 2013 louis-philippe baron
*/

#include	"htitrage.h"

static int	check_line(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9')
	  && str[i] != ';' && str[i] != '.')
	return (ERROR);
      i++;
    }
  return (0);
}

int		check_content(char **file)
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
	  printf("Invalid file : error line %d : invalid character\n", k + 1);
	  free_tab(file);
	  return (ERROR);
	}
      k++;
    }
  if (my_match(file[k - 1], "FIN") == ERROR)
    {
      printf("Invalid file : file doesn't end with FIN\n");
      free_tab(file);
      return (ERROR);
    }
  return (0);
}
