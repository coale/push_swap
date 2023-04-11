#include "push_swap.h"

int check_many_args(int argc)
{
    if (argc == 2)
        return (1);
    else if (argc > 2)
        return (0);
    else
        return (2);
}

char **arr_args(int argc, char **argv)
{
    int i;
    int j;
    char **temp;

    i = 1;
    j = 0;
    temp = malloc(sizeof (argv) * argc); //free() puntatore
    if (check_many_args(argc) == 1)
        temp = ft_split(argv[1], 32);
    else if (check_many_args(argc) == 0)
    {
        while (i < argc)
        {
            temp[i - 1] =  malloc(sizeof (char) * (ft_strlen(argv[i]) + 1)); //free() ogni elemento
            while(argv[i][j])
            {
                temp[i - 1][j] = argv[i][j];
                j++;
            }
            temp[i - 1][j] = '\0';
            j = 0;
            i++;
        }
    }
    return (temp);
}

int *convert(char **temp)
{
    int i;
    int *int_arr;

    i = 0;
    int_arr = malloc(sizeof (int) * ft_strlen(*temp)); //free()
    while (i < ft_strlen(*temp))
    {
        int_arr[i] = ft_atoi(temp[i]);
        i++;
    }
    return (int_arr);
}

int check_zeros(char **temp, int *int_arr, int argc)
{
    int i;
    int j;
    int count_sign;

    i = -1;
    count_sign = 0;
    while (++i < (argc - 1))
    {
        j = 0;
        if (int_arr[i] == 0)
        {
            while (temp[i][j])
            {
                if (is_digit(temp[i]) == 1)
                    return (1);
                else if (temp[i][j] == '-' || temp[i][j] == '+')
                {
                    if (count_sign != 0)
                        return (1);
                    count_sign += 1;
                }
                j++;
            }
        }
    }
    return (0);
}