/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bignum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 12:22:46 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/08/30 14:57:42 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void    bignum(node_t **stack_a, node_t  **stack_b)
{
    node_t *current = NULL;
    int median;
    int size;
    int i;
    current = *stack_a;
    size = tosize(stack_a);
    while (size > 3)
    {
        current = *stack_a;
        print(*stack_a, *stack_b);
        size = tosize(stack_a);
        //ft_putendl("size=");
        printf("size = %d\n", size);
        i = 1;
        median = middle(stack_a);
        printf("median = %d\n", median);
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
}
