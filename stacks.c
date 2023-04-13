#include "push_swap.h"

t_list *list_new(int value)
{
    t_list *node;

    node = malloc(sizeof(t_list));
    if (node == NULL)
		  return (1);
    node->data = value;
    node->next = NULL;
    return (node);
}

int	ft_list_size(t_list *head)
{
  t_list *temp;
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