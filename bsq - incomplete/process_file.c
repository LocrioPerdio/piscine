/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 21:37:03 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/18 11:09:22 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_file(char *name)
{
	int	buf[1];
	int	fd;

	fd = open(name, O_RDONLY);
	if (fd == -1)
		return ;
	while (read(fd, buf, 1) > 0)
		write(1, buf, 1);
	close(fd);
}

void	ft_strcpy(char *dest, char *src, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
}

char	*read_loop(int fd)

{
	int ret;
	char buf[1024];
	char *str;
	int size;

	ret = 1;
	str = NULL;
	size = 0;
	while (ret > 0)
	{
		ret = read(fd, buf, 1024);
		if (ret > 0)
		{
			str = ft_extend(str, buf, size, ret);
			if (!str)
				return (NULL);
			size += ret;
		}
	}
	return (str);
}

char	*read_file(char *name)

{
	int fd;
	char *str;

	fd = open(name, O_RDONLY);
	if (fd == -1)
		return (NULL);
	str = read_loop(fd);
	close(fd);
	return (str);
}

char	*ft_extend(char *str, char *buf, int size, int ret)
{
	char	*new;
	int		i;

	new = malloc(size + ret + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new[i] = str[i];
		i++;
	}
	while (i < ret)
	{
		new[size + i] = buf[i];
		i++;
	}
	new[size + ret] = '\0';
	free(str);
	return (new);
}
