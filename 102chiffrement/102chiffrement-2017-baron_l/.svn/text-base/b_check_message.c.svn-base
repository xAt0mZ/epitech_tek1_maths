/*
** check_message.c for 102chiffrement in /home/baron_l//local/rendu/piscine/projets/102chiffrement
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Nov 26 15:26:23 2012 louis-philippe baron
** Last update Mon Nov 26 18:02:05 2012 louis-philippe baron
*/

#include	"h_102chiffrement.h"

int		check_message(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (!((str[i] >= 'a' && str[i] <= 'z') || str[i] == ' '))
	return (ERROR);
      i++;
    }
  return (VALID);
}
