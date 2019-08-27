/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bignum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 12:22:46 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/08/27 16:49:14 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	bignum(node_t **head, node_t **headb)
{
	node_t *tmp = *head;
	int i;
	int  size;
	i = 0;
	size = tosize(head);
	int mid = middle(&tmp);
	while (i <= (size / 2)  )
	{
		if ((*head)->data < mid)
		{
			pb(head, headb, (*head)->data);
		}
		else
			rra(head);
		i++;
	}

}*/
void    bignum(node_t **stack_a, node_t  **stack_b)
{
    node_t *current = NULL;
    int median;
    int size;
    int i;
    current = *stack_a;
    size = tosize(stack_a);
    i = 1;
    median = middle(stack_a);
    while(i <= (size))
    {   current = *stack_a;
        if(current->data < median)
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
