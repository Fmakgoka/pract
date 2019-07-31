/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:55:17 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/07/29 11:27:17 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(node_t **head)
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
	else if((*head)->data > (*head)->next->data && (*head)->data > (*head)->next->next->data)
	{
		ft_putendl("rra");
		rra(head);
	}

}
