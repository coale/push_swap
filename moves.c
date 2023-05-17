/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessandra <alessandra@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:05:24 by aconta            #+#    #+#             */
/*   Updated: 2023/05/17 15:38:18 by alessandra       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_list **head)
{
	t_list	*tmp;
	t_list	*end;

	if (ft_lstsize(*head) < 2)
		return (-1);
	tmp = *head;
	end = ft_lstlast(tmp);
	*head = tmp->next;
	tmp->next = NULL;
	end->next = tmp;
	return (0);
}

int	ra(t_list **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	printf("ra\n");
	return (0);
}

int	push(t_list **dest, t_list **source)
{
	t_list	*tmp;
	t_list	*tmp_dest;
	t_list	*tmp_source;

	if (ft_lstsize(*source) == 0)
		return (-1);
	tmp_dest = *dest;
	tmp_source = *source;
	tmp = tmp_source;
	tmp_source = tmp_source->next;
	*source = tmp_source;
	if (!tmp_dest)
	{
		tmp_dest = tmp;
		tmp_dest->next = NULL;
		*dest = tmp_dest;
	}
	else
	{
		tmp->next = tmp_dest;
		*dest = tmp;
	}
	return (0);
}

int	pa(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (-1);
	printf("pa\n");
	return (0);
}

int	pb(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_b, stack_a) == -1)
		return (-1);
	printf("pb\n");
	return (0);
}

int	reverserotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*end;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	tmp = *stack;
	end = ft_lstlast(tmp);
	while (tmp)
	{
		if (tmp->next->next == NULL)
		{
			tmp->next = NULL;
			break ;
		}
		tmp = tmp->next;
	}
	end->next = *stack;
	*stack = end;
	return (0);
}

int	rra(t_list **stack_a)
{
	if (reverserotate(stack_a) == -1)
		return (-1);
	printf("rra\n");
	return (0);
}

int	swap(t_list **stack)
{
	t_list	*tmp;
	t_list	*holder;
	int		content;
	int		i;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	tmp = *stack;
	holder = tmp->next;
	content = tmp->data;
	i = tmp->index;
	tmp->data = holder->data;
	tmp->index = holder->index;
	holder->data = content;
	holder->index = i;
	return (0);
}

int	sa(t_list **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	printf("sa\n");
	return (0);
}