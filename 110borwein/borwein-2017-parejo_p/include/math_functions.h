/*
** math_functions.h for 110borwein in /home/parejo_p/module_math/110borwein
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Tue Apr  9 15:33:10 2013 pelayo parejopagador
** Last update Thu Apr 18 17:25:55 2013 louis-philippe baron
*/

#ifndef		MATH_FUNCTIONS_H_
# define	MATH_FUNCTIONS_H_

/*
** init
*/
int		math_init(char *);
int		math_init_2(char *, char *);
int		math_init_3(char *, char *, char *);

/*
** checks
*/
int		check(char *);
int		check_2(char *, char *);
int		check_3(char *, char *, char *);

/*
** calcs
*/
int		math_rectangular_method(int, char *, char *);
int		math_trapeze_method(int, char *, char *);
int		math_simpson_method(int, char *, char *);

#endif /* !FUNCTIONS_H_ */
