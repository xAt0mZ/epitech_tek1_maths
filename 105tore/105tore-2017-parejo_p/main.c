/*
** main.c for 105tore in /home/baron_l//local/rendu/projets/maths/105tore/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jan 15 16:30:43 2013 louis-philippe baron
** Last update Tue Jan 15 18:56:13 2013 louis-philippe baron
*/

#include	"htore.h"

int		main(int ac, char **av)
{
  if (ac == 8)
    {
      if (tore(ac, av) == ERROR)
	return (ERROR);
    }
  else
    {
      my_putstr("\nUsage : [option] [a0 a1 a2 a3 a4] [precision]\n\n");
      my_putstr("With [option] :\n- [1] for the bisection method\n");
      my_putstr("- [2] for the Newton method\n- [3] for the secant method\n\n");
      my_putstr("[a0 a1 a2 a3 a4] the coefficients of the equation of degree 4\n");
      my_putstr("[a4] the coefficient for x^4, [a3] for x^3, ...\n\n");
      my_putstr("[precision] the number of correct decimals you want to have\n\n");
    }
  return (0);
}
