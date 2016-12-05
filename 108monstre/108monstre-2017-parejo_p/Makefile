##
## Makefile for 108monstre in /home/baron_l//local/rendu/projets/maths/108monstre/rendu
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Wed Mar 20 16:47:38 2013 louis-philippe baron
## Last update Sun Mar 24 22:21:48 2013 pelayo parejopagador
##

SRC=		main.c \
		basics.c \
		check_validity.c \
		mlx_init.c \
		pixel_put_to_image.c \
		graph.c

OBJ=		$(SRC:.c=.o)

NAME=		108monstre

CFLAGS=		-g -Wall -Wextra -ansi -pedantic -lm -std=c99

LFLAGS=		-L/usr/lib64 -lmlx_$$HOSTTYPE -L/usr/lib64/X11 -lXext -lX11 -lm

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ) $(LFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
