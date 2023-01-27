/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:39:07 by cmartino          #+#    #+#             */
/*   Updated: 2023/01/27 15:22:57 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

t_list	*ft_lstnew(int value)
{
	t_list	*lst;

	lst = ft_malloc(1, sizeof(*lst));
	lst->value = value;
	lst->index = -1;
	lst->next = NULL;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
		*lst = new;
	else if (lst)
	{
		temp = *lst;
		while (temp -> next)
			temp = temp -> next;
		temp -> next = new;
	}
}

void print_bin(unsigned char byte)
{
    int i = CHAR_BIT; /* however many bits are in a byte on your platform */
    while(i--) {
        putchar('0' + ((byte >> i) & 1)); /* loop through and print the bits */
    }
}
