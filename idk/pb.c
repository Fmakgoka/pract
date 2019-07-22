/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 12:19:11 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/07/22 15:37:51 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void pb(nod_t **a, node_t **b, int data)
{
	node_t *head;

	head = (node_t*)malloc(sizeof(node_t));
	head->data = data;
	head->next = (*b);
	(*b) = head;
	if((*b)->data)
		delete(*a);
	else
		(*a) = NULL;
}
