/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessandra <alessandra@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:05:59 by aconta            #+#    #+#             */
/*   Updated: 2023/05/17 15:01:22 by alessandra       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void starter(int argc, char **argv, t_list **stack_a, t_list **stack_b)
{
	int		size_arr;
	char	**temp;
	int		*arr;

	if (argc > 1)
	{
		*stack_a = NULL;
		*stack_b = NULL;
		temp = arr_args(argc, argv);
		arr = convert(temp, argc, argv, &size_arr);
	}
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

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		return (1);
	if (argc == 2 && (ft_strncmp(argv[1], " ", ft_strlen(argv[1])) == 0 \
		|| ft_strncmp(argv[1], "", ft_strlen(argv[1])) == 0))
		return (write(2, "Error\n", 6));
	stack_a = (t_list **)malloc(sizeof (t_list));
	stack_b = (t_list **)malloc(sizeof (t_list));
	starter(argc, argv, stack_a, stack_b);
	if (is_sorted(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return (0);
	}
	sort(stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
