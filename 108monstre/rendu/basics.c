/*
** basics.c for 108monstre in /home/baron_l//local/rendu/projets/maths/108monstre/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Mar 20 16:47:25 2013 louis-philippe baron
** Last update Wed Mar 20 18:37:02 2013 louis-philippe baron
*/

#include	"hmonstre.h"

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
