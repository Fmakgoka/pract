/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:48:00 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/09 15:04:19 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void 	push_last(node_t **head, int data)
{
   	node_t *new_node;
	node_t *temp;

    new_node = malloc(sizeof(node_t));
    new_node->data = data;
    new_node->next = NULL;
	temp = *head;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
}

struct node* ft_put(int agc, char **agv)
{
	 a = NULL;
	int i;

	i = 1;
	while (i < agc)
	{
		push_last(&a, ft_atoi(agv[i]));
		i++;
	}
	return (a);
}
