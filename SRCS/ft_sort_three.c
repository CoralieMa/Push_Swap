/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:48:51 by cmartino          #+#    #+#             */
/*   Updated: 2023/02/07 15:13:08 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

static void	ft_sort_three_swap(t_list *stack, int max)
{
	ft_swap(stack);
	ft_putstr("sa\n");
	if (stack->index != max)
	{
		ft_reverse_rotate(&stack);
		ft_putstr("rra\n");
	}
	else
	{
		ft_rotate(&stack);
		ft_putstr("ra 2\n");
	}
}

void	ft_sort_three(t_list *stack, int min, int max)
{
	int	in1;
	int	in2;

	in1 = stack->index;
	in2 = stack->next->index;
	printf("min = %d  max = %d\n", min, max);
	if ((in1 == max && in2 != min) || (in1 == min && in2 == max))
		ft_sort_three_swap(stack, max);
	else if (in1 == max)
	{
		ft_rotate(&stack);
		ft_putstr("ra 1\n");
	}
	else if (in2 == min)
	{
		ft_swap(stack);
		ft_putstr("sa\n");
	}
	else
	{
		ft_reverse_rotate(&stack);
		ft_putstr("rra\n");
	}
}
