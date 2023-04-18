#include "push_swap.h"

t_list *fill_list(int *int_arr, int size_arr)
{
  t_list *head;
  t_list *temp;
  int i;

  i = 0;
  head = NULL;
  head = (t_list *) malloc(sizeof(t_list));
  head = ft_lstnew(int_arr[i], i);
  i++;
  while (i < size_arr)
  {
    temp = ft_lstnew(int_arr[i], i);
    ft_lstadd_back(&head, temp);
    i++;
  }
  return (head);
}
