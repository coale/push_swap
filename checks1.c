#include "push_swap.h"

int is_digit_and_sign(char *str)
{
	int i;

	i = 0;
    if ((str[i] == '-' || str[i] == '+') && str[i + 1])
        i++;
    else
        return (1);
    while (str[i])
    {
        if ((str[i] >= '0' && str[i] <= '9'))
            i++;
        else
            return (1);
    }
	return (0);
}

int final_check(int *int_arr, char **temp, int size_arr, int argc)
{
    if (check_zeros(temp, int_arr, argc) != 0 || check_doubles(int_arr, size_arr) != 0)
        return (1);  
    return (0);
}
