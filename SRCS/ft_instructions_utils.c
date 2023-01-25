#include "../Includes/push_swap.h"

int	ft_last(t_list *lst)
{
	int	last;

	while (lst)
	{
		last = lst->value;
		lst = lst->next;
	}
	return (last);
}
