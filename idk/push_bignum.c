/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bignum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 12:22:46 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/08/13 15:00:04 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_ontop(node_t **head, int min)
{
	if ((*head)->data == min)
		return (1);
	return (-1);
}

void	bignum(node_t **head, node_t **headb)
{
	int count = 0;
	while (count <= 50)
	{
		if (head->data < 51)
		{
			if (is_ontop(head, (*head)->data) == 1)
			{
				ft_putendl("pb");
				pb(head, headb, (*head)->data);
			}
			else
			{
				while (!(is_ontop(head, (*head)->data)))
				{
					rra(head);
					head = head->next;
				}
			}

		}

	}
}
