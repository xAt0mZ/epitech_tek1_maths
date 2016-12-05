/*
** basics.c for 103architecte in /home/baron_l//local/rendu/piscine/projets/maths/103architecte
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Dec 10 12:26:21 2012 louis-philippe baron
** Last update Sat Dec 15 12:18:03 2012 pelayo parejopagador
*/

#include	"h103.h"

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

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int		put_usage()
{
  my_putstr(USAGE);
  my_putstr(TRANS_USAGE);
  my_putstr(HOMOT_USAGE);
  my_putstr(ROTAT_USAGE);
  my_putstr(SYMET_USAGE);
  return (0);
}

int		my_getnbr(char *str)
{
  int		i;
  int		nb;
  int		sign;

  i = 0;
  nb = 0;
  sign = 1;
  if (str[0] == '-')
    {
      sign = sign * -1;
      i++;
    }
  while (str[i])
    {
      nb = nb * 10 + (str[i] - '0');
      i++;
    }
  return (sign * nb);
}
