/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:05:24 by cmartino          #+#    #+#             */
/*   Updated: 2023/02/07 13:05:41 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

static void	ft_repush_radix(t_list **stack_a, t_list **stack_b)
{
	ft_push(stack_a, stack_b);
	ft_putstr("pa\n");
}

static int	ft_comp_b(t_list **stack_a, t_list **stack_b, int max_bits, int cnt)
{
	if ((*stack_a)->index >> max_bits & 1)
	{
		ft_rotate(stack_a);
		ft_putstr("ra\n");
	}
	else
	{
		ft_push(stack_b, stack_a);
		ft_putstr("pb\n");
		++cnt;
	}
	return (cnt);
}

void	ft_radix(t_list *stack_a, t_list *stack_b)
{
	int	size;
	int	max_bits;
	int	j;
	int	cnt;

	size = ft_lstsize(stack_a);
	max_bits = 0;
	while (((size) >> (max_bits)) != 0)
	{
		j = 0;
		cnt = 0;
		while (j < size)
		{
			cnt = ft_comp_b(&stack_a, &stack_b, max_bits, cnt);
			++j;
		}
		j = 0;
		while (j < cnt)
		{
			ft_repush_radix(&stack_a, &stack_b);
			++j;
		}
		++max_bits;
	}
	ft_putstr("\n");
}
