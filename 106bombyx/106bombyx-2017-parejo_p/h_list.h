/*
** h_list.h for h_list in /home/parejo_p/Mini-kit
**
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
**
** Started on  Mon Dec 10 15:29:42 2012 pelayo parejopagador
** Last update Sun Feb 24 17:13:13 2013 pelayo parejopagador
*/

#ifndef H_LIST_H_
# define H_LIST_H_

typedef	struct	s_list
{
  float		k;
  float		x;
  struct s_list	*next;
  struct s_list	*before;
}		t_list;

int	params_in_list(t_list **, float, float);
void	my_show_list(t_list *);
void	my_rev_list(t_list **);
void	free_list(t_list *);

#endif /* !H_LIST_H_ */
