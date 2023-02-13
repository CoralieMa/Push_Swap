/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:43:17 by cmartino          #+#    #+#             */
/*   Updated: 2023/02/13 15:29:11 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*temp;

	if (!lst || !*lst)
		return ;
	while (lst && *lst)
	{
		temp = (*lst)->next;
		(*lst)->next = NULL;
		free(*lst);
		*lst = temp;
	}
}

void	ft_exit(t_list *list)
{
	ft_putstr("Error\n");
	ft_lstclear(&list);
	exit(0);
}
