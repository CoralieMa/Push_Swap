/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:05:24 by cmartino          #+#    #+#             */
/*   Updated: 2023/01/27 15:35:21 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void ft_printlst(t_list *lst1, t_list *lst2)
{
	int size, size1, i = 0;

	size = ft_lstsize(lst1);
	size1 = ft_lstsize(lst2);
	
	if (size1 > size)
		size = size1;

	while (i <= size)
	{
		if (lst1)
		{
			print_bin(lst1->index);
			printf("\t");
			lst1 = lst1->next;
		}
		if (lst2)
		{
			print_bin(lst2->index);
			lst2 = lst2->next;
		}
		printf("\n");
		++i;
	}
	printf("\n\n");
}

void	ft_radix(t_list *stack_a, t_list *stack_b)
{
	int	size;
	int	max_bits;
	int	i;
	int	j;
	int num;

	size = ft_lstsize(stack_a);
	max_bits = 0;
	while (((size - 1)>>(max_bits++)) != 0)
	{
		i = 0;
		while (i < max_bits)
		{
			j = 0;
			while (j < size && stack_a)
			{
				num = stack_a->index;
				if ((((num)>>i)&1) == 1)
				{
					ft_rotate(&stack_a);
					printf("ra\n");
				}
				else
				{
					ft_push(&stack_b, &stack_a);
					printf("pb\n");
				}
				++j;
			}
			++i;
		}
		ft_printlst(stack_a, stack_b);
		while (stack_b)
		{
			ft_push(&stack_a, &stack_b);
			printf("pa\n");
		}
	}
}