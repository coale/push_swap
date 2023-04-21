/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <aconta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:41:36 by aconta            #+#    #+#             */
/*   Updated: 2023/04/21 15:30:59 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *ft_search_index(int *int_arr, int arr_size, t_list *head)
{
    int i;
    int *index_arr;
    t_list *headPtr;

    headPtr = head;
    i = 0;
    index_arr = malloc(arr_size * sizeof (int));
    while(i < arr_size)
    {
        while (headPtr)
        {
            if (int_arr[i] != headPtr->data)
                headPtr = headPtr->next;
            else
            {
                index_arr[i] = headPtr->index;
                break;
            }
        }
        i++;
        headPtr = head; 
    }
    return (index_arr);
}