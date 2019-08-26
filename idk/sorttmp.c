/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorttmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 11:05:15 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/08/26 14:33:17 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

node_t		*clonelst(node_t  *head)
{
	if (head == NULL)
		return (NULL);
	else
	{
		node_t *newnode= (node_t *)malloc(sizeof(node_t));
		newnode->data = head->data;
		newnode->next = clonelst(head->next);
		return (newnode);
	}
}

void	sorttmp(node_t **head)
{
	node_t *tmp;
	node_t *tmp2;

	int list;
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp2 = tmp->next;
		while(tmp2 != NULL)
		{
			if (tmp->data > tmp2->data)
			{
				list = tmp->data;
				tmp->data = tmp2->data;
				tmp2->data = list;
			}
			tmp2 = tmp2->next;
		}	
		tmp = tmp->next;
	}
	//return (tmp);
}
