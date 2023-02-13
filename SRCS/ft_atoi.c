/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:25:56 by cmartino          #+#    #+#             */
/*   Updated: 2023/02/13 11:37:18 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned long	nb;

	i = 0;
	sign = 1;
	nb = 0;
	if (str[i] == '-')
	{
		sign = -1;
		++i;
	}
	if (str[i] < '1' || str[i] > '9')
		ft_exit();
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i ++] - 48);
		if (nb > 2147483648 || (nb > 2147483647 && sign == 1))
			ft_exit();
	}
	if (str[i])
		ft_exit();
	return (nb * sign);
}
