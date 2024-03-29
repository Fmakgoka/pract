/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swab.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:09:21 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/09 14:55:44 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(char *line, node_t **head_a, node_t **head_b)
{
	if (ft_strcmp(line, "sa") == 0)
		sa(head_a);
	else if (ft_strcmp(line, "sb") == 0)
		sb(head_b);
	else if (ft_strcmp(line, "ss") == 0)
	{
		sa(head_a);
		sb(head_b);
	}
}
void	push(char *line, node_t **head_a,node_t **head_b)
{
	if (ft_strcmp(line, "pa") == 0)
		pa(head_a, head_b, (*head_b)->data);
	else if (ft_strcmp(line, "pb") == 0)
		pb(head_a, head_b, (*head_b)->data);
}
void	rotate(char *line,node_t **head_a,node_t  **head_b)
{
	if (ft_strcmp(line, "ra") == 0)
		ra(head_a);
	else if (ft_strcmp(line, "rb") == 0)
		rb(head_b);
	else if (ft_strcmp(line, "rr") == 0)
		rr(head_a, head_b);
}
void reverse(char *line, node_t **head_a,node_t **head_b)
{
	if (ft_strcmp(line, "rra") == 0)
		rra(head_a);
	else if (ft_strcmp(line, "rrb") == 0)
		rrb(head_b);
	else if (ft_strcmp(line, "rrr") == 0)
		rrr(head_a, head_a);
}
