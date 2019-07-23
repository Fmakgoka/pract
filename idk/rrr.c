/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:37:45 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/07/23 12:39:30 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rra(node_t **head)
{
	if (*head == NULL || (*head)->next == NULL)
		return ;
	node_t *seclast = NULL;
	node_t *last = *head;
	while (last->next != NULL)
	{
		seclast = last;
		last = last->next;
	}
	seclast->next = NULL;
	last->next = *head;
	*head = last;
}

void rrb(node_t **head)
{
	if (*head == NULL || (*head)->next == NULL)
		return ;
	node_t *seclast = NULL;
	node_t *last = *head;
	while (last->next != NULL)
	{
		seclast = last;
		last = last->next;
	}
	seclast->next = NULL;
	last->next = *head;
	*head = last;
}

void rrr(node_t **a, node_t **b)
{
	rra(*a);
	rrb(*b);
}
