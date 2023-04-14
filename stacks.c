#include "push_swap.h"

t_list *fill_list(int *int_arr, int size_arr)
{
  t_list *lst;
  t_list *temp;
  int i;

  i = 0;
  lst = NULL;
  while (i < size_arr)
  {
    temp = ft_lstnew(int_arr);
    ft_lstadd_back(lst, temp);
    i++;
    int_arr++;
  }
  return (lst);
}