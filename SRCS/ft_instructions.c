/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:50:37 by cmartino          #+#    #+#             */
/*   Updated: 2023/01/23 15:50:24 by cmartino         ###   ########.fr       */
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
	int	tmp;

	if (!lst || !(*lst)->next)
		return ;
	tmp = (*lst)->value;
	while ((*lst)->next)
	{
		(*lst)->value = (*lst)->next->value;
		*lst = (*lst)->next;
	}
	// (*lst)->value = tmp;
}

// void	ft_reverse_rotate(t_list **lst)
// {
	
// }

#include <stdlib.h>
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, int value)
{
	t_list *lst1;
	
	lst1 = malloc(sizeof(lst));
	if (!lst1)
		return ;
	lst1->value = value;
	lst1->next = *lst;
	*lst = lst1;
}

void	ft_print_lst(t_list	*lst)
{
	while (lst)
	{
		printf("%d\n", lst->value);
		lst = lst->next;
	}
}

int main(void)
{
	t_list *lst;
	t_list *lst2;
	
	lst = malloc(sizeof(lst));
	lst2 = malloc(sizeof(lst));
	if (!lst || !lst2)
		return (0);
	lst->value = 5;
	lst2->value = 15;
	ft_lstadd_front(&lst, 4);
	ft_lstadd_front(&lst, 3);
	ft_lstadd_front(&lst, 2);
	ft_lstadd_front(&lst, 1);
	ft_lstadd_front(&lst2, 14);
	ft_lstadd_front(&lst2, 13);
	ft_lstadd_front(&lst2, 12);
	ft_lstadd_front(&lst2, 11);
	printf("**************\n");
	ft_print_lst(lst);
	printf("**************\n");
	ft_swap(lst);
	ft_print_lst(lst);
	printf("**************\n");
	ft_swap(lst);
	ft_print_lst(lst);
	printf("**************\n");
	ft_push(&lst, &lst2);
	ft_print_lst(lst);
	printf("--\n");
	ft_print_lst(lst2);
	printf("**************\n");
	
}
