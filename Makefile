NAME = push_swap

SRC = checks.c checks1.c free.c main.c moves.c radix.c stacks.c three_four_five.c utils_libft.c

OBJ_S = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror -g

$(NAME): $(OBJ_S)
	@cc $(FLAG) $(SRC) -o $(NAME)

all: $(NAME)

re: fclean all

clean: 
	rm -f ${OBJ_S}

fclean: clean
	rm -rf $(NAME)
	
.PHONY: all re clean fclean
