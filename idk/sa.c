/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 12:13:03 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/07/23 13:40:31 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(node_t **head)
{
	node_t *temp;
	node_t *temp;
	int store;

	tempH = *head;
	temp = tempH->next;
	store = tempH->data;
	temp->data = tempH->data;
	tempH->data = store;
}
