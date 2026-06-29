/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 12:01:04 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/08 18:39:43 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"
#include "valid.h"
#include <unistd.h>

void	get_pos_first_empt(int *row, int *col, char **str, char *vals)
{
	int	a;
	int	b;

	a = 1;
	while (a < 5)
	{
		b = 1;
		while (b < 5)
		{
			if (str[a][b] == '\0')
			{
				*row = a;
				*col = b;
				is_valid(*row, *col, str, vals);
				return ;
			}
			b++;
		}
		a++;
	}
}

int	is_full(char **str)
{
	int	row;
	int	col;

	row = 1;
	while (row < 5)
	{
		col = 1;
		while (col < 5)
		{
			if (str[row][col] == 0)
				return (0);
			col += 1;
		}
		row += 1;
	}
	return (1);
}

void	print_sol(char **str)
{
	int	row;
	int	col;

	row = 1;
	while (row < 5)
	{
		col = 1;
		while (col < 5)
		{
			write(1, &str[row][col], 1);
			if (col == 4)
			{
				write(1, "\n", 1);
			}
			else
				write(1, " ", 1);
			col += 1;
		}
		row += 1;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

int	recursive_resolver(char **str)
{
	char	*vals;
	int		count;
	int		find;
	int		row;
	int		col;

	vals = init_vals();
	count = 0;
	find = 0;
	get_pos_first_empt(&row, &col, str, vals);
	while (vals[count] != 0 && col != 0 && row != 0 && !find)
	{
		str[row][col] = vals[count];
		if (is_full(str) && is_correct(str))
		{
			print_sol(str);
			free_vals(vals);
			return (1);
		}
		find = recursive_resolver(str);
		str[row][col] = '\0';
		count++;
	}
	free_vals(vals);
	return (find);
}
