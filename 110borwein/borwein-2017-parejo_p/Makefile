##
## Makefile for Get_Next_Line in /home/parejo_p/get_next_line
##
## Made by pelayo parejopagador
## Login   <parejo_p@epitech.net>
##
## Started on  Mon Nov 19 17:54:41 2012 pelayo parejopagador
## Last update Thu Apr 18 17:26:01 2013 louis-philippe baron
##

CC	=	gcc

SRC	=	src/main.c				\
		src/checks.c				\
		src/basics/basics.c			\
		src/math/math_init.c			\
		src/math/math_regtangular_method.c	\
		src/math/math_trapeze_method.c		\
		src/math/math_simpson_method.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -ansi -pedantic -g
CFLAGS	+=	-lm -D_BSD_SOURCE
CFLAGS	+=	-I./include

NAME	=	110borwein

all:		$(NAME)

$(NAME):	$(OBJ)
		@$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
		@rm -f	$(OBJ)

fclean:		clean
		@rm -f	$(NAME)

re:		fclean all
