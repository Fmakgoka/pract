#include "push_swap.h"
#include <stdio.h>

void    bignum(node_t **stack_a, node_t  **stack_b)
{
    node_t *current = NULL;
    int Q1;
	int mid;
    int size;
    int i;
    current = *stack_a;
    size = tosize(stack_a);
    while (size > 3)
    {
        current = *stack_a;
        //print(*stack_a, *stack_b);
        size = tosize(stack_a);
        //ft_putendl("size=");
        //printf("size = %d\n", size);
        i = 1;
        Q1 = ft_firstQ(stack_a); //5
        //printf("Q1 = %d\n", Q1);
		mid = middle(stack_a);
        while(i <= (size))
        {   current = *stack_a;
            if(current->data < mid)
            {
                ft_putstr("current = ");
                ft_putnbr(current->data);
                ft_putchar('\n');
                pb(stack_a, stack_b, (*stack_a)->data);
            }
            else
                ra(stack_a);
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
	ft_putendl("big");
	//bignum(head, headb);
	if ((*head)->data > (*head)->next->data)
	{
		sa(head);
		ft_putendl("sa");
	}

	ft_putnbr(size);
	ft_putchar('\n');
	while (i < size && headb)
	{
		maxi = ft_max(headb);
		while((*headb)->data != maxi)
		{
			rb(headb);
			ft_putendl("rb");
			rot++;
		}
		if ((*headb)->data == maxi)
		{
			pa(head, headb, (*headb)->data);
			ft_putendl("pa");
		}
		while (rot > 0)
		{
			rrb(headb);
			ft_putendl("rrb");
			rot--;
		}
		i++;
	}
	ft_putendl("We out");
}
