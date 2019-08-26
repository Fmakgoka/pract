/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   middle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 08:55:53 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/08/26 14:39:38 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		tosize(node_t **head)
{
	a = *head;
	int count;
	count = 0;
	while (a->next != NULL)
	{
		count++;
		a = a->next;
	}
	return (count);
}

int		middle(node_t **temp)
{
	int tmp = tosize(temp);
	int mid;
	node_t *cur = *temp;
	sorttmp(&cur);
	mid = 0;
	if (tmp % 2 == 0)
	{
		mid = tmp / 2;
	}
	else
	{
		mid = (tmp / 2) + 1;
	}
	tmp = 0;
	while (tmp < mid)
	{
		tmp += 1;
		cur = cur->next;
	}
	return (cur->data);
}
