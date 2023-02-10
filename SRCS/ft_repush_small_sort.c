/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repush_small_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:43:33 by cmartino          #+#    #+#             */
/*   Updated: 2023/02/10 12:57:17 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

static void	ft_min_and_max(t_list **stack_a, t_list **stack_b, int size)
{
	if ((*stack_b)->index == 1)
	{
		ft_push(stack_a, stack_b);
		ft_putstr("pa\n");
	}
	else
	{
		ft_push(stack_a, stack_b);
		ft_putstr("pa\n");
		ft_rotate(stack_a);
		ft_putstr("ra\n");
	}
	(void)size;
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

void ft_fonction(t_list **stack_a, t_list **stack_b)
{
	t_list	*a;
	t_list	*b;

	a = *stack_a;
	b = *stack_b;
	
}

void	ft_repush_small_sort(t_list **stack_a, t_list **stack_b, int size)
{
	t_list	*a;
	t_list	*b;

	a = *stack_a;
	b = *stack_b;
	if (b->index == 1 || b->index > ft_lstmax(a))
		ft_min_and_max(&a, &b, size);
	else
	{
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
	}
	if (size == 5)
	{
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
	}
	ft_test(a);
	*stack_a = a;
	*stack_b = b;
}
