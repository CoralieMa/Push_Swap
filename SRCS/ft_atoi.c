/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:25:56 by cmartino          #+#    #+#             */
/*   Updated: 2023/02/07 13:06:01 by cmartino         ###   ########.fr       */
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
	if (str[i] < '0' || str[i] > '9')
		exit(0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i ++] - 48);
		if (nb > 2147483648 || (nb > 2147483647 && sign == 1))
			exit(0);
	}
	if (str[i])
		exit(0);
	return (nb * sign);
}
