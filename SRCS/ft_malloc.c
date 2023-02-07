/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:59:14 by cmartino          #+#    #+#             */
/*   Updated: 2023/02/07 12:04:08 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	*ft_malloc(int count, int size)
{
	void	*a;

	a = malloc(count * size);
	if (!a)
		exit(0);
	return (a);
}
