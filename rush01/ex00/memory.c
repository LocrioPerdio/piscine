/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 20:08:10 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/08 18:10:00 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	free_grid(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			str[i][j] = 0;
			j++;
		}
		free(str[i]);
		str[i] = NULL;
		i++;
	}
	free(str);
	str = NULL;
}

void	free_vals(char *vals)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		vals[i] = 0;
		i++;
	}
	free(vals);
	vals = NULL;
}

char	*init_vals(void)
{
	char	*vals;
	int		i;

	i = 0;
	vals = malloc(4);
	while (i < 4)
	{
		vals[i] = 0;
		i++;
	}
	return (vals);
}

char	**board_create(void)
{
	char	**str;
	int		i;
	int		j;

	str = malloc(6 * 8);
	i = 0;
	j = 0;
	while (i < 6)
	{
		str[i] = malloc(6 * 1);
		while (j < 6)
		{
			str[i][j] = '\0';
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}
