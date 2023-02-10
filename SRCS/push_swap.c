/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:59:18 by cmartino          #+#    #+#             */
/*   Updated: 2023/02/10 11:54:20 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

//check car le dernier pa ne se fait pas

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		size;

	stack_a = ft_fill_stack(argv, argc);
	ft_index(stack_a);
	stack_b = NULL;
	if (!ft_lst_is_sorted(stack_a))
	{
		size = ft_lstsize(stack_a);
		if (size > 5)
			ft_radix(stack_a, stack_b);
		else if (size > 1)
			ft_small_sort(stack_a, stack_b, size);
	}
	// ft_printflst1(stack_a);
}
