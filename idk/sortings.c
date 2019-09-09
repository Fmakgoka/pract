/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:55:17 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/07 08:19:09 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(node_t **head)
{
	if ((*head)->data > (*head)->next->data )
	{
		ft_putendl("sa");
		sa(head);
	}
}

void	sort3(node_t **head)
{
	if((*head)->data > (*head)->next->data && (*head)->data < (*head)->next->next->data)
	{
		ft_putendl("sa");
		sa(head);
	}
	else if ((*head)->data > (*head)->next->data && (*head)->next->data > (*head)->next->next->data)
	{
		ft_putendl("sa");
		sa(head);
		ft_putendl("rra");
		rra(head);
	}
	else if ((*head)->data > (*head)->next->data && (*head)->data > (*head)->next->next->data)
	{
		ft_putendl("ra");
		ra(head);
	}
	else if ((*head)->data < (*head)->next->data && (*head)->next->data > (*head)->next->next->data)
	{
		ft_putendl("sa");
		sa(head);
		ft_putendl("ra");
		ra(head);
	}
	else if((*head)->data < (*head)->next->data && (*head)->data > (*head)->next->next->data)
	{
		ft_putendl("rra");
		rra(head);
	}
}
void	ft_four_things(node_t **stack_a, node_t **stack_b)
{
	sort3(stack_a);
	pa(stack_a, stack_b, (*stack_b)->data);
	ft_putendl("pa");
}

void	sort4(node_t **head, node_t **headb)
{
	node_t	*current;
	int		median;
	int		size;
	int		i;
	current = NULL;
	current = *head;
	size = tosize(head);
	i = 1;
	median = middle(head);
	while (i++ <= (size))
	{
		current = *head;
		if (current->data < median)
		{
			pb(head, headb, (*head)->data);
			ft_putendl("pb");
		}
		else
		{
			ra(head);
			ft_putendl("ra");
		}
	}
	ft_four_things(head, headb);
}
void	ft_five_things(node_t **head, node_t **headb)
{
	sort3(head);
	if ((*headb)->data < (*headb)->next->data)
	{
		sa(headb);
		ft_putendl("sa");
	}
	pa(head, headb, (*headb)->data);
	ft_putendl("pa");
	pa(head, headb, (*headb)->data);
	ft_putendl("pa");
}


void	sort5(node_t **head, node_t **headb)
{
	node_t	*current;
	int		median;
	int		size;
	int		i;
	current = NULL;
	current = *head;
	size = tosize(head);
	i = 1;
	median = middle(head);
	while (i++ <= (size))
	{
		current = *head;
		if (current->data < median)
		{
			pb(head, headb, (*head)->data);
			ft_putendl("pb");
		}
		else
		{
			ra(head);
			ft_putendl("ra");
		}
	}
	ft_five_things(head, headb);
}
