/*
** option2.c for 109titrage in /home/baron_l//local/rendu/projets/maths/109titrage/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Apr  2 14:29:18 2013 louis-philippe baron
** Last update Sat Apr  6 13:14:36 2013 louis-philippe baron
*/

#include	"htitrage.h"

int		option2(char *str, t_all *all)
{
  int		angle;
  char		**file;

  if (check_arg(str) == ERROR)
    {
      printf("Enter a number [n] in [10 ; 80]\n");
      return (ERROR);
    }
  angle = atoi(str);
  if ((file = get_file()) == NULL)
    {
      printf("Error while file parsing\n");
      return (ERROR);
    }
  if (check_validity(file, all) == ERROR)
    return (ERROR);
  free(all->xtab);
  free(all->ytab);
  free_tab(file);
  return (0);
}
