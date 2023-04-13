#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct s_node {
  int data;
  struct s_node *next;
}  t_node;

int	ft_atoi(char *str);
char	**ft_split(char const *str, char c);
int ft_strlen(char *str);
int check_many_args(int argc);
char **arr_args(int argc, char **argv);
int is_digit_and_sign(char *str);
int *convert(char **temp, int argc, int *size_arr);
int check_zeros(char **temp, int *int_arr, int argc);
int check_doubles(int *int_arr, int size_arr);
int final_check(int *int_arr, char **temp, int size_arr, int argc);

#endif