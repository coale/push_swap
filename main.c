/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <aconta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:05:59 by aconta            #+#    #+#             */
/*   Updated: 2023/04/21 12:29:14 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    int size_arr; //parametro di convert()
    char **temp;
    int *arr;
    t_list *head;
    t_list *stack_aPtr;

    if (argc > 1)
    {
        temp = arr_args(argc, argv);
        arr = convert(temp, argc, &size_arr);
        if (final_check(arr, temp, size_arr, argc) == 0)
        {
            head = fill_list(arr, size_arr);
            stack_aPtr = head;
            bubbleSort(&stack_aPtr, size_arr);
            fill_index(&stack_aPtr, size_arr);
            while (stack_aPtr)
            {
                printf("Value: %d Index: %d\n", stack_aPtr->data, stack_aPtr->index);
                stack_aPtr = stack_aPtr->next;
            }
        }
    }
    else
        return (1);
}
