/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 21:37:15 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/18 18:47:33 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

// process_file.c
void	print_file(char *name);
void	ft_strcpy(char *dest, char *src, int size);
char	*read_file(char *name);
char	*read_loop(int fd);
char	*ft_extend(char *str, char *buf, int size, int ret);

#endif