#include "push_swap.h"

int main(int argc, char **argv)
{
    
    char **temp = arr_args(argc, argv);
    int *arr = convert(temp);
    printf("%d\n", check_zeros(temp, arr));
}