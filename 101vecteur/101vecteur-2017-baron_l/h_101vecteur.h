/*
** h_101vecteur.h for 101vecteur in /home/parejo_p/module_math/101vecteur
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Mon Nov 12 16:52:01 2012 pelayo parejopagador
** Last update Sun Nov 18 14:21:32 2012 louis-philippe baron
*/

#ifndef H_101VECTEUR_H_
#define	H_101VECTEUR_H_

#define	ERROR_MESSAGE	("Usage for option1 : \"./101vecteur 1 n\" with 0 <= n <= 200 000\nUsage for option2 : \"./101vecteur 2\"\n")
#define	NOT_A_DECIMAL_BASE	(str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5' && str[i] != '6' && str[i] != '7' && str[i] != '8' && str[i] != '9')

int	scalar_product(char **av);
int	my_strlen(char *str);
void	my_putchar(char a);
void	my_putstr(char *str);
int	my_getnbr(char *str);
void	my_put_nbr(int nb);
void	*xmalloc(unsigned int i);
int	*set_scalar(char *av);
void	aff_vectors(int *u, int *v, int size);
void	calc(int *u, int *v,int size);
void	calc2(int *u, int p, int size);

#endif
