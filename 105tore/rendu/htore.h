/*
** htore.h for 105tore in /home/baron_l//local/rendu/projets/maths/105tore/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Jan 15 16:31:39 2013 louis-philippe baron
** Last update Tue Jan 15 20:16:07 2013 louis-philippe baron
*/

#ifndef	TORE_H_
#define	TORE_H_

#include	<unistd.h>

#define	ERROR	(1)

typedef struct	s_coef
{
  float		a;
  float		b;
  float		c;
  float		d;
  float		e;
}		t_coef;

void		my_putstr(char *);
int		check_validity(int, char **);
int		my_getnbr(char *);
int		bisection(int, char **);
int		newton(int, char **);
int		secant(int, char **);

#endif
