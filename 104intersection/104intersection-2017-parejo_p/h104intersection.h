/*
** h104intersection.h for 104intersection in /home/baron_l//local/rendu/projets/maths/104intersection/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Jan  6 18:00:11 2013 louis-philippe baron
** Last update Sun Jan  6 22:27:25 2013 louis-philippe baron
*/

#ifndef	INTERSECTION_H_
# define INTERSECTION_H_

#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>
#include	<math.h>
#include	<features.h>

#define	ERROR	(1)

#define	USAGE	("\nUsage : ./104intersection [option] [xA yA zA] [xU yU zU] arg\n\n")
#define	VECTOR	("[xU yU zU] are the 3 coordinates of the direction vector of the line\n")
#define	POINT	("[xA yA zA] are the 3 coordinates of the point, defining the line with vector U(xU, yU, zU)\n")
#define	OPTION	("Option is :\n1 = for intersection between a line and a sphere / arg is the radius of the sphere\n2 = for intersection between a line and a cylinder / arg is the radius of the cylinder\n3 = for intersection between a line and a cone / arg is the angle between the cone and the (Oxy) plan\n")

int		check_validity(int, char **);
int		intersection(int, char **);
int		cylinder(char **);
int		sphere(char **);

#endif
