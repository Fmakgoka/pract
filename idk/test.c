/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:47:16 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/08/24 14:57:49 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

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
	 a = NULL;
	int i;

	i = 1;
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

#include <stdio.h>
int		main(int argc, char **argv)
{
	struct node *a;
	struct node *b;
	a = put(argc, argv);
	print(a, b);
	tosize(a);
	ft_putendl("siz");
	printf("%d\n", tosize(a));
	sorttmp(&a);
	print(a, b);
	middle(a);
	ft_putendl("mid");
	printf("%d\n", middle(a));
	//bignum(&a, &b);
	return(0); 
}
