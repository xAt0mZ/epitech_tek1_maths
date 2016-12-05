##
## Makefile for 109titrage in /home/baron_l//local/rendu/projets/maths/109titrage/rendu
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Tue Apr  2 13:57:35 2013 louis-philippe baron
## Last update Sat Apr  6 13:27:13 2013 louis-philippe baron
##

SRC=		main.c \
		basics.c \
		option1.c \
		option2.c \
		check_validity.c \
		check_file.c \
		check_content.c \
		check_coma.c \
		get_min_max.c \
		get_next_line.c \
		get_file.c \
		free_tab.c

OBJ=		$(SRC:.c=.o)

NAME=		109titrage

CFLAGS=		-g -Wall -Wextra -ansi -pedantic

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
