NAME = push_swap

SRC = checks.c checks1.c checks2.c free.c main.c moves.c radix.c stacks.c three_four_five.c utils_libft.c

OBJ_S = $(SRC:.c=.o)

LIBFT = libft/libft.a

FLAG = -Wall -Wextra -Werror -g

$(NAME): $(OBJ_S)
	@make -C libft
	@cc $(FLAG) $(SRC) $(LIBFT) -o $(NAME)

all: $(NAME)

re: fclean all

clean: 
	rm -f ${OBJ_S}
	make clean -C libft

fclean: clean
	make fclean -C libft
	rm -rf $(NAME)
	
.PHONY: all re clean fclean

#./push_swap + 3 1 0
#ARG=" "; valgrind ./push_swap $ARG
#.	.