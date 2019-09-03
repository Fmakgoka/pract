/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   middle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 08:55:53 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/03 15:05:13 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		tosize(node_t **head)
{
	a = *head;
	int count;
	count = 0;
	while (a != NULL)
	{
		count++;
		a = a->next;
	}
	return (count);
}

int		middle(node_t **head)
{
	int median_val;
	int size;
	node_t *current;
	node_t *clone;
	int i;
	int j;
	i = 0;
	current = *head;
	size = tosize(&current);
	clone = clonelst(current);
	sorttmp(&clone);
	if (size % 2 == 0)
		j = size / 2;
	else
		j = (size / 2) + 1;
	while (clone && (i < j))
	{
		if (i + 1 == j)
			median_val = clone->data;
		clone = clone->next;
		i++;
	}
	return (median_val);
}

int         ft_firstQ(node_t **head)
{
    node_t *current;
    node_t *current2;
    node_t *clone;
    int     size;
    int        i;
    int     j;
    int     first_quart;

    current = *head;
    clone = clonelst(current);
    sorttmp(&clone);
    size = tosize(head);
    i = 1;
    if(size % 2 == 0)
        j = size * 0.25;
    else
        j = size * 0.25 + 1;
    current2 = clone;
    while(current2 && (i <= j))
    {
        if (i == j)
            first_quart = current2->data;
        current2 = current2->next;
        i++;
    }
    return(first_quart);
}

int         ft_thirdQ(node_t **head)
{
    node_t *current;
    node_t *current2;
    node_t *clone;
    int     size;
    int        i;
    int     j;
    int     first_quart;

    current = *head;
    clone = clonelst(current);
    sorttmp(&clone);
    size = tosize(head);
    i = 1;
    if(size % 2 == 0)
        j = size * 0.75;
    else
        j = size * 0.75 + 1;
    current2 = clone;
    while(current2 && (i <= j))
    {
        if (i == j)
            first_quart = current2->data;
        current2 = current2->next;
        i++;
    }
    return(first_quart);
}
