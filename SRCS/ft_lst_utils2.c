/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:51:08 by cmartino          #+#    #+#             */
/*   Updated: 2023/02/07 12:51:51 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

int	ft_lstmax(t_list *lst)
{
	int		max;

	max = 0;
	while (lst)
	{
		if (lst->index >= max)
			max = lst->index;
		lst = lst->next;
	}
	return (max);
}

int	ft_lstmin(t_list *lst)
{
	int		min;

	min = 5;
	while (lst)
	{
		if (lst->index <= min)
			min = lst->index;
		lst = lst->next;
	}
	return (min);
}
