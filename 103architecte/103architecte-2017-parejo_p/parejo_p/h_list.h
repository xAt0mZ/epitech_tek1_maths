/*
** h_fonctions.h for h_functions in /home/parejo_p/Mini-kit
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Mon Dec 10 15:29:42 2012 pelayo parejopagador
** Last update Mon Dec 10 16:02:22 2012 pelayo parejopagador
*/

#ifndef H_FUNCTIONS_H_
# define H_FUNCTIONS_H_
# define SUCCESS	(0);
# define FAILURE	(-1);

int	my_strlen(char *);
void	my_putstr(char *);
void	my_putchar(char);
int	my_getnbr(char *);
void	my_put_nbr(int);
int	params_in_list(t_list **, char *);
void	my_show_list(t_list *);
void	my_rev_list(t_list **);

#endif /* !H_FUNCTIONS_H_ */
