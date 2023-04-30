/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <aconta@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:06:19 by aconta            #+#    #+#             */
/*   Updated: 2023/04/30 17:27:25 by aconta       ###   ########.fr       */
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

t_list	*get_min_for_index(t_list **head)
{
	t_list	*tmp;
	t_list	*min;
    int		flag;

	tmp = *head;
	min = NULL;
    flag = 0;
	if (!tmp)
		return (NULL);
	while (tmp)
	{
		if ((tmp->index == -1) && (!flag || tmp->data < min->data))
        {
            flag = 1;
			min = tmp;
        }
		tmp = tmp->next;
	}
	return (min);
}

void	fill_index(t_list **head)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = get_min(head);
	while (tmp)
	{
		tmp->index = i;
		tmp = get_min(head);
        i++;
	}
}

int	is_sorted(t_list **head)
{
	t_list	*tmp;

	tmp = *head;
	while (tmp && tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}