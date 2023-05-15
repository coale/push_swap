/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconta <aconta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:03:14 by aconta            #+#    #+#             */
/*   Updated: 2023/05/15 11:57:29 by aconta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_doubles(int *int_arr, int size_arr)
{
	int	i;
	int	j;

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
