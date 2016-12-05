/*
** free_tab.c for 109titrage in /home/baron_l//local/rendu/projets/maths/109titrage/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Apr  2 18:07:43 2013 louis-philippe baron
** Last update Tue Apr  2 18:07:45 2013 louis-philippe baron
*/

#include	"htitrage.h"

int		free_tab(char **tab)
{
  int		k;

  k = 0;
  while (tab[k])
    {
      free(tab[k]);
      k++;
    }
  free(tab);
  return (0);
}
