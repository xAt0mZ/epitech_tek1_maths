##
## Makefile for 103architecte in /home/baron_l//local/rendu/piscine/projets/maths/103architecte
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Mon Dec 10 11:42:06 2012 louis-philippe baron
## Last update Thu Dec 13 19:26:43 2012 louis-philippe baron
##

SRC=		main.c \
		check_validity.c \
		basics.c \
		calculs.c \
		fill_matrix.c

OBJ=		$(SRC:.c=.o)

CFLAGS=		-g -lm -Wall -Wextra -ansi -pedantic

NAME=		103architecte

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
