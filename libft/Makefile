#This makefile is not mine, it was done by some user named UncleReaton

CC=cc
NAME=libft.a
CFLAGS=-Wall -Wextra -Werror
OPTIONS=-c -fPIC
SRC=ft_mem*.c ft_str*.c ft_to*.c ft_is*.c ft_atoi.c ft_bzero.c ft_calloc.c main.c
OBJ=*.o
BONUS=ft_lst*.c

all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $(OPTIONS) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) libft.so

re: fclean all 

bonus: $(BONUS)
	$(CC) $(CFLAGS) $(OPTIONS) $(BONUS)
	ar -crs $(NAME) $(OBJ)

so: $(OBJ)
	gcc -shared -o libft.so $(OBJ)

.PHONY: clean fclean all re bonus so
