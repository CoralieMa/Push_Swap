/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:12:42 by cmartino          #+#    #+#             */
/*   Updated: 2023/02/10 10:43:58 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	ft_check(t_list *lst, int nb)
{
	while (lst)
	{
		if (lst->value == nb)
			ft_exit();
		lst = lst->next;
	}
}

t_list	*ft_fill_stack(char **data, int size)
{
	t_list	*stack;
	int		nb;

	++data;
	if (size == 2)
		data = ft_split(data[0], ' ');
	else
		stack = NULL;
	while (*data)
	{
		nb = ft_atoi(*data);
		ft_check(stack, nb);
		ft_lstadd_back(&stack, ft_lstnew(nb));
		++data;
	}
	return (stack);
}
