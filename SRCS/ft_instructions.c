/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:50:37 by cmartino          #+#    #+#             */
/*   Updated: 2023/01/26 13:05:20 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	ft_swap(t_list	*lst)
{
	int	temp;

	if (!lst || !lst->next)
		return ;
	temp = lst->value;
	lst->value = lst->next->value;
	lst->next->value = temp;
}

void	ft_push(t_list **lst1, t_list **lst2)
{
	t_list	*tmp;

	if (!lst2)
		return ;
	tmp = *lst1;
	*lst1 = *lst2;
	*lst2 = (*lst2)->next;
	(*lst1)->next = tmp;
}

void	ft_rotate(t_list **lst)
{
	int		first;
	t_list	*tmp;

	if (!lst || !(*lst)->next)
		return ;
	tmp = *lst;
	first = (*lst)->value;
	while (tmp->next)
	{
		tmp->value = tmp->next->value;
		tmp = tmp->next;
	}
	tmp->value = first;
}

static int	ft_last(t_list *lst)
{
	int	last;

	while (lst)
	{
		last = lst->value;
		lst = lst->next;
	}
	return (last);
}

void	ft_reverse_rotate(t_list **lst)
{
	int		last;
	int		a;
	int		b;
	t_list	*tmp;

	tmp = *lst;
	last = ft_last(*lst);
	a = (*lst)->value;
	while (tmp->next)
	{
		b = tmp->next->value;
		tmp = tmp->next;
		tmp->value = a;
		a = b;
	}
	(*lst)->value = last;
}
