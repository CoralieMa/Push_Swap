/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:59:14 by cmartino          #+#    #+#             */
/*   Updated: 2023/02/14 09:58:27 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	*ft_malloc(int count, int size, t_list *lst)
{
	void	*a;

	a = malloc(count * size);
	if (!a)
		ft_exit(lst);
	return (a);
}
