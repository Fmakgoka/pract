/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:12:37 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/07/23 13:44:46 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void delete(node_t *head)
{
	node_t * temp;
	temp = head->next;
	head->data = head->next->data;
	head->next = temp->next;
	free(temp);
}
