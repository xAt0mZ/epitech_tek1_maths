/*
** h103.h for 103architecte in /home/baron_l//local/rendu/piscine/projets/maths/103architecte
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Dec 10 11:47:18 2012 louis-philippe baron
** Last update Fri Dec 14 14:49:43 2012 louis-philippe baron
*/

#ifndef	ARCHITECTE_H_
#define	ARCHITECTE_H_

#include	<unistd.h>
#include	<stdlib.h>
#include	<math.h>
#include	<stdio.h>

#define	ERROR		(1)
#define	PI		(3.41592654)

#define	USAGE		("\nUsage : ./103architecte \"operation\"\nWith \"operation\" replaced by :\n")
#define	TRANS_USAGE	("\n-for translation : \" xM yM T xu yu \" with (xM ; yM) the coordinates of the point to translate, and (xx ; yu) the coordinates of the vector.\n")
#define	HOMOT_USAGE	("\n-for homothety : \" xM yM H hx hy \" with (xM ; yM) the coordinates of the point to translate, and (hx, hy) the relations on xM and yM.\n")
#define	ROTAT_USAGE	("\n-for rotation : \" xM yM R '&' \" with (xM ; yM) the coordinates of the point to translate, and '&' the angle of the rotation.\n")
#define	SYMET_USAGE	("\n-for symetry : \" xM yM S '&' \" with (xM ; yM) the coordinates of the point to translate, and '&' the angle of the symmetry axis with (Ox) axis.\n\n")

typedef	struct	s_point
{
  int		x;
  int		y;
  int		z;
}		t_point;

void		my_putchar(char);
int		put_usage();
void		my_putstr(char *);
int		my_strlen(char *);
int		my_getnbr(char *);

int		check_validity(int, char **);
int		check_nb(char *);
int		check_long(int, char **);
int		check_content(int, char **);

int		nb_of_mat(int, char **);
int		**fill_matrix_by_option(int **, int, int, char **);
int		**init_matrix(int, char **);

int		fill_translation(int *, char **, int);
int		fill_homothety(int *, char **, int);
int		fill_rotation(int *, char **, int);
int		fill_symmetry(int *, char **, int);

int		free_matrix(int **, int);
int		print_matrix(int **, int);
t_point		*init_point(char *, char *);
int		architecte(int, char **);

#endif
