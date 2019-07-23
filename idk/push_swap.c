/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:55:17 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/07/23 15:35:17 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(node_t *head)
{
	if(head->data > head->next->data && head->data < head->next->next->data)
		ft_putendl("sa");
	else if (head->data > head->next->data && head->next->data > head->next->next->data)
	{
		ft_putendl("sa");
		ft_putendl("rra");
	}
	else if (head->data > head->next->data && head->data > head->next->next->data)
	{
		ft_putendl("ra");
	}
	else if (head->data < head->next->data && head->data < head->next->next->data)
	{
		ft_putendl("sa");
		ft_putendl("ra");
	}
	else if(head->data < head->next->data && head->data > head->next->next->data)
		ft_putendl("rra");
}
