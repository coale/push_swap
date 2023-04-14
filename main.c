#include "push_swap.h"

int main(int argc, char **argv)
{
    int size_arr; //parametro di convert()
    char **temp;
    int *arr;
    t_list *stack_a;

    if (argc > 1)
    {
        temp = arr_args(argc, argv);
        arr = convert(temp, argc, &size_arr);
        if (final_check(arr, temp, size_arr, argc) == 0)
        {
            stack_a = fill_list(arr, size_arr);
        }
        printf("%d\n", check_doubles(arr, size_arr));
    }
    else
        return (1);
}
