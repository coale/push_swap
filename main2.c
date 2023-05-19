/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessandra <alessandra@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:46:06 by aconta            #+#    #+#             */
/*   Updated: 2023/05/19 15:29:10 by alessandra       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_1_arg(char *str)
{
	if (ft_strncmp((str), " ", ft_strlen(str)) == 0 \
		|| ft_strncmp((str), "", ft_strlen(str)) == 0 \
	|| is_digit_and_sign_1arg(str) == 1)
		return (1);
	return (0);
}

void	starter1(int argc, char **argv, t_list **stack_a, t_list **stack_b)
{
	int		size_arr;
	char	**temp;
	int		*arr;

	*stack_a = NULL;
	*stack_b = NULL;
	if (check_1_arg(argv[1]) == 1)
	{
		free_stack(stack_a);
		free_stack(stack_b);
		ft_putendl_fd("Error", 2);
		exit(1);
	}
	else
	{
		temp = arr_args_quotes(argv);
		arr = convert(temp, argc, argv, &size_arr);
		if (final_check_1arg(arr, temp, size_arr, argc) == 0)
		{
			*stack_a = fill_list(arr, size_arr);
			fill_index(stack_a);
		}
		ft_free_strarr(temp);
		free(arr);
	}
}

void	starter2(int argc, char **argv, t_list **stack_a, t_list **stack_b)
{
	int		size_arr;
	char	**temp;
	int		*arr;

	*stack_a = NULL;
	*stack_b = NULL;
	if (is_digit_and_sign(argv[1]) == 1)
	{
		ft_putendl_fd("Error", 2);
		exit(1);
	}
	else
	{
		temp = arr_args(argc, argv);
		arr = convert(temp, argc, argv, &size_arr);
		if (final_check(arr, temp, size_arr, argc) == 0)
		{
			ft_free_strarr(temp);
			*stack_a = fill_list(arr, size_arr);
			free(arr);
			fill_index(stack_a);
		}
		else
			free(arr);
	}
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc == 1)
		return (1);
	else if (argc > 1)
	{
		stack_a = (t_list **)malloc(sizeof (t_list));
		stack_b = (t_list **)malloc(sizeof (t_list));
		if (argc == 2)
			starter1(argc, argv, stack_a, stack_b);
		else
			starter2(argc, argv, stack_a, stack_b);
		if (is_sorted(stack_a) == 0)
			sort(stack_a, stack_b);
		free_stack(stack_a);
		free_stack(stack_b);
	}
	return (0);
}
