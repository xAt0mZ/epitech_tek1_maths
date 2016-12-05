/*
** main.c for 102chiffrement in /home/baron_l//local/rendu/piscine/projets/102chiffrement
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Nov 26 15:16:26 2012 louis-philippe baron
** Last update Mon Nov 26 19:16:59 2012 louis-philippe baron
*/

#include	"h_102chiffrement.h"

int		main(int ac, char **av)
{
  if (ac == 8)
    {
      if (check_message(av[1]) == ERROR ||
	  check_keycode(av[2], av[3]) == ERROR ||
	  check_keycode(av[4], av[5]) == ERROR ||
	  check_flag(av[7]) == ERROR)
	my_putstr(USAGE);
      if ((my_getnbr(av[7]) == 0 && check_base_0(av[6]) == ERROR) ||
	  (my_getnbr(av[7]) == 1 && check_base_1(av[1], av[6]) == ERROR))
	my_putstr(BASE_ERROR_0);
      if (my_getnbr(av[7]) == 1 && check_base_1(av[1], av[6]) == ERR_MESS)
	my_putstr(BASE_ERROR_1);
    }
  else
    my_putstr(USAGE);
  return (0);
}
