NAME = push_swap

SRC = checks.c checks1.c checks2.c free.c main2.c moves.c radix.c stacks.c three_four_five.c

LIBFT = libft/ft_atoi.c libft/ft_bzero.c libft/ft_calloc.c libft/ft_lstadd_front.c libft/ft_lstadd_back.c libft/ft_lstlast.c libft/ft_lstnew.c libft/ft_lstsize.c libft/ft_putendl_fd.c libft/ft_split.c libft/ft_strlen.c libft/ft_strncmp.c

OBJ_S = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror -g

$(NAME): $(OBJ_S)
	@cc $(FLAG) $(SRC) $(LIBFT) -o $(NAME)

all: $(NAME)

re: fclean all

clean: 
	rm -f ${OBJ_S}

fclean: clean
	rm -rf $(NAME)
	
.PHONY: all re clean fclean

#./push_swap + 3 1 0
#ARG=" "; valgrind ./push_swap $ARG
#.	.