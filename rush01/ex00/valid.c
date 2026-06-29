/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 13:33:39 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/08 18:36:10 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "valid_views.h"
#include "valid.h"

void	is_valid(int row, int col, char **str, char *vals2)
{
	int	count;
	int	pos;

	count = 1;
	pos = 0;
	while (count < 5)
	{
		str[row][col] = count + '0';
		if (is_valid_row(row, str) && is_valid_col(col, str))
		{
			vals2[pos] = count + '0';
			pos++;
		}
		str[row][col] = 0;
		count += 1;
	}
}

int	is_valid_row(int row, char **str)
{
	int	col;
	int	a;

	col = 1;
	while (col < 5)
	{
		a = col + 1;
		while (a < 5)
		{
			if (str[row][col] == str[row][a] && str[row][col] != 0)
				return (0);
			a += 1;
		}
		col += 1;
	}
	return (1);
}

int	is_valid_col(int col, char **str)
{
	int	row;
	int	a;

	row = 1;
	while (row < 5)
	{
		a = row + 1;
		while (a < 5)
		{
			if (str[row][col] == str[a][col] && str[row][col] != 0)
				return (0);
			a += 1;
		}
		row += 1;
	}
	return (1);
}

int	is_correct(char **str)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (!is_valid_col(i, str) || !is_valid_views(1, i, str))
		{
			return (0);
		}
		i++;
	}
	i = 1;
	while (i < 5)
	{
		if (!is_valid_row(i, str) || !is_valid_views(i, 1, str))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
