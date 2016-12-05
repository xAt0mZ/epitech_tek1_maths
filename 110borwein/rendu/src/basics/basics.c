/*
** functions.c for functions in /home/parejo_p//library
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Wed Oct 17 15:49:31 2012 pelayo parejopagador
** Last update Sun Mar 17 23:26:32 2013 pelayo parejopagador
*/

#include	<unistd.h>
#include	"main_functions.h"

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

int	my_return(char *str, int ret)
{
  my_putstr(str);
  return (ret);
}
