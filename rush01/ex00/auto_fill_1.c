/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auto_fill_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 11:13:49 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/08 18:09:53 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_4_when_1_r(char **str)
{
	int	row;
	int	col;

	row = 0;
	while (row < 6)
	{
		col = 1;
		while (col < 5)
		{
			if (str[row][col] == 1 + '0')
			{
				if (row == 0)
					str[row + 1][col] = '4';
				if (row == 5)
					str[row - 1][col] = '4';
			}
			col++;
		}
		row += 5;
	}
}

void	fill_4_when_1_c(char **str)
{
	int	row;
	int	col;

	col = 0;
	while (col < 6)
	{
		row = 1;
		while (row < 5)
		{
			if (str[row][col] == 1 + '0')
			{
				if (col == 0)
					str[row][col + 1] = '4';
				if (col == 5)
					str[row][col - 1] = '4';
			}
			row++;
		}
		col += 5;
	}
}

void	fill_4_when_1(char **str)
{
	fill_4_when_1_c(str);
	fill_4_when_1_r(str);
}
