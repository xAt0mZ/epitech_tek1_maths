/*
** option1.c for 109titrage in /home/baron_l//local/rendu/projets/maths/109titrage/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Apr  2 14:28:31 2013 louis-philippe baron
** Last update Sat Apr  6 13:16:26 2013 louis-philippe baron
*/

#include	"htitrage.h"

int		show(t_all *all)
{
  int		k;

  k = 0;
  while (k < all->size)
    {
      printf("xtab[%d] = %f     ytab[%d] = %f\n", k, all->xtab[k], k, all->ytab[k]);
      k++;
    }
  return (0);
}

int		option1(t_all *all)
{
  char		**file;

  if ((file = get_file()) == NULL)
    {
      printf("Error while file parsing\n");
      return (ERROR);
    }
  if (check_validity(file, all) == ERROR)
    return (ERROR);
  show(all);
  free(all->xtab);
  free(all->ytab);
  free_tab(file);
  return (0);
}
