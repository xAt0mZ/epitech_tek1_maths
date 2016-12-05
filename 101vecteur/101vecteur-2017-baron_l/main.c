/*
** main.c for 101vecteur in /home/parejo_p/module_math/101vecteur
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Mon Nov 12 13:14:24 2012 pelayo parejopagador
** Last update Sun Nov 18 14:19:04 2012 louis-philippe baron
*/

#include "h_101vecteur.h"
#include "option2.h"

int		is_a_number(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      if (NOT_A_DECIMAL_BASE)
	return (0);
      i++;
    }
  return (1);
}

int		main(int ac, char **av)
{
  if (ac == 3 && av[1][0] == '1' && my_strlen(av[2]) <= 6 &&
      is_a_number(av[2]) == 1 && my_getnbr(av[2]) > 0 && my_getnbr(av[2]) <= 200000)
    scalar_product(av);
  else if (ac == 3 && av[1][0] == '1' && my_strlen(av[2]) <= 6 &&
      is_a_number(av[2]) == 1 && my_getnbr(av[2]) == 0)
    my_putstr("Cet espace ne contient un unique vecteur : le vecteur nul\n"); 
  else if (ac == 2 && av[1][0] == '2')
    option2();
  else
    my_putstr(ERROR_MESSAGE);
  return (0);
}
