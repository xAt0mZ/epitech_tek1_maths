/*
** check_file.c for 109titrage in /home/baron_l//local/rendu/projets/maths/109titrage/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Apr  4 15:37:20 2013 louis-philippe baron
** Last update Sat Apr  6 13:20:22 2013 louis-philippe baron
*/

#include	"htitrage.h"

static char	*get_first(char *str)
{
  char		*res;
  int		i;

  i = 0;
  while (str[i] != ';')
    i++;
  if ((res = malloc((i + 1) * sizeof(char))) == NULL)
    return (NULL);
  i = 0;
  while (str[i] != ';')
    {
      res[i] = str[i];
      i++;
    }
  res[i] = '\0';
  return (res);
}

static char	*get_second(char *str)
{
  char		*res;
  int		i;
  int		j;

  i = 0;
  while (str[i] != ';')
    i++;
  i++;
  j = i;
  while (str[i])
    i++;
  if ((res = malloc((i - j + 1) * sizeof(char))) == NULL)
    {
      printf("Malloc failed\n");
      return (NULL);
    }
  i = 0;
  while (str[j])
    res[i++] = str[j++];
  res[i] = '\0';
  return (res);
}

static int	check_this(char *str, char **tmp, t_all *all, int k)
{
  float		vol;
  float		ph;

  if ((tmp[0] = get_first(str)) == NULL
      || (tmp[1] = get_second(str)) == NULL)
    {
      printf("Malloc failed\n");
      return (ERROR);
    }
  vol = atof(tmp[0]);
  ph = atof(tmp[1]);
  if (ph > 14)
    {
      printf("Invalid value line %d : ph is higger than 14\n", k);
      return (ERROR);
    }
  all->xtab[k] = vol;
  all->ytab[k] = ph;
  get_min_max(vol, ph, all->mmx);
  free(tmp[0]);
  free(tmp[1]);
  return (0);
}

int		check_file(char **file, t_all *all)
{
  int		k;
  char		**tmp;

  all->size = 0;
  while (file[all->size])
    all->size++;
  all->size--;
  if ((tmp = malloc(2 * sizeof(char *))) == NULL
      || (all->xtab = malloc(all->size * sizeof(float))) == NULL
      || (all->ytab = malloc(all->size * sizeof(float))) == NULL)
    {
      printf("Malloc failed\n");
      return (ERROR);
    }
  k = 0;
  while (file[k])
    {
      if (file[k + 1] && check_this(file[k], tmp, all, k) == ERROR)
	return (ERROR);
      k++;
    }
  free(tmp);
  return (0);
}
