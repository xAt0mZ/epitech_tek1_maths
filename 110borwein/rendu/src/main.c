/*
** main.c for rtv1 in /home/parejo_p/igraph/rtv1
**
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
**
** Started on  Tue Feb  5 09:15:41 2013 pelayo parejopagador
** Last update Tue Apr  9 15:36:28 2013 pelayo parejopagador
*/

#include	"main_functions.h"
#include	"math_functions.h"

int	main(int ac, char **av)
{
  if (ac == 2)
    math_init(av[1]);
  return (SUCCESS);
}
