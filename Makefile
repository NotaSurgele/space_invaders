##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make
##

SRC	=	main.c\
		$(wildcard src/*.c)\
		$(wildcard src/window_management/*.c)\
		$(wildcard src/sprite_engine/*.clean)

SRC_UT	=	tests/test_expr.c

OBJ	=	$(SRC:.c=.o)

OBJ_M	=	$(SRC_M:.c=.o)

OBJ_UT	=	$(SRC_UT:.c=.o)

INCLUDE	=	-I./include

NAME	=	duck_hunt

NAME_UT	=	space_invaders

CFLAGS	=	-W -Werror -Wall -Wextra -I./include

CFLAGS_UT	=	-lcriterion --coverage

RM	=	rm -rf

all:		$(NAME)

$(NAME):    $(OBJ)
		gcc -o $(NAME) $(OBJ) $(INCLUDE) -l csfml-graphics -l csfml-window -l csfml-system -l csfml-audio

test_run:	$(OBJ) $(OBJ_UT)
			gcc -o $(NAME_UT) $(OBJ) $(OBJ_UT) $(INCLUDE) $(CFLAGS_UT) -l csfml-graphics -l csfml-window

clean:
		$(RM) $(OBJ)
		$(RM) lib/my/libmy.a
		$(RM) lib/my/*.o

fclean:		clean
		$(RM) $(NAME)
		$(RM) src/win/*.o

fclean_ut:	clean
		$(RM) $(NAME_UT)
		$(RM) $(NAME)

re:		fclean all
