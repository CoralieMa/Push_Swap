/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:12:42 by cmartino          #+#    #+#             */
/*   Updated: 2023/01/27 10:51:06 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	ft_check(t_list *lst, int nb)
{
	while (lst)
	{
		if (lst->value == nb)
			exit(0);
		lst = lst->next;
	}
}

t_list	*ft_fill_stack(char **data)
{
	t_list	*stack;
	int		nb;

	
	stack = NULL;
	++data;
	while (*data)
	{
		nb = ft_atoi(*data);
		ft_check(stack, nb);
		ft_lstadd_back(&stack, ft_lstnew(nb));
		++data;
	}
	// if (stack)
	// 	printf("%d\n", stack->value);
	// while (stack->next)
	// {
	// 	printf("%d\n", stack->next->value);
	// 	stack = stack->next;
	// }
	return (stack);
}
