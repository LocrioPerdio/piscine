/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 16:24:40 by efiguere          #+#    #+#             */
/*   Updated: 2026/02/15 21:43:24 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "tools.h"

int	ft_lines(const char *path)
{
	int		fd;
	int		size;
	int		i;
	char	c;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	c = 0;
	i = 0;
	size = 0;
	while (read(fd, &c, 1))
	{
		if (c == '\n')
			i = -1;
		if (i == 0)
			size++;
		i++;
	}
	close(fd);
	return (size);
}

int	ft_chars(const char *path)
{
	int		fd;
	int		bytes;
	char	c;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	c = 0;
	bytes = 0;
	while (read(fd, &c, 1))
	{
		if (c == '\n')
			bytes++;
		if (c >= 32 && c < 127)
			bytes++;
	}
	return (bytes);
}

int	ft_count_size_number(const char *path, int n)
{
	int		fd;
	int		size;
	int		i;
	char	c;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	i = 1;
	size = 0;
	while (read(fd, &c, 1) && i <= n)
	{
		if (i == n && (c >= '0' && c <= '9'))
			size++;
		if (c == '\n')
			i++;
	}
	close(fd);
	if (i < n)
		return (-1);
	return (size);
}

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		if (res * sign > 2147483647)
			return (2147483647);
		if (res * sign < -2147483648)
			return (-2147483648);
		i++;
	}
	return ((int)(res * sign));
}

/*int	main(void)
{
	int	i;
	int	j;
	char *c = "numbers.dict";

	i = ft_chars(c);
	printf("caracteres totales en archivo: %d\n", i);

	j = ft_count_size_number(c, 4);
	printf("caracteres en linea: %d", j);
	return (0);
}*/
