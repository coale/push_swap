/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <aconta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:05:59 by aconta            #+#    #+#             */
/*   Updated: 2023/05/11 14:47:55 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    int size_arr; //parametro di convert()
    char **temp;
    int *arr;
    t_list	**stack_a;
	t_list	**stack_b;

    if (argc > 1)
    {
        temp = arr_args(argc, argv);
        arr = convert(temp, argc, &size_arr);
        if (final_check(arr, temp, size_arr, argc) == 0)
        {
            stack_a = (t_list **)malloc(sizeof(t_list));
	        stack_b = (t_list **)malloc(sizeof(t_list));
            *stack_a = NULL;
	        *stack_b = NULL;
            ft_free_strarr(temp);
            *stack_a = fill_list(arr, size_arr);
            free(arr);
            fill_index(stack_a);
            if (is_sorted(stack_a))
	        {
		        free_stack(stack_a);
		        free_stack(stack_b);
		        return (0);
	        }
            sort(stack_a, stack_b);
	        free_stack(stack_a);
	        free_stack(stack_b);
	        return (0);
        }
        else
        {
            free(arr);
            return (1);
        }
    }
    else
        return (1);
}

