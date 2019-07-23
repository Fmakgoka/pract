/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:32:08 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/07/23 12:32:43 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sb(node_t **head)
{
	node_t *temp;
	node_t *tempH;
	int store;

	tempH = *head;
	temp = tempH->next;
	store = temp->data;
	temp->data = tempH->data;
	tempH->data = store;
}
