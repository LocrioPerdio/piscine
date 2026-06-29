/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 10:24:23 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/15 21:42:55 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"
#include "tools.h"
#include <unistd.h>

int	check_digits(char *nbr)
{
	while (*nbr != '\0')
	{
		if ((*nbr < '0' || *nbr > '9'))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		else
			nbr++;
	}
	write(1, "ok", 2);
	return (1);
}

int	valid_imput(int argc, char *argv[])
{
	char	*nbr;
	char	*path;

	if (argc < 2 || argc > 3 || ft_strcmp(argv[0], "./rush-02"))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (argc == 3 && !ft_strcmp(argv[0], "./rush-02"))
	{
		path = argv[1];
		nbr = argv[2];
		check_digits(nbr);
	}
	else if ((argc == 2 && !ft_strcmp(argv[0], "./rush-02")))
	{
		path = "numbers.dict";
		nbr = argv[1];
		check_digits(nbr);
	}
	ft_strlen(path);
	return (1);
}

int	main(int argc, char *argv[])
{
	valid_imput(argc, argv);
	return (0);
}
