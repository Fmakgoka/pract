/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:19:48 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/08/06 12:49:43 by fmakgoka         ###   ########.fr       */
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
node_t *a;
node_t *b;
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
void	deletep(node_t *head);
int		minmax(node_t **head);
void	sort3(node_t **head);
void	sort5(node_t **head, node_t **headb);
int		sorted3(node_t **head);
#endif
