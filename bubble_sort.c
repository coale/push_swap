/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <aconta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:05:19 by aconta            #+#    #+#             */
/*   Updated: 2023/04/20 14:05:24 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// C program to implement Bubble Sort on singly linked list

/* function to swap data of two nodes a and b*/
 
t_list *swap(t_list *ptr1, t_list *ptr2)
{
    t_list *tmp = ptr2->next;
    ptr2->next = ptr1;
    ptr1->next = tmp;
    return ptr2;
}

/* Bubble sort the given linked list */
void bubbleSort(t_list** head, int count)
{
    t_list** h;
    int i;
    int j;
    int swapped;

    j = 0;
    i = 0;
    while (i <= count)
    {
        h = head;
        swapped = 0;
        while (j < count - 1)
        {
            t_list* p1 = *h;
            t_list* p2 = p1->next;
            if (p1->data > p2->data)
            {
                *h = swap(p1, p2);
                swapped = 1;
            }
            h = &(*h)->next;
            j++;
        }
        if (swapped == 0)
            break;
        j = 0;
        i++;
    }
}