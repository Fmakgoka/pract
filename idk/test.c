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

void swap(node_t **head)
{
	node_t *temp;
	node_t *tempH;

	tempH = *head;
	temp = tempH->next; //points to the 2nd node
	tempH = temp->next; //head points to the 3rd node
	temp->next = tempH; //the 2nd node point to head (making it the 1st node)


	/*char **agv;
	node_t *temp;
	head = malloc(sizeof(node_t));
	head->data = ft_atoi(agv[1]);
	head->next = malloc(sizeof(node_t));
	head->next->data = ft_atoi(agv[2]);
	*temp = head->data;
	head->data = head->next->data;
	head->next->data = *temp;*/
}

int		main(int argc, char **argv)
{
	struct node *a;
	struct node *b;
	a = put(argc, argv);
	print(a, b);
	swap(&a);
	print(a, b);
	return(0); 
}
