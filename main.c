/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <aconta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:05:59 by aconta            #+#    #+#             */
/*   Updated: 2023/05/04 14:15:40 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    int size_arr; //parametro di convert()
    char **temp;
    int *arr;
    int *index_arr;
    t_list *head;
    t_list *stack_aPtr;
    t_list	**stack_a;
	t_list	**stack_b;
    int i;

    i = 0;
    if (argc > 1)
    {
        temp = arr_args(argc, argv);
        arr = convert(temp, argc, &size_arr);
        if (final_check(arr, temp, size_arr, argc) == 0)
        {
            ft_free_str(**temp);
            head = fill_list(arr, size_arr);
            stack_aPtr = head;
            fill_index(&stack_aPtr);
            while (stack_aPtr)
            {
                printf("Value: %d Index: %d\n", stack_aPtr->data, stack_aPtr->index);
                stack_aPtr = stack_aPtr->next;
                i++;
            }
        }
    }
    else
        return (1);
}


/*
int	main(int ac, char **av)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (ac < 2)
		return (-1);
	check_args(ac, av);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	init(stack_a, ac, av);
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
}*/

/*int main(int argc, char **argv)
{
    int size_arr; //parametro di convert()
    char **temp;
    int *arr;
    int *index_arr;
    t_list *head;
    t_list *stack_aPtr;
    int i;

    i = 0;
    if (argc > 1)
    {
        temp = arr_args(argc, argv);
        arr = convert(temp, argc, &size_arr);
        if (final_check(arr, temp, size_arr, argc) == 0)
        {
            ft_free_str(**temp);
            head = fill_list(arr, size_arr);
            stack_aPtr = head;
            fill_index(&stack_aPtr);
            while (stack_aPtr)
            {
                printf("Value: %d Index: %d\n", stack_aPtr->data, stack_aPtr->index);
                stack_aPtr = stack_aPtr->next;
                i++;
            }
        }
    }
    else
        return (1);
}*/