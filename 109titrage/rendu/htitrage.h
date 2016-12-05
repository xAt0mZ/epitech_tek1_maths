/*
** htitrage.h for 109titrage in /home/baron_l//local/rendu/projets/maths/109titrage/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Apr  2 13:56:57 2013 louis-philippe baron
** Last update Sat Apr  6 13:27:53 2013 louis-philippe baron
*/

#ifndef	TITRAGE_H_
# define	TITRAGE_H_

#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>
#include	"hget_next_line.h"

#define	ERROR	(-1)

typedef struct	s_minmax
{
  float		xmin;
  float		xmax;
  float		ymin;
  float		ymax;
}		t_minmax;

typedef struct	s_all
{
  t_minmax	*mmx;
  float		*xtab;
  float		*ytab;
  int		size;
}		t_all;

/*
** basics
*/
int		my_match(char *, char *);

/*
** skull
*/
int		option1(t_all *);
int		option2(char *, t_all *);
int		free_tab(char **);

/*
** gets
*/
char		**get_file();
int		get_min_max(float, float, t_minmax *);

/*
** checks
*/
int		check_arg(char *);
int		check_validity(char **, t_all *);
int		check_content(char **);
int		check_coma(char **);
int		check_file(char **, t_all *);

#endif	/* TITRAGE_H_ */
