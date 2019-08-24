/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bignum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 12:22:46 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/08/24 14:12:46 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bignum(node_t **head, node_t **headb)
{
	node_t *tmp = *head;
	int i;
	int  size;
	i = 0;
	size = tosize(*head);
	int mid = middle(tmp);
	while (i <= (size / 2)  )
	{
		if ((*head)->data < mid)
		{
			pb(head, headb, (*head)->data);
		}
		else
			rra(head);
		i++;
	}

}
