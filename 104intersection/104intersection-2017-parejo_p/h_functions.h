/*
** h_fonctions.h for h_functions in /home/parejo_p/Mini-kit
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Mon Dec 10 15:29:42 2012 pelayo parejopagador
** Last update Sun Jan  6 22:28:45 2013 louis-philippe baron
*/

#ifndef H_FUNCTIONS_H_
# define H_FUNCTIONS_H_

# define SUCCESS	(0)
# define FAILURE	(-1)

int		my_strlen(char *);
void		my_putstr(char *);
void		my_putchar(char);
int		my_getnbr(char *);
void		my_put_nbr(int);

typedef struct	s_struct
{
  float		a;
  float		b;
  float		c;
}		t_struct;

int		intersection(int, char **);
int		sphere(char **);
int		delta_calc(float, t_struct *, t_struct *, t_struct *);
t_struct	*init_point(char **);
t_struct	*init_vector(char **);

#endif /* !H_FUNCTIONS_H_ */
