##
## Makefile for 106bombyx in /home/baron_l//local/rendu/projets/maths/106bombyx/rendu
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Mon Feb 18 10:47:10 2013 louis-philippe baron
## Last update Sat Feb 23 11:44:39 2013 louis-philippe baron
##

SRC=		main.c \
		basics.c \
		check_validity.c \
		mlx_init.c

OBJ=		$(SRC:.c=.o)

NAME=		106bombyx

CFLAGS=		-g -Wall -Wextra -ansi -pedantic

LFLAGS=		-L/usr/lib64 -lmlx_$$HOSTTYPE -L/usr/lib64/X11 -lXext -lX11

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ) $(LFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
