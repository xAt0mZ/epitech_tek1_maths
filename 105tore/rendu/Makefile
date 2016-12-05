##
## Makefile for 105tore in /home/baron_l//local/rendu/projets/maths/105tore/rendu
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Tue Jan 15 17:05:21 2013 louis-philippe baron
## Last update Tue Jan 15 19:12:41 2013 louis-philippe baron
##

SRC=		main.c \
		basics.c \
		check_validity.c \
		tore.c \
		bisection.c \
		newton.c \
		secant.c

OBJ=		$(SRC:.c=.o)

NAME=		105tore

CFLAGS=		-g -Wall -Wextra -ansi -pedantic

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
