/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_views.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 11:20:52 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/08 18:36:09 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_view_row_l(int row, char **str)
{
	char	max;
	int		col;
	int		vis;

	max = '0';
	vis = 0;
	col = 1;
	while (col < 5)
	{
		if (max < str[row][col])
		{
			max = str[row][col];
			vis += 1;
		}
		col += 1;
	}
	if ((vis + '0') == str[row][0])
		return (1);
	return (0);
}

int	is_valid_view_row_r(int row, char **str)
{
	char	max;
	int		col;
	int		vis;

	max = '0';
	vis = 0;
	col = 4;
	while (col > 0)
	{
		if (max < str[row][col])
		{
			max = str[row][col];
			vis += 1;
		}
		col -= 1;
	}
	if ((vis + '0') == str[row][5])
		return (1);
	return (0);
}

int	is_valid_view_col_u(int col, char **str)
{
	char	max;
	int		row;
	int		vis;

	max = '0';
	vis = 0;
	row = 1;
	while (row < 5)
	{
		if (max < str[row][col] && str[row][col] != 0)
		{
			max = str[row][col];
			vis += 1;
		}
		row += 1;
	}
	if ((vis + '0') == str[0][col])
		return (1);
	return (0);
}

int	is_valid_view_col_d(int col, char **str)
{
	char	max;
	int		row;
	int		vis;

	max = '0';
	vis = 0;
	row = 4;
	while (row > 0)
	{
		if (max < str[row][col] && str[row][col] != 0)
		{
			max = str[row][col];
			vis += 1;
		}
		row -= 1;
	}
	if ((vis + '0') == str[5][col])
		return (1);
	return (0);
}

int	is_valid_views(int row, int col, char **str)
{
	int	valid_row;
	int	valid_col;

	valid_row = is_valid_view_row_l(row, str) && is_valid_view_row_r(row, str);
	valid_col = is_valid_view_col_d(col, str) && is_valid_view_col_u(col, str);
	return (valid_row && valid_col);
}
