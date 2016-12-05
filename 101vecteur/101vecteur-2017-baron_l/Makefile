##
## Makefile for Makefile in /home/parejo_p//eval_expr
## 
## Made by pelayo parejopagador
## Login   <parejo_p@epitech.net>
## 
## Started on  Fri Oct 26 11:02:19 2012 pelayo parejopagador
## Last update Fri Nov 23 12:11:28 2012 louis-philippe baron
##

SRC=		main.c \
		p_scalar_product.c \
		p_functions.c \
		xmalloc.c \
		p_calc.c \
		b_option2.c \

OBJ=		$(SRC:.c=.o)

CFLAGS=		-g -Wall -ansi -pedantic

NAME=		101vecteur

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME)

clean:
		@rm -f	$(OBJ)

fclean:		clean
		@rm -f	$(NAME)

re:		fclean all