/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 12:13:03 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/07/22 12:17:37 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
