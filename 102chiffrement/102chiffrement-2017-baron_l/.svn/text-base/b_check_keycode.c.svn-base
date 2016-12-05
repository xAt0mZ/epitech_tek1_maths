/*
** b_check_keycode.c for 102chiffrement in /home/baron_l//local/rendu/piscine/projets/102chiffrement
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Nov 26 17:52:50 2012 louis-philippe baron
** Last update Mon Nov 26 18:04:27 2012 louis-philippe baron
*/

#include	"h_102chiffrement.h"

int		check_keycode(char *k1, char *k2)
{
  int		i;

  i = 0;
  while (k1[i])
    {
      if (!((k1[i] >= '0' && k1[i] <= '9') || k1[i] == '-'))
	return (ERROR);
      i++;
    }
  i = 0;
  while (k2[i])
    {
      if (!((k2[i] >= '0' && k2[i] <= '9') || k2[i] == '-'))
	return (ERROR);
      i++;
    }
  return (VALID);
}
