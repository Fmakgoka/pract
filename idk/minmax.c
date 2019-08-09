/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minmax.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 11:16:15 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/08/09 10:16:38 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		minmax(node_t **head)
{
	node_t *temp = *head;
	int min = (*head)->data;
	while (temp->next != NULL)
	{
		if (temp->data < min)
			min = temp->data;
		temp = temp->next;
	}
	if (temp->data < min)
		min = temp->data;
	return (min);
}
