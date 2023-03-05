##
## EPITECH PROJECT, 2022
## Makefile project
## File description:
## compile the project and the lib
##

SRC	= 	main.c \
		src/linked_list_functions.c \
		src/str_to_int.c \
		src/print_linked_list.c \
		src/swap_functions.c \
		src/errors.c \
		src/free.c \
		src/passing_functions.c \
		src/rotate_first_last.c \
		src/rotate_last_to_first.c \
		src/push_swap.c

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

CFLAGS	=	-Wall -Wextra  #-Werror

LDFLAGS	=	-L./lib

LDLIBS	=	-lprintf

CPPFLAGS	=	-I./include/ -ggdb3

LIB	=	lib/libprintf.a

all:	$(LIB) $(NAME)

$(LIB):
	make -C lib/my/
	make clean -C lib/my/

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS)


clean:
	make clean -C lib/my/
	rm -rf $(OBJ)

fclean:	clean
	make fclean -C lib/my/
	rm -rf $(NAME)

re: fclean all

tests_run: $(CPPFLAGS) $(LDFLAGS) $(LDLIBS)
	gcc -o unit_tests cat.c ../tests/test_cat.c $(CPPFLAGS) $(LDFLAGS)
	$(LDLIBS) --coverage -lcriterion
	./unit_tests

.PHONY: all clean fclean re
