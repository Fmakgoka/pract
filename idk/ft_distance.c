/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distance.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:18:18 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/06 12:38:04 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_distance(node_t **head)
{
	int maxi = ft_max(head);
	int i = 0;
	int j = 0;
	node_t *current = *head;
	if (tosize(head) < 3)
		return 1;
	while (current->next && current->next->data != maxi)
	{
		current = current->next;
		i++;
	}
	while (current->next != NULL)
	{
		current = current->next;
		j++;
	}
	if (i > j)
	{
		return 1;

	}
	else
		return 0;
}

