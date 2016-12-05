##
## Makefile for 102chiffrement in /home/baron_l//local/rendu/piscine/projets/102chiffrement
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Mon Nov 26 15:16:19 2012 louis-philippe baron
## Last update Mon Nov 26 19:27:04 2012 louis-philippe baron
##

SRC=		main.c \
		b_basics.c \
		b_check_message.c \
		b_check_keycode.c \
		b_check_flag.c \
		b_check_base.c

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
