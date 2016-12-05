##
## Makefile for 102chiffrement in /home/baron_l//local/rendu/piscine/projets/102chiffrement
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Mon Nov 26 15:16:19 2012 louis-philippe baron
## Last update Mon Nov 26 19:22:45 2012 louis-philippe baron
##

SRC=		main.c \
		basics.c \
		check_message.c \
		check_keycode.c \
		check_flag.c \
		check_base.c

OBJ=		$(SRC:.c=.o)

CFLAGS=		-g -Wall -ansi -pedantic

NAME=		102chiffrement

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
