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

//ordina la lista senza usare le mosse MODIFICARE PERCHE' SPOSTI ANCHE GLI INDICI
void sor_list(t_list *head)
    {
    t_list *node;
    t_list *temp;
    int tempvar; //temp variable to store node data

    node = NULL;
    temp = NULL;
    node = head;
    //temp = node;//temp node to hold node data and next link
    while(node != NULL)
    {
        temp = node; 
        while (temp->next !=NULL)//travel till the second last element 
        {
           if(temp->data > temp->next->data)// compare the data of the nodes 
            {
              tempvar = temp->data;
              temp->data = temp->next->data;// swap the data
              temp->next->data = tempvar;
            }
         temp = temp->next;    // move to the next element 
        }
        node = node->next;    // move to the next node
    }
}