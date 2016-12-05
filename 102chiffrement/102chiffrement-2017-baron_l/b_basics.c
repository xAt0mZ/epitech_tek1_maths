/*
** basics.c for 102chiffrement in /home/baron_l//local/rendu/piscine/projets/102chiffrement
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Nov 26 15:43:01 2012 louis-philippe baron
** Last update Mon Nov 26 19:22:17 2012 louis-philippe baron
*/

#include	<unistd.h>

void		my_putchar(char c)
{
  write(1, &c , 1);
}

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    my_putchar(str[i++]);
}

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int	my_getnbr(char *str)
{
  int	i;
  long	a;
  int	sign;

  i = 0;
  a = 0;
  sign = 1;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	sign = sign * (-1);
      i++;
    }
  while (str[i] >= '0' && str[i] <= '9')
    {
      a = a * 10 + (str[i] - '0');
      if (a * sign > 2147483647 || a * sign < -2147483648)
	return (0);
      i++;
    }
  return (a * sign);
}
