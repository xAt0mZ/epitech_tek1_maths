/*
** fill_matrix.c for 103architecte in /home/baron_l//local/rendu/piscine/projets/maths/103architecte/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Dec 13 16:57:51 2012 louis-philippe baron
** Last update Sun Dec 16 22:23:27 2012 louis-philippe baron
*/

#include	"h103.h"

int		fill_translation(int *matrix, char *nb1, char *nb2)
{
  int		nb;

  nb = my_getnbr(nb1);
  matrix[0] = 1;
  matrix[2] = nb;
  matrix[4] = 1;
  nb = my_getnbr(nb2);
  matrix[5] = nb;
  matrix[8] = 1;
  return (0);
}

int		fill_homothety(int *matrix, char *nb1, char *nb2)
{
  int		nb;

  nb = my_getnbr(nb1);
  matrix[0] = nb;
  nb = my_getnbr(nb2);
  matrix[4] = nb;
  matrix[8] = 1;
  return (0);
}

int		fill_rotation(int *matrix, char *nb1)
{
  int		nb;

  nb = my_getnbr(nb1);
  matrix[0] = cos(nb * PI / 180) * 1000;
  matrix[1] = sin(nb * PI / 180) * -1000;
  matrix[3] = sin(nb * PI / 180) * 1000;
  matrix[4] = cos(nb * PI / 180) * 1000;
  matrix[8] = 1;
  return (0);
}

int		*fill_symmetry(char *nb1)
{
  int		**pre_matrix;
  char		*minus_nb1;
  int		*test;
  int		j;

  j = 0;
  pre_matrix = malloc_matrix(3);
  if ((minus_nb1 = malloc(sizeof(char) * (my_strlen(nb1) + 2))) == NULL)
    {
      free_matrix(pre_matrix, 3);
      printf("Could not alloc.");
      return (NULL);
    }
  minus_nb1[0] = '-';
  while (j++ <= my_strlen(nb1))
    minus_nb1[j] = nb1[j - 1];
  fill_rotation(pre_matrix[0], nb1);
  fill_homothety(pre_matrix[1], "1", "-1");
  fill_rotation(pre_matrix[2], minus_nb1);
  calc_manager(pre_matrix, 2);
  test = pre_matrix[0];
  free(pre_matrix[1]);
  free(pre_matrix[2]);
  free(pre_matrix);
  free(minus_nb1);
  return (test);
}

int		**malloc_matrix(int nb)
{
  int		**matrix;
  int		i;
  int		j;

  if ((matrix = malloc((nb) * sizeof(int *))) == NULL)
    return (NULL);
  j = 0;
  while (j < nb)
    {
      i = 0;
      if ((matrix[j] = malloc(9 * sizeof(int))) == NULL)
	return (NULL);
      while (i < 9)
	{
	  matrix[j][i] = 0;
	  i++;
	}
      j++;
    }
  return (matrix);
}
