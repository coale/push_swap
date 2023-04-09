#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int	ft_atoi(char *str);
char	**ft_split(char const *str, char c);
int ft_strlen(char *str);
int check_many_args(int argc);
char **arr_args(int argc, char **argv);
int is_digit(char *str);
int *convert(char **temp);
int check_zeros(char **temp, int *int_arr);

#endif