/*
** basics.c for 106bombyx in /home/baron_l//local/rendu/projets/maths/106bombyx/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Feb 18 10:47:52 2013 louis-philippe baron
** Last update Fri Feb 22 17:48:00 2013 louis-philippe baron
*/

#include	"hbombyx.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

int		my_getnbr(char *str)
{
  int		i;
  int		nb;
  int		a;

  a = 1;
  i = 0;
  if (str[i] == '-')
    {
      a = a * -1;
      i++;
    }
  nb = 0;
  while (str[i])
    {
      nb = nb * 10 + str[i] - '0';
      i++;
    }
  return (nb * a);
}
