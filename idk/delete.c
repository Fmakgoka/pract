/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:12:37 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/08/07 11:04:57 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void deletep(node_t *head)
{
	node_t	*temp;

/*	if (head->next == NULL)
	{
		free(head);
		return ;
	}*/
	temp = head->next;
	head->data = head->next->data;
	head->next = temp->next;
	temp->next = NULL;
	free(temp);
}
