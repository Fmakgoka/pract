/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:47:16 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/03 15:48:00 by fmakgoka         ###   ########.fr       */
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
	struct node *temp;
	int *i;
	int x = 0;

	a = put(argc, argv);
	print(a, b);
	//ft_putendl("\nclone of stack a\n");
	temp = clonelst(a);
	/*i = find_ch(&a);
	while (x < 5)
	{
		printf("q = %d\n", i[x]);
		x++;
	}*/
	sorttmp(&temp);
	//print(temp, b);
	bignum(&a, &b);
	print(a, b);
	//print(a, b);
	sortbig(&a, &b);
	print(a, b);
	return(0); 
}
