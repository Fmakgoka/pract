#include "push_swap.h"
#include <stdio.h>

void    bignum(node_t **stack_a, node_t  **stack_b)
{
    node_t *current = NULL;
	int mid = middle(stack_a);
	int j = 0;
    int size;
    int i= 1;
    current = *stack_a;
    size = tosize(stack_a);
	
	 while (size > 3)
    {
        current = *stack_a;
        size = tosize(stack_a);
        i = 1;
        mid = middle(stack_a);
        while(i <= size)
        { 
			j = ft_distance(stack_a);
		  	current = *stack_a;
            if(current->data < mid)
            {
                pb(stack_a, stack_b, (*stack_a)->data);
				ft_putendl("pb");
            }
            else
			{
				ra(stack_a);
				ft_putendl("ra");
			}
            i++;
 		}
	}
}

void	sortbig(node_t **head, node_t **headb)
{
	int i = 0;
	int rot = 0;
	int size = tosize(headb);
	int maxi = ft_max(headb);
	int j = ft_distance(headb);
	if ((*head)->data > (*head)->next->data)
	{
		sa(head);
		ft_putendl("sa");
	}
	while (i < size && headb)
	{
		j = ft_distance(headb);
		maxi = ft_max(headb);
		if ((*headb)->data == maxi)
		{
			pa(head, headb, (*headb)->data);
			ft_putendl("pa");
		}
		else if (j == 1)
		{
			while ((*headb)->data != maxi)
			{
				rrb(headb);
				ft_putendl("rrb");
				rot++;
			}
			pa(head, headb, (*headb)->data);
			ft_putendl("pa");
			while (rot > 0)
			{
				rb(headb);
				ft_putendl("rb");
				rot--;
			}

		}
		else
		{
			while ((*headb)->data != maxi)
			{
				rb(headb);
				ft_putendl("rb");
				rot++;
			}
			pa(head, headb, (*headb)->data);
			ft_putendl("pa");
			while (rot > 0)
			{
				rrb(headb);
				ft_putendl("rrb");
				rot--;
			}
		}
		i++;
	}
}
