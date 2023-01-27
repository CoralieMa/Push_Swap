/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:59:18 by cmartino          #+#    #+#             */
/*   Updated: 2023/01/27 15:22:45 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

#include <stdio.h>
#include <limits.h>

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	(void)argc;

	stack_a = ft_fill_stack(argv);
	ft_index(stack_a);
	stack_b = NULL;
	ft_radix(stack_a, stack_b);
	while (stack_a->next)
	{
		printf("%d\t->\t%d\t->\t", stack_a->value, stack_a->index);
		print_bin(stack_a->index);
		printf("\n");
		stack_a = stack_a->next;
	}
	printf("%d\t->\t%d\t->\t", stack_a->value, stack_a->index);
	print_bin(stack_a->index);
	printf("\n");


	
	// int n = ft_atoi(argv[argc - 2]);
	// int m;

	// printf("%d -> ", n);
	// print_bin(n);
	// printf("\n");
	// m = n>>ft_atoi(argv[argc - 1]);
	// printf("%d -> ", m);
	// print_bin(m);
	// printf("\n");


}
