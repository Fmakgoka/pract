/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:04:22 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/07/16 11:01:44 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int		check_arg(char **argv)
{
	int i = 1;
	int j = 0;

	while (argv[i])
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][0] == '-' || argv[i][0] == '+')
				j++;
			if (ft_isdigit(argv[i][j]) == 0)
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	if (check_arg(argv) == -1)
	{
		ft_putendl("Error");
		return (0);
	}
	ft_putstr(argv[1]);
	ft_putchar('\n');
	return (0);
}
