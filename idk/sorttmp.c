/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorttmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 11:05:15 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/08/19 15:13:42 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorttmp(node_t **head)
{
	node_t *tmp;
	node_t *tmp2;

	int list;
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp2 = tmp->next;
		while(tmp2 != NULL)
		{
			if (tmp->data > tmp2->data)
			{
				list = tmp->data;
				tmp->data = tmp2->data;
				tmp2->data = list;
			}
			tmp2 = tmp2->next;
		}	
		tmp = tmp->next;
	}
}
