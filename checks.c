/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessandra <alessandra@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:05:34 by aconta            #+#    #+#             */
/*   Updated: 2023/05/13 12:18:55 by alessandra       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_many_args(int argc)
{
    if (argc == 2)
        return (1);
    else if (argc > 2)
        return (0);
    else
    {
        ft_putendl_fd("Error", 2);
        return (2);
    }
}

char **arr_args(int argc, char **argv)
{
    int i;
    int j;
    char **temp;

    i = 1;
    j = 0;
    if (argc > 2)
        temp = ft_calloc(argc, sizeof (char *));
    if (check_many_args(argc) == 1)
        temp = ft_split(argv[1], 32);
    else if (check_many_args(argc) == 0)
    {
        while (i < argc)
        {
            temp[i - 1] =  ft_calloc((ft_strlen(argv[i]) + 1), sizeof (int));
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

int *convert(char **temp, int argc, char **argv, int *size_arr)
{
    int i;
    int *int_arr;

    i = 0;
    if (argc == 2)
        int_arr = malloc(sizeof (int) * (ft_strlen(argv[1])));
    else
        int_arr = malloc(sizeof (int) * (argc + 1)); //free()
    while (temp[i])
    {
        int_arr[i] = ft_atoi(temp[i]);
        i++;
    }
    *size_arr = i;
    return (int_arr);
}

int check_zeros(char **temp, int *int_arr, int argc)
{
    int i;
    int j;

    i = -1;
    while (++i < (argc - 1))
    {
        j = 0;
        if (int_arr[i] == 0)
        {
            while (temp[i][j])
            {
                if (is_digit_and_sign(temp[i]) == 1)
                {
                    ft_putendl_fd("Error", 2);
                    return (1);
                }
                j++;
            }
        }
    }
    return (0);
}

int check_doubles(int *int_arr, int size_arr)
{
    int i;
    int j;

    i = 0;
    j = 1;
    while (i < size_arr)
    {
        while (j < size_arr)
        {
            if (int_arr[i] == int_arr[j])
            {
                ft_putendl_fd("Error", 2);
                return (1);
            }
            j++;
        }
        i++;
        j = i + 1;
    }
    return (0);
}