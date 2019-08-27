/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   middle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 08:55:53 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/08/27 16:49:18 by fmakgoka         ###   ########.fr       */
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

/*int		middle(node_t **temp)
{
	int tmp = tosize(temp);
	int mid;
	node_t *cur = *temp;
	sorttmp(&cur);
	if (tmp % 2 == 0)
		mid = tmp / 2;
	else
		mid = (tmp / 2) + 1;
	while (tmp < mid)
	{
		tmp += 1;
		cur = cur->next;
	}
	return (cur->data);
}*/

int		middle(node_t **head)
{
	int median_val;
	int size;
	node_t *current;
	node_t *clone;
	int i;
	int j;
	i = 1;
	current = *head;
	size = tosize(&current);
	clone = clonelst(current);
	sorttmp(&clone);
	if (size % 2 == 0)
		j = size / 2;
	else
		j = (size / 2) + 1;
	while (clone && (i <= j))
	{
		if (i == j)
			median_val = clone->data;
		clone = clone->next;
		i++;
	}
	return (median_val);
}
