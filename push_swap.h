/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <aconta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:06:07 by aconta            #+#    #+#             */
/*   Updated: 2023/05/15 12:00:51 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include "../libft/libft.h"

int 		check_many_args(int argc);
char 		**arr_args(int argc, char **argv);
int 		is_digit_and_sign(char *str);
int 		*convert(char **temp, int argc, char **argv, int *size_arr);
int 		check_zeros(char **temp, int *int_arr, int argc);
int			check_doubles(int *int_arr, int size_arr);
int			final_check(int *int_arr, char **temp, int size_arr, int argc);
t_list		*fill_list(int *int_arr, int size_arr);
void		fill_index(t_list **head);
int			*ft_search_index(int *int_arr, int arr_size, t_list *head);
void		ft_free_strarr(char **str);
int			rotate(t_list **head);
int			ra(t_list **stack_a);
int			pa(t_list **stack_a, t_list **stack_b);
int			pb(t_list **stack_a, t_list **stack_b);
int			is_sorted(t_list **head);
int			rra(t_list **stack_a);
int			get_min(t_list **stack);
int			sa(t_list **stack_a);
int			reverserotate(t_list **stack);
void		free_stack(t_list **head);
void		sort(t_list **stack_a, t_list **stack_b);
void		simple_sort(t_list **stack_a, t_list **stack_b);
int			int_limits(char **temp);
int	check_doubles(int *int_arr, int size_arr);
int final_leak(char **temp);

#endif

// tab