/*
** basics.c for 105tore in /home/baron_l//local/rendu/projets/maths/105tore/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jan 15 17:07:39 2013 louis-philippe baron
** Last update Tue Jan 15 17:20:48 2013 louis-philippe baron
*/

#include	"htore.h"

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
      a *= -1;
      i++;
    }
  nb = 0;
  while (str[i])
    {
      nb = nb * 10 + (str[i] - '0');
      i++;
    }
  return (a * nb);
}
