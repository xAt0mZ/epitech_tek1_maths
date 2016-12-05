##
## Makefile for Get_Next_Line in /home/parejo_p/get_next_line
## 
## Made by pelayo parejopagador
## Login   <parejo_p@epitech.net>
## 
## Started on  Mon Nov 19 17:54:41 2012 pelayo parejopagador
## Last update Mon Dec 10 18:49:00 2012 pelayo parejopagador
##

SRC=		main.c \
		translation.c \
		p_functions.c

OBJ=		$(SRC:.c=.o)

CFLAGS=		-g -Wall -ansi -pedantic -Wextra

NAME=		103architecte

all:		$(NAME)

$(NAME):	$(OBJ)
		@gcc $(OBJ) $(CFLAGS) -o $(NAME)

clean:
		@rm -f	$(OBJ)

fclean:		clean
		@rm -f	$(NAME)

re:		fclean all