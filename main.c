#include "push_swap.h"

int main(int argc, char **argv)
{
    int size_arr; //parametro di convert()
    char **temp;
    int *arr;
    t_list *head;
    t_list *stack_aPtr;

    if (argc > 1)
    {
        temp = arr_args(argc, argv);
        arr = convert(temp, argc, &size_arr);
        if (final_check(arr, temp, size_arr, argc) == 0)
        {
            head = fill_list(arr, size_arr);
            stack_aPtr = head;
            while(stack_aPtr->next)
            {
                printf("%d\n", stack_aPtr->data);
                stack_aPtr = stack_aPtr->next;
            }
            printf("%d\n", stack_aPtr->data);
        }
    }
    else
        return (1);
}
