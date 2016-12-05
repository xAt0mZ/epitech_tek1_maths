/*
** get_min_max.c for 109titrage in /home/baron_l//local/rendu/projets/maths/109titrage/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Apr  5 15:22:57 2013 louis-philippe baron
** Last update Fri Apr  5 15:26:56 2013 louis-philippe baron
*/

#include	"htitrage.h"

int		get_min_max(float vol, float ph, t_minmax *mmx)
{
  if (mmx->xmin == -1)
    {
      mmx->xmin = vol;
      mmx->xmax = vol;
      mmx->ymin = ph;
      mmx->ymax = ph;
    }
  else
    {
      if (vol < mmx->xmin)
	mmx->xmin = vol;
      if (vol > mmx->xmax)
	mmx->xmax = vol;
      if (ph < mmx->ymin)
	mmx->ymin = ph;
      if (ph > mmx->ymax)
	mmx->ymax = ph;
    }
  return (0);
}
