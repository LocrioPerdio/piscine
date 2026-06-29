/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 09:09:59 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/08 18:39:36 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "auto_fill_1.h"
#include "auto_fill_4.h"
#include "check.h"
#include "utils.h"
#include "memory.h"

int	valid_input(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2 && !ft_strcmp(argv[0], "./rush-01"))
	{
		while (argv[1][i])
			i++;
		if (i != 31)
			return (0);
		i = 0;
		while (argv[1][i])
		{
			if (!(i % 2) && (argv[1][i] < '1' || argv[1][i] > '4'))
				return (0);
			if ((i % 2) && argv[1][i] != ' ')
				return (0);
			i++;
		}
	}
	else
		return (0);
	return (1);
}

void	board_init_row(char **str, char *param)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 0;
	while (j < 5 && i < 6)
	{
		str[i][j] = param[k];
		k += 2;
		j++;
		if (j == 5)
		{
			i += 5;
			j = 1;
		}
	}
}

void	board_init_col(char **str, char *argv)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	k = 16;
	while (j < 6 && i < 5)
	{
		str[i][j] = argv[k];
		k += 2;
		i++;
		if (i == 5)
		{
			j += 5;
			i = 1;
		}
	}
}

int	main(int argc, char **argv)
{
	char	**str;
	int		sol_found;

	str = board_create();
	sol_found = 0;
	if (valid_input(argc, argv))
	{
		board_init_row(str, argv[1]);
		board_init_col(str, argv[1]);
		if (check_opp(str) && check_4_r(str) && check_4_c(str))
		{
			fill_4_when_1(str);
			fill_4(str);
			sol_found = recursive_resolver(str);
			if (!sol_found)
				write(1, "Error\n", 6);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	free_grid(str);
}
