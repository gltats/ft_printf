NAME = libftprintf.a

.SUFFIXES: .o .a

cc = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_*.c
OBJ = $(SRC:.c=.o)
REMOVE = rm -f

all:	$(NAME)

$(NAME):	$(OBJ)
	 ar -rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	${REMOVE} ${OBJ}

fclean: clean
	${REMOVE} $(NAME)

re: fclean all

.PHONY: all clean fclean re