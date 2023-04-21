/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <aconta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:06:19 by aconta            #+#    #+#             */
/*   Updated: 2023/04/21 12:44:40 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

t_list *fill_list(int *int_arr, int size_arr)
{
  t_list *head;
  t_list *temp;
  int i;

  i = 0;
  head = NULL;
  head = (t_list *) malloc(sizeof(t_list));
  head = ft_lstnew(int_arr[i]);
  i++;
  while (i < size_arr)
  {
    temp = ft_lstnew(int_arr[i]);
    ft_lstadd_back(&head, temp);
    i++;
  }
  return (head);
}

void fill_index(t_list **head, int size_arr)
{
  t_list *headPtr;
  int i;

  headPtr = *head;
  i = 0;
  while (i < size_arr)
  {
    headPtr->index = i;
    headPtr = headPtr->next;
    i++;
  }
}