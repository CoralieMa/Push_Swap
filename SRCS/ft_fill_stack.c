/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:12:42 by cmartino          #+#    #+#             */
/*   Updated: 2023/02/14 10:01:30 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

static int	ft_check(t_list *lst, int nb)
{
	while (lst)
	{
		if (lst->value == nb)
			return (0);
		lst = lst->next;
	}
	return (1);
}

static int	ft_strlen(const char *s)
{
	int	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	return (len);
}

t_list	*ft_fill_stack(char **data, int size)
{
	t_list	*stack;
	int		nb;

	++data;
	if (size == 2)
	{
		data = ft_split(data[0], ' ');
		if (ft_strlen(*data) == 0)
			ft_putstr("Error\n");
	}
	else
		stack = NULL;
	while (*data)
	{
		nb = ft_atoi(*data, stack);
		if (!ft_check(stack, nb))
			ft_exit(stack);
		ft_lstadd_back(&stack, ft_lstnew(nb, stack));
		++data;
	}
	return (stack);
}
