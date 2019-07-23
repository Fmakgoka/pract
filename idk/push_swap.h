/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:19:48 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/07/23 15:33:31 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node_t;
void	sa(node_t **head);
void	sb(node_t **head);
void	pa(node_t **a, node_t **b, int data);
void	pb(node_t **a, node_t **b, int data);
void	ra(node_t **head);
void	rb(node_t **head);
void	rr(node_t **a, node_t **);
void	rra(node_t **head);
void	rrb(node_t **head);
void	rrr(node_t **a, node_t **b);
void	delete(node_t *head);
void	push_swap(node_t *head);

#endif
