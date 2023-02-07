/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FT_repush_small_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:43:33 by cmartino          #+#    #+#             */
/*   Updated: 2023/02/07 13:05:27 by cmartino         ###   ########.fr       */
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
	else if ((*stack_b)->index == size)
	{
		ft_push(stack_a, stack_b);
		ft_putstr("pa\n");
		ft_rotate(stack_a);
		ft_putstr("ra\n");
	}
}

void	ft_repush_small_sort(t_list **stack_a, t_list **stack_b, int size)
{
	t_list	*a;
	t_list	*b;

	a = *stack_a;
	b = *stack_b;
	if (b->index == 1 || b->index == size)
		ft_min_and_max(&a, &b, size);
	else
	{
		if (b->index > a->index && b->index < a->next->index)
		{
			ft_rotate(&a);
			printf("ra\n");
			ft_push(&a, &b);
			printf("pa\n");
		}
		else
		{
			ft_rotate(&a);
			printf("ra\n");
			ft_repush_small_sort(&a, &b, size);
		}
	}
	*stack_a = a;
	*stack_b = b;
}