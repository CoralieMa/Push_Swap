#include "../Includes/push_swap.h"
#include <stdio.h>
#include <limits.h>

void	print_bin(unsigned char byte)
{
    int i = CHAR_BIT; /* however many bits are in a byte on your platform */
    while(i--) {
        putchar('0' + ((byte >> i) & 1)); /* loop through and print the bits */
    }
}

void ft_printlst(t_list *lst1, t_list *lst2)
{
	int size, size1, i = 0;

	size = ft_lstsize(lst1);
	size1 = ft_lstsize(lst2);
	
	if (size1 > size)
		size = size1;

	while (i <= size)
	{
		if (lst1)
		{
			printf("%d\t->\t", lst1->index);
			print_bin(lst1->index);
			printf("\t");
			lst1 = lst1->next;
		}
		if (lst2)
		{
			printf("%d\t->\t", lst2->index);
			print_bin(lst2->index);
			lst2 = lst2->next;
		}
		printf("\n");
		++i;
	}
	printf("\n");
}

void ft_printflst1(t_list *lst)
{
	while (lst)
	{
		printf("%d\t->\t", lst->index);
		print_bin(lst->index);
		printf("\n");
		lst = lst->next;
	}
	printf("\n");
}

void ft_printlst2(t_list *lst1, t_list *lst2)
{
	int size, size1, i = 0;

	size = ft_lstsize(lst1);
	size1 = ft_lstsize(lst2);
	
	if (size1 > size)
		size = size1;

	while (i <= size)
	{
		if (lst1)
		{
			printf("%d\t->\t", lst1->index);
			print_bin(lst1->index);
			printf("\t");
			lst1 = lst1->next;
		}
		else
			printf("\t\t\t\t");
		if (lst2)
		{
			printf("%d\t->\t", lst2->index);
			print_bin(lst2->index);
			lst2 = lst2->next;
		}
		printf("\n");
		++i;
	}
	printf("\n");
}