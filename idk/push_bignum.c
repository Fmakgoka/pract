#include "push_swap.h"
#include <stdio.h>

void    bignum(node_t **stack_a, node_t  **stack_b)
{
    node_t *current = NULL;
    int Q1 = ft_firstQ(stack_a);
	int mid = middle(stack_a);
    int size;
    int i= 1;
    current = *stack_a;
    size = tosize(stack_a);
	while (i <= (size))
	{
		current = *stack_a;
		if(current->data <= Q1)
		{
			pb(stack_a, stack_b, (*stack_a)->data);
	//		ft_putendl("qpb");
		}
		else {
	//		if (i <= size / 2)
			{
				ra(stack_a);
	//			ft_putendl("ra");
			}
		/*	else
			{
				ra(stack_a);
				ft_putendl("rra");
			}*/
		}
		i++;
	}
	current = *stack_a;
	i = 1;
	while(i <= (size))
	{
		current = *stack_a;
		if(current->data < mid)
		{
			pb(stack_a, stack_b, (*stack_a)->data);
	//		ft_putendl("mpb");
		}
		else{
	//		if (i <= size / 2)
			{
				ra(stack_a);
	//			ft_putendl("ra");
			}
		/*	else
			{
				ra(stack_a);
				ft_putendl("rra");
			}*/
		}
		i++;
	}
	 while (size > 3)
    {
        current = *stack_a;
        size = tosize(stack_a);
        i = 0;
        mid = middle(stack_a);
        while(i <= size)
        {   current = *stack_a;
            if(current->data < mid)
            {
                pb(stack_a, stack_b, (*stack_a)->data);
	//			ft_putendl("pb");
            }
            else
			{
	//			if (i <=  size / 2)
				{
                	ra(stack_a);
	//				ft_putendl("ra");
				}

	/*			else{
					ra(stack_a);
					ft_putendl("rra");
				}*/
			}
            i++;
//			current = current->next;
 		}
//		printf("first index = %d\n", i);
	}
}

int	ft_distance(node_t **head)
{
	int maxi = ft_max(head);
	int i = 0;
	int j = 0;
	node_t *current = *head;
	if (tosize(head) < 3)
		return 1;
	while (current->next && current->next->data != maxi)
	{
		current = current->next;
		i++;
	}
	while (current->next != NULL)
	{
		current = current->next;
		j++;
	}
	if (i > j)
	{
		return 1;

	}
	else
		return 0;

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
				rb(headb);
				rot++;
			}
			pa(head, headb, (*headb)->data);
			ft_putendl("pa");
			while (rot > 0)
			{
				rrb(headb);
				rot--;
			}

		}
		else
		{
			while ((*headb)->data != maxi)
			{
				rrb(headb);
				rot++;
			}
			pa(head, headb, (*headb)->data);
			ft_putendl("pa");
			while (rot > 0)
			{
				rb(headb);
				rot--;
			}
		}
		i++;
	}
}
