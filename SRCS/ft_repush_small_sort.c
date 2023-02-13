/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repush_small_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:43:33 by cmartino          #+#    #+#             */
/*   Updated: 2023/02/13 10:48:15 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	ft_order(t_list *stack)
{
	if (stack->index < 3)
	{
		while (stack->index != 1)
		{
			ft_reverse_rotate(&stack);
			ft_putstr("rra\n");
		}
	}
	else
	{
		while (stack->index != 1)
		{
			ft_rotate(&stack);
			ft_putstr("ra\n");
		}
	}
}

void	ft_test(t_list *stack)
{
	if (stack->index < 3)
	{
		while (stack->index != 1)
		{
			ft_reverse_rotate(&stack);
			ft_putstr("rra\n");
		}
	}
	else
	{
		while (stack->index != 1)
		{
			ft_rotate(&stack);
			ft_putstr("ra\n");
		}
	}
}

static void	ft_repush_first_number(t_list **stack_a, t_list **stack_b, int size)
{
	t_list	*a;
	t_list	*b;

	a = *stack_a;
	b = *stack_b;
	if (b->index > a->index && b->index < a->next->index)
	{
		ft_rotate(&a);
		ft_push(&a, &b);
		ft_putstr("ra\npa\n");
	}
	else
	{
		ft_rotate(&a);
		ft_putstr("ra\n");
		ft_repush_small_sort(&a, &b, size);
	}
	*stack_a = a;
	*stack_b = b;
}

static void	ft_repush_second_number(t_list **stack_a, t_list **stack_b)
{
	t_list	*a;
	t_list	*b;

	a = *stack_a;
	b = *stack_b;
	if (b->index == 5)
	{
		ft_test(a);
		ft_push(&a, &b);
		ft_rotate(&a);
		ft_putstr("pa\nra\n");
	}
	else
	{
		while (a->index < b->index)
		{
			ft_rotate(&a);
			ft_putstr("ra\n");
		}
		ft_push(&a, &b);
		ft_putstr("pa\n");
	}
	*stack_a = a;
	*stack_b = b;
}

void	ft_repush_small_sort(t_list **stack_a, t_list **stack_b, int size)
{
	if ((*stack_b)->index == 1 || (*stack_b)->index > ft_lstmax(*stack_a))
		ft_min_and_max(stack_a, stack_b);
	else
		ft_repush_first_number(stack_a, stack_b, size);
	if (size == 5)
		ft_repush_second_number(stack_a, stack_b);
	ft_order(*stack_a);
}
