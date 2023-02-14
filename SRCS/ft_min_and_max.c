/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_and_max.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:43:30 by cmartino          #+#    #+#             */
/*   Updated: 2023/02/14 10:08:59 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	ft_min_and_max(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_b)->index == 1)
	{
		ft_push(stack_a, stack_b);
		ft_putstr("pa\n");
	}
	else
	{
		ft_push(stack_a, stack_b);
		ft_rotate(stack_a);
		ft_putstr("pa\nra\n");
	}
}
