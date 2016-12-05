##
## Makefile for Get_Next_Line in /home/parejo_p/get_next_line
## 
## Made by pelayo parejopagador
## Login   <parejo_p@epitech.net>
## 
## Started on  Mon Nov 19 17:54:41 2012 pelayo parejopagador
## Last update Sun Jan  6 22:25:31 2013 louis-philippe baron
##

SRC=		main.c \
		p_functions.c \
		intersection.c \
		check_validity.c \
		sphere.c \
		cylinder.c

OBJ=		$(SRC:.c=.o)

CFLAGS=		-g -Wall -ansi -pedantic -Wextra -lm -D_BSD_SOURCE

NAME=		104intersection

all:		$(NAME)

$(NAME):	$(OBJ)
		cc $(OBJ) $(CFLAGS) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all