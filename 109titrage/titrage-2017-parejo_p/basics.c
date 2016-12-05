/*
** basics.c for 109titrage in /home/baron_l//local/rendu/projets/maths/109titrage/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Apr  2 19:18:00 2013 louis-philippe baron
** Last update Tue Apr  2 19:31:04 2013 louis-philippe baron
*/

#include	"htitrage.h"

int		my_match(char *s1, char *s2)
{
  int		i;

  i = 0;
  while (s1[i])
    {
      if (s1[i] != s2[i])
	return (ERROR);
      i++;
    }
  return (0);
}
