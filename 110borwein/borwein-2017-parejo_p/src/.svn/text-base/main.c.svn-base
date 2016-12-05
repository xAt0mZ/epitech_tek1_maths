/*
** main.c for rtv1 in /home/parejo_p/igraph/rtv1
**
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
**
** Started on  Tue Feb  5 09:15:41 2013 pelayo parejopagador
** Last update Thu Apr 18 17:45:50 2013 louis-philippe baron
*/

#include	<stdio.h>
#include	"main_functions.h"
#include	"math_functions.h"

static int	put_usage()
{
  printf("\nUsage : ./110borwein [n] [Max] [Precision]\n");
  printf("\nWith :\n -[n] the maximum value of the product in the integral\n");
  printf(" -[Max] the maximum limit of the integral (strictly greater than 0)\n");
  printf("     [Max] is written : M + nb (M5000 for example)\n");
  printf("     [Max] is set as 5000 by default\n");
  printf(" -[Precision] the number of subdivisions for the calcul of the integral (strictly greater than 0)\n");
  printf("     [Precision] is written : P + nb (P10000 for example)\n");
  printf("     [Precision] is set as 10000 by default\n\n");
  return (0);
}

int		main(int ac, char **av)
{
  if (ac == 2)
    {
      if (math_init(av[1]) == ERROR)
	return (ERROR);
    }
  else if (ac == 3)
    {
      if (math_init_2(av[1], av[2]) == ERROR)
	return (ERROR);
    }
  else if (ac == 4)
    {
      if (math_init_3(av[1], av[2], av[3]) == ERROR)
	return (ERROR);
    }
  else
    put_usage();
  return (SUCCESS);
}
