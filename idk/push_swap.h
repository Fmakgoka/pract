/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:19:48 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/09 15:37:11 by fmakgoka         ###   ########.fr       */
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
void	push_last(node_t **head, int data);
struct node*  ft_put(int agc, char **agv);
int		ft_min(node_t **head);
int		ft_max(node_t **head);
void	sort2(node_t **head);
void	sort3(node_t **head);
void	sort4(node_t **head, node_t **headb);
void	ft_four_things(node_t **head, node_t **headb);
void	ft_five_things(node_t **head, node_t **headb);
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
int		ft_firstqq(node_t **head);
int		ft_firstQ(node_t **head);
int		ft_thirdQ(node_t **head);
void	ft_pushB(node_t **head, node_t **headb);
int		find_index(int x, node_t *b);
int		find_big_i(node_t *b);
void	ft_revmid(node_t *a, node_t *b, int x);
void	ft_moveb(node_t *a, node_t *b);
int		ft_distance(node_t **head);
void	ft_smalnum(node_t **stack_a, node_t **stack_b);
void	ft_smalnumb(node_t **stack_a, node_t **stack_b);
void	ft_midnum(node_t **stack_a, node_t **stack_b);
void	ft_midnumq(node_t **stack_a, node_t **stack_b);
int		issorted_a(node_t **head, node_t **headb);
void	swap(char *line, node_t **head_a, node_t **head_b);
void	push(char *line, node_t **head_a,node_t **head_b);
void	rotate(char *line,node_t **head_a,node_t  **head_b);
void	reverse(char *line, node_t **head_a,node_t **head_b);
int		ft_do_op(node_t **head, node_t **head_b);

#endif
