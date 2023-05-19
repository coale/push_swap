/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessandra <alessandra@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:05:34 by aconta            #+#    #+#             */
/*   Updated: 2023/05/19 15:55:34 by alessandra       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_many_args(int argc)
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

char	**arr_args_quotes(char **argv)
{
	char	**temp;

	if (is_digit_and_sign_1arg(argv[1]) == 0)
		temp = ft_split(argv[1], 32);
	else
	{
		ft_putendl_fd("Error", 2);
		exit(1);
	}
	return (temp);
}

char	**arr_args(int argc, char **argv)
{
	int		i;
	int		j;
	char	**temp;

	i = 1;
	j = 0;
	temp = ft_calloc(argc, sizeof (char *));
	while (i < argc)
	{
		temp[i - 1] = ft_calloc((ft_strlen(argv[i]) + 1), sizeof (int));
		while (argv[i][j])
		{
			temp[i - 1][j] = argv[i][j];
			j++;
		}
		temp[i - 1][j] = '\0';
		j = 0;
		i++;
	}
	return (temp);
}

int	*convert(char **temp, int argc, char **argv, int *size_arr)
{
	int	i;
	int	*int_arr;

	i = 0;
	if (argc == 2)
		int_arr = ft_calloc(ft_strlen(argv[1]), sizeof (int));
	else
		int_arr = malloc(sizeof (int) * (argc + 1));
	while (temp[i])
	{
		int_arr[i] = ft_atoi(temp[i]);
		i++;
	}
	*size_arr = i;
	return (int_arr);
}

int	check_zeros(char **temp, int *int_arr, int argc)
{
	int	i;
	int	j;

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
