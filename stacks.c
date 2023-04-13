#include "push_swap.h"

//adattare per doubly linked list
void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*temp;

	if (!lst || !new)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}

t_node *list_new(int value)
{
    t_node *node;

    node = malloc(sizeof(t_node));
    if (node == NULL)
		  return (1);
    node->data = value;
    node->next = NULL;
    return (node);
}

int	ft_list_size(t_node *head)
{
  t_node *temp;
  int size;

  *temp = *head;
  size = 1;
  while(temp->next != NULL)
    {
      size++;
      *temp = *temp->next;
    }
  return size;
}