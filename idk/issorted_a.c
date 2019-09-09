/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issorted.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 01:21:19 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/09 17:05:03 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		issorted_a(node_t **head, node_t **headb)
{
//	if (!headb)
//	{
		while ((*head)->next)
		{
			if ((*head)->data < (*head)->next->data)
				head = &(*head)->next;
			else
				return (0);
		}
		return (1);
//	}
//	return (0);
}
