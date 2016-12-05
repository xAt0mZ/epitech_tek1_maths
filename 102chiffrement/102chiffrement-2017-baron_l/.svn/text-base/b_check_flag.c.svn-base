/*
** b_check_flag.c for 102chiffrement in /home/baron_l//local/rendu/piscine/projets/102chiffrement
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Nov 26 17:57:41 2012 louis-philippe baron
** Last update Mon Nov 26 18:01:35 2012 louis-philippe baron
*/

#include	"h_102chiffrement.h"

int		check_flag(char *str)
{
  int		i;

  i = 0;
  if (my_strlen(str) != 1)
    return (ERROR);
  while (str[i])
    {
      if (!(str[i] == '0' || str[i] == '1'))
	return (ERROR);
      i++;
    }
  return (VALID);
}
