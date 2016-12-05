/*
** check_base.c for 102chiffrement in /home/baron_l//local/rendu/piscine/projets/102chiffrement
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Nov 26 18:13:35 2012 louis-philippe baron
** Last update Mon Nov 26 19:20:28 2012 louis-philippe baron
*/

#include	"h_102chiffrement.h"

int		check_base_0(char *base)
{
  int		i;
  int		k;

  k = 0;
  while (base[k])
    {
      i = k + 1;
      while (base[i])
	{
	  if (base[i] == base[k])
	    return (ERROR);
	  i++;
	}
      k++;
    }
  return (VALID);
}

int		check_base_1(char *mes, char *base)
{
  int		i;
  int		k;

  if (check_base_0(base) == ERROR)
    return (ERROR);
  k = 0;
  while (mes[k])
    {
      i = 0;
      if (mes[k] == ' ')
	k++;
      while (mes[k] != base[i] && base[i])
	i++;
      if (base[i] == '\0')
	return (ERR_MESS);
      k++;
    }
  return (VALID);
}
