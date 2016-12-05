/*
** get_file.c for 109titrage in /home/baron_l//local/rendu/projets/maths/109titrage/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Apr  2 15:22:02 2013 louis-philippe baron
** Last update Sat Apr  6 13:27:01 2013 louis-philippe baron
*/

#include	"htitrage.h"

static char	**my_realloc(char **file, char *str)
{
  int		k;
  char		**res;

  k = 0;
  while (file[k])
    k++;
  if ((res = malloc((k + 2) * sizeof(char *))) == NULL)
    return (NULL);
  k = 0;
  while (file[k])
    {
      res[k] = file[k];
      k++;
    }
  res[k] = str;
  res[k + 1] = NULL;
  free(file);
  return (res);
}

char		**get_file()
{
  char		**res;
  char		*tmp;

  if ((res = malloc(sizeof(char *))) == NULL)
    return (NULL);
  res[0] = NULL;
  while ((tmp = get_next_line(0)))
    {
      if ((res = my_realloc(res, tmp)) == NULL)
	return (NULL);
    }
  return (res);
}
