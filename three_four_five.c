/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_four_five.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessandra <alessandra@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:06:03 by aconta            #+#    #+#             */
/*   Updated: 2023/05/13 12:19:53 by alessandra       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_list **stack)
{
	t_list	*tmp;
	int		min;

	tmp = *stack;
	min = tmp->index;
	while (tmp)
	{
		if (tmp->index < min)
			min = tmp->index;
		tmp = tmp->next;
	}
	return (min);
}

static void	sort3(t_list **stack_a)
{
	t_list	*tmp;

	tmp = *stack_a;
	while (!is_sorted(stack_a))
	{
		if ((tmp->data > tmp->next->next->data)
			&& (tmp->next->data < tmp->next->next->data))
			ra(stack_a);
		else if ((tmp->data > tmp->next->data)
			&& (tmp->data - tmp->next->data))
			sa(stack_a);
		else
			rra(stack_a);
		tmp = *stack_a;
	}
}

static void	sort4_5(t_list **stack_a, t_list **stack_b)
{
	int		min;
	t_list	*tmp;

	tmp = *stack_a;
	while (!is_sorted(stack_a))
	{
		tmp = *stack_a;
		min = get_min(stack_a);
		if (tmp->index == min)
		{
			pb(stack_a, stack_b);
			if (ft_lstsize(*stack_a) == 3)
				break ;
		}
		else if (tmp->next->index == min)
			ra(stack_a);
		else
			rra(stack_a);
	}
	if (!is_sorted(stack_a))
		sort3(stack_a);
	while (*stack_b)
		pa(stack_a, stack_b);
}

void	simple_sort(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort3(stack_a);
	else if (size > 3 && size <= 5)
		sort4_5(stack_a, stack_b);
}
