/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:55:17 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/08/24 11:33:13 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


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
	else if ((*head)->data < (*head)->next->data && (*head)->data < (*head)->next->next->data)
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

int		is_ontop(node_t **head, int min)
{
	if ((*head)->data == min)
		return (1);
	return (-1);
}

#include <stdio.h>

void	sort5(node_t **head, node_t **headb)
{
	int min = 0;
	int count= 0;
	min = minmax(head);

	while (count <= 1 )
	{
		min = minmax(head);
		if (min == (*head)->data)
		{
			ft_putendl("pb");
			pb(head, headb, (*head)->data );
		}
		else if (min == (*head)->next->data)
		{
			ft_putendl("sa");
			ft_putendl("pb");
			sa(head);
			pb(head, headb, (*head)->data);
		}
		else if (min == (*head)->next->next->data)
		{
			ra(head);
			sa(head);
			pb(head, headb, (*head)->data);
		}
		else if (min == (*head)->next->next->next->data)
		{
			rra(head);
			if (is_ontop(head, min) == 1)
			{
				ft_putendl("pb");
				pb(head, headb, (*head)->data);
			}
			else
			{
				rra(head);
				pb(head, headb, (*head)->data);
			}
		}
		else 
		{
			rra(head);
			pb(head, headb, (*head)->data);
		}
		count++;
	}
	sort3(head);
	pa(head, headb, (*headb)->data);
	pa(head, headb, (*headb)->data);
}
