/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:30:46 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/07/23 12:31:34 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void pa(node_t **a, node_t **b, int data)
{
	node_t *head;

	head = (node_t*)malloc(sizeof(node_t));
	head->data = data;
	head->next = (*a);
	(*a) = head;
	if ((*b)->next)
		delete(*b);
	else
	{
		*b = NULL;
	}
}