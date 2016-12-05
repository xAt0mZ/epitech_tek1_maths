/*
** my_double_link_list.c for bistromathique in /home/parejo_p//library/Jour_11
**
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
**
** Started on  Tue Oct 23 17:11:38 2012 pelayo parejopagador
** Last update Sun Feb 24 17:12:40 2013 pelayo parejopagador
*/

#include <stdlib.h>
#include "h_list.h"

int		params_in_list(t_list **begin, float nbr, float k)
{
  t_list	*tmp;
  t_list	*elem;

  tmp = *begin;
  if ((elem = malloc(sizeof(t_list))) == NULL)
    return (-1);
  elem->k = k;
  elem->x = nbr;
  elem->next = NULL;
  if (*begin == NULL)
    *begin = elem;
  else
    {
      while (tmp->next != NULL)
	tmp = tmp->next;
      tmp->next = elem;
    }
  return (0);
}

void		free_list(t_list *list)
{
  t_list	*tmp;
  t_list	*next;

  tmp = list;
  while (tmp != NULL)
    {
      next = tmp->next;
      free(tmp);
      tmp = next;
    }
}
