/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessandra <alessandra@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:05:50 by aconta            #+#    #+#             */
/*   Updated: 2023/05/13 12:18:59 by alessandra       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int int_limits(char **temp)
{
    long int i;

    i = 0;
    while (temp[i])
    {
        if (ft_atoi(temp[i]) < -2147483648 || ft_atoi(temp[i]) > 2147483647)
        {
            ft_putendl_fd("Error", 2);
            return (1);
        }
        else
            i++;
    }
    return (0);
}

int is_digit_and_sign(char *str)
{
	int i;

	i = 0;
    if (((str[i] == '-' || str[i] == '+') && str[i + 1]))
        i++;
    while (str[i])
    {
        if ((str[i] >= '0' && str[i] <= '9'))
            i++;
        else
        {
            ft_putendl_fd("Error", 2);
            return (1);
        }
    }
	return (0);
}


/*int is_digit_and_sign(char *str)
{
	int i;

	i = 0;
    if (((str[0] == '-' || str[0] == '+') && str[1]) || str[0] == '0')
        i++;
    while (str[i])
    {
        if ((str[i] >= '0' && str[i] <= '9'))
            i++;
        else
        {
            ft_putendl_fd("Error", 2);
            return (1);
        }
    }
	return (0);
}*/

int final_check(int *int_arr, char **temp, int size_arr, int argc)
{
    if (check_zeros(temp, int_arr, argc) != 0 || check_doubles(int_arr, size_arr) != 0 || int_limits(temp) != 0)
    {
        ft_free_strarr(temp);
        return (1);
    }
    return (0);
}

