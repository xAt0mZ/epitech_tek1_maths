/*
** my_double_link_list.c for bistromathique in /home/parejo_p//library/Jour_11
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Tue Oct 23 17:11:38 2012 pelayo parejopagador
** Last update Mon Dec 10 16:01:09 2012 pelayo parejopagador
*/

#include <unistd.h>
#include "h_list.h"

int		params_in_list(t_list **begin, char *str)
{
  t_list	*tmp;
  t_list	*elem;
  struct stat	*buff;

  tmp = *begin;
  if ((elem = malloc(sizeof(t_list))) == NULL)
    return (0);
  elem->name = str;
  elem->next = NULL;
  if (*begin == NULL)
    *begin = elem;
  else
    {
      while (tmp->next != NULL)
	tmp = tmp->next;
      tmp->next = elem;
    }
  return (SUCCESS);
}

void		my_show_list(t_list *begin)
{
  t_list	*tmp;
  t_list	*next;

  tmp = begin;
  while (tmp != NULL)
    {
      next = tmp->next;
      my_putstr(tmp->name);
      my_putchar('\n');
      free(tmp->name);
      free(tmp);
      tmp = next;
    }
}

void		my_rev_list(t_list **begin)
{
  t_list	*link;
  t_list	*current;
  t_list	*tmp;

  tmp = *begin;
  while (tmp != NULL)
    {
      link = tmp->next;
      if (tmp == *begin)
	tmp->next = NULL;
      else
	tmp->next = current;
      current = tmp;
      tmp = link;
      if (tmp == NULL)
	*begin = current;
    }
}
