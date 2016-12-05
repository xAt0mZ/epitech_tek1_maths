/*
** functions.c for functions in /home/parejo_p//library
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Wed Oct 17 15:49:31 2012 pelayo parejopagador
** Last update Mon Dec 10 15:33:23 2012 pelayo parejopagador
*/

#include <unistd.h>
#include "h_functions.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

void	my_putchar(char a)
{
  write (1, &a, 1);
}

int	my_getnbr(char *str)
{
  int	i;
  int	nbr;
  int	neg;

  nbr = 0;
  i = 0;
  neg = 1;
  while (str[i] != '\0')
    {
      if (str[i] == '-' || str[i] == '+')
	{
	  if (str[i] == '-')
	    neg = neg * -1;
	  i++;
	}
      else if (!(str[i] >= '0' && str[i] <= '9'))
	return ((nbr / 10) * neg);
      else
	{
	  nbr = (nbr +  str[i]  - 48) * 10;
	  i++;
	}
    }
  return ((nbr / 10) * neg);
}

void	my_put_nbr(int nb)
{
  if (nb == -2147483648)
    {
      my_putstr("-2147483648");
      return;
    }
  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  if (nb > 9)
    my_put_nbr(nb / 10);
  my_putchar((nb % 10) + 48);
}
