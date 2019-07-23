#include <stdlib.h>
#include "libft/libft.h"
#include <stdio.h>
  
typedef struct node{
    int data;
    struct node* next;
}node_t;
   
void push(node_t ** head, int data) {
    node_t * new_node;
    new_node = malloc(sizeof(node_t));

    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
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
		push(&a, ft_atoi(agv[i]));
		//ft_putnbr(a->data);
		//ft_putchar('\n');
		i++;
	}
	//ft_putnbr(b->data);
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
void delete( node_t * head )
{
    node_t * temp;
   	temp = head->next;
    head->data = head->next->data;
    head->next = temp->next;
    free(temp);
}

void sa(node_t **head)
{
	node_t *temp;
	node_t *tempH;
	int store;

	tempH = *head;
	temp = tempH->next;
	store = temp->data;
	temp->data = tempH->data;
	tempH->data = store;
}

void pb(node_t **a, node_t **b, int data)
{
	node_t *head;

	head = (node_t*)malloc(sizeof(node_t));
	head->data = data;
	head->next = (*b);
	(*b) = head;
	if ((*a)->next)
		delete(*a);
	else
		(*a) = NULL;
}
void ra(node_t ** head)
{
	node_t *temp;
	node_t *tempH;

	tempH = *head;
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = tempH;
	temp = tempH->next;
	tempH->next = NULL;
	*head = temp;
}
void rb(node_t **head)
{
	node_t *temp;
	node_t *tempH;

	temp = *head;
	tempH = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = tempH;
	temp = tempH->next;
	tempH->next = NULL;
	*head = temp;
}
void	rra(node_t **head)
{
	if (*head == NULL || (*head)->next == NULL)
		return ;
	node_t *seclast = NULL;
	node_t *last = *head;
	while (last->next != NULL)
	{
		seclast = last;
		last = last->next;
	}
	seclast->next = NULL;
	last->next = *head;
	*head = last;
}
void rrb(node_t **head)
{
	if (*head == NULL || (*head)->next == NULL)
		return ;
	node_t *seclast = NULL;
	node_t *last = *head;
	while (last->next != NULL)
	{
		seclast = last;
		last = last->next;
	}
	seclast->next = NULL;
	last->next = *head;
	*head = last;
}
void pa(node_t **a, node_t **b, int data)
{
	node_t *head;

	head = (node_t*)malloc(sizeof(node_t));
	head->data = data;
	head->next = (*a);
	(*a) = head;
	if ((*b)->next)
		delete(*b);
	else
	{
		*b = NULL;
	}
}

int		main(int argc, char **argv)
{
	struct node *a;
	struct node *b;
	a = put(argc, argv);
	print(a, b);
	sa(&a);
	print(a, b);
	pb(&a, &b, a->data);
	pb(&a, &b, a->data);
	pb(&a, &b, a->data);
	print(a, b);
	ra(&a);
	rb(&b);
	print(a, b);
	rra(&a);
	rrb(&b);
	print(a, b);
	sa(&a);
	print(a, b);
	pa(&a, &b, b->data);
	pa(&a, &b, b->data);
	pa(&a, &b, b->data);
	print(a, b);

	return(0); 
}
