/*
** tore.c for 105tore in /home/baron_l//local/rendu/projets/maths/105tore/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jan 15 18:55:41 2013 louis-philippe baron
** Last update Tue Jan 15 20:47:36 2013 louis-philippe baron
*/

#include	"htore.h"

int		f(float x, t_coef *coef)
{
  float		y;

  y = coef->a * (x * x * x * x) + coef->b * (x * x * x) + coef->c * (x * x) + coef->d * x + coef->e;
  return (y);
}

static	void	init_coef(char **av, t_coef *coef)
{
  coef->a = (float)(my_getnbr(av[6]));
  coef->b = (float)(my_getnbr(av[5]));
  coef->c = (float)(my_getnbr(av[4]));
  coef->d = (float)(my_getnbr(av[3]));
  coef->e = (float)(my_getnbr(av[2]));
  printf("a=%f b=%f c=%f d=%f e=%f\n", coef->a, coef->b, coef->c, coef->d, coef->e);
}

int		tore(int ac, char **av)
{
  int		nb;
  int		(*fct[3])(int, char *);
  t_coef	coef;
  float		y1;
  float		y2;

  if (check_validity(ac, av) == ERROR)
    return (ERROR);
  init_coef(av, &coef);
  y1 = f(0, &coef);
  y2 = f(5.2, &coef);
  printf("y1 = %f // y2 = %f\n", y1, y2);
  /* printf("%s x^4 + %s x^3 + %s x^2 + %s x + %s = 0\n", av[6], av[5], av[4], av[3], av[2]); */
  /* fct[0] = &bisection; */
  /* fct[1] = &newton; */
  /* fct[2] = &secant; */
  /* nb = my_getnbr(av[1]); */
  /* if (fct[nb - 1](ac, av) == ERROR) */
  /*   return (ERROR); */
  return (0);
}
