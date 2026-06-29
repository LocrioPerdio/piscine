/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auto_fill_4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 12:05:06 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/08 18:09:56 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_4_col_u(char **str)
{
	int	row;
	int	col;

	if (!str[0][0])
		return ;
	row = 1;
	col = 1;
	while (col < 5)
	{
		if (str[0][col] == '4')
		{
			while (row < 5)
			{
				str[row][col] = row + '0';
				row ++;
			}
			return ;
		}
		col ++;
	}
}

void	fill_4_col_d(char **str)
{
	int	row;
	int	col;

	if (!str[5][5])
		return ;
	row = 4;
	col = 1;
	while (col < 5)
	{
		if (str[5][col] == '4')
		{
			while (row > 0)
			{
				str[row][col] = 5 - row + '0';
				row --;
			}
			return ;
		}
		col ++;
	}
}

void	fill_4_row_l(char **str)
{
	int	row;
	int	col;

	if (!str[5][0])
		return ;
	row = 1;
	col = 1;
	while (row < 5)
	{
		if (str[row][0] == '4')
		{
			while (col < 5)
			{
				str[row][col] = col + '0';
				col ++;
			}
			return ;
		}
		row ++;
	}
}

void	fill_4_row_r(char **str)
{
	int	row;
	int	col;

	if (!str[0][5])
		return ;
	row = 1;
	col = 4;
	while (row < 5)
	{
		if (str[row][5] == '4')
		{
			while (col > 0)
			{
				str[row][col] = 5 - col + '0';
				col --;
			}
			return ;
		}
		row ++;
	}
}

void	fill_4(char **str)
{
	fill_4_row_l(str);
	fill_4_row_r(str);
	fill_4_col_u(str);
	fill_4_col_d(str);
}
