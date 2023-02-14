/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:52:43 by cmartino          #+#    #+#             */
/*   Updated: 2023/02/14 09:55:24 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	ft_sort_two(t_list *stack, int s)
{
	ft_swap(stack);
	if (s)
		ft_putstr("sa\n");
	else
		ft_putstr("sb\n");
}

void	ft_sort_four(t_list *stack_a, t_list *stack_b)
{
	ft_push(&stack_b, &stack_a);
	ft_putstr("pb\n");
	if (!ft_lst_is_sorted(stack_a))
		ft_sort_three(stack_a, ft_lstmin(stack_a), ft_lstmax(stack_a));
	ft_repush_small_sort(&stack_a, &stack_b, 4);
	ft_order(stack_a);
}

void	ft_sort_five(t_list *stack_a, t_list *stack_b)
{
	ft_push(&stack_b, &stack_a);
	ft_push(&stack_b, &stack_a);
	ft_putstr("pb\npb\n");
	if (!ft_lst_is_sorted(stack_a))
		ft_sort_three(stack_a, ft_lstmin(stack_a), ft_lstmax(stack_a));
	if (!ft_lst_is_sorted(stack_b))
		ft_sort_two(stack_b, 0);
	ft_repush_small_sort(&stack_a, &stack_b, 5);
}

void	ft_small_sort(t_list *stack_a, t_list *stack_b, int size)
{
	if (size == 2)
		ft_sort_two(stack_a, 1);
	else if (size == 3)
		ft_sort_three(stack_a, 1, 3);
	else if (size == 4)
		ft_sort_four(stack_a, stack_b);
	else if (size == 5)
		ft_sort_five(stack_a, stack_b);
}
