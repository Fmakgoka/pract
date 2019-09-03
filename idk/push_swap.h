/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:19:48 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/03 15:19:27 by fmakgoka         ###   ########.fr       */
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
int		ft_min(node_t **head);
int		ft_max(node_t **head);
void	sort3(node_t **head);
void	sort5(node_t **head, node_t **headb);
int		sorted3(node_t **head);
int		middle(node_t **head);
void	median(node_t  *head);
void	sorttmp(node_t **head);
int		tosize(node_t **head);
void	bignum(node_t **head, node_t **headb);
int		is_ontop( node_t **head, int min);
node_t	*clonelst(node_t *head);
void	print(struct node *structA, struct node *structB);
void	ft_quartile(node_t **head);
void	sortbig(node_t **head, node_t **headb);
int		*find_ch(node_t **top);
int		ft_firstQ(node_t **head);
int		ft_thirdQ(node_t **head);

#endif
