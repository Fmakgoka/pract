/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:47:16 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/07/29 16:18:29 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"
  
/*typedef struct node{
    int data;
    struct node* next;
}node_t;*/
   
void push(node_t ** head, int data) {
    node_t * new_node;
    new_node = malloc(sizeof(node_t));

    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void 	push_last(node_t **head, int data)
{
   	node_t *new_node;
	node_t *temp;

    new_node = malloc(sizeof(node_t));
    new_node->data = data;
    new_node->next = NULL;
	temp = *head;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
}

struct node* put(int agc, char **agv)
{
	struct node* a = NULL;
	struct node* b ;
	int i;

	i = 1;
	b = (struct node*)malloc(sizeof(struct node));
	while (i < agc)
	{
		push_last(&a, ft_atoi(agv[i]));
		i++;
	}
	return (a);
}

void	print(struct node *structA, struct node *structB)
{
	struct node	*temp1;
	struct node *temp2;

	temp1 = structA;
	temp2 = structB;

	ft_putendl("ListA\tListB");
	while (temp1 || temp2)
	{
		if (temp1)
		{
			ft_putnbr(temp1->data);
			temp1 = temp1->next;
		}
		ft_putchar('\t');
		if (temp2)
		{
			ft_putnbr(temp2->data);
			temp2 =temp2->next;
		}
		ft_putchar('\n');

	}
}

int		main(int argc, char **argv)
{
	struct node *a;
	struct node *b;
	a = put(argc, argv);
	print(a, b);
	//sa(&a);
	//push_swap(&a);
	minmax(&a);
	/*pb(&a, &b, a->data);
	pb(&a, &b, a->data);
	pb(&a, &b, a->data);
	ra(&a);
	rb(&b); //rb
	rra(&a);
	rrb(&b); //rrb
	sa(&a);
	pa(&a, &b, b->data);
	pa(&a, &b, b->data);
	pa(&a, &b, b->data);*/
	print(a, b);

	return(0); 
}
