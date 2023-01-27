/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:31:28 by cmartino          #+#    #+#             */
/*   Updated: 2023/01/27 13:37:18 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

static void	ft_lstmin(t_list *lst, int index)
{
	int		min;
	t_list	*pnt_min;
	t_list	*tmp;

	min = INT_MAX;
	pnt_min = NULL;
	tmp = lst;
	while(tmp)
	{
		if (tmp->value <= min && tmp->index == -1)
		{
			min = tmp->value;
			pnt_min = tmp;
		}
		tmp = tmp->next;
	}
	if (pnt_min)
		pnt_min->index = index;
}

void	ft_index(t_list *stack)
{
	int	index;
	int	size;
	
	size = ft_lstsize(stack);
	ft_lstmin(stack, 1);
	index = 2;
	while (size > 1)
	{
		ft_lstmin(stack, index);
		--size;
		++index;
	}
}
