/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 11:21:36 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/08 18:09:58 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_opp(char **str)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if ((str[0][i] - '0' + str[5][i] - '0') > 5)
			return (0);
		if ((str[i][0] - '0' + str[i][5] - '0') > 5)
			return (0);
		i++;
	}
	return (1);
}

int	check_4_r(char **str)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (str[0][i] == '4')
		{
			if (!str[0][0] && str[5][i] == '1')
				str[0][0] = '1';
			else
				return (0);
		}
		if (str[5][i] == '4')
		{
			if (!str[5][5] && str[0][i] == '1')
				str[5][5] = '1';
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int	check_4_c(char **str)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (str[i][0] == '4')
		{
			if (!str[5][0] && str[i][5] == '1')
				str[5][0] = '1';
			else
				return (0);
		}
		if (str[i][5] == '4')
		{
			if (!str[0][5] && str[i][0] == '1')
				str[0][5] = '1';
			else
				return (0);
		}
		i++;
	}
	return (1);
}
