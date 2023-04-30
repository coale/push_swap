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

void	ra(t_list **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	printf("ra");
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

void	pa(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (-1);
	printf("pa");

}

void	pb(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_b, stack_a) == -1)
		return (-1);
	printf("pb");
}