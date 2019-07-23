/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:40:38 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/07/23 10:43:51 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void rb(node_t **head)
{
	node_t *temp;
	node_t *tempH;

	temp = *head;
	tempH = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = tempH;
	tempH->next = NULL;
	*head = temp;
}
