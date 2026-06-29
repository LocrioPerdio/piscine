/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 11:16:51 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/08 18:10:00 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

void	free_grid(char **str);
void	free_vals(char *vals);
char	*init_vals(void);
char	**board_create(void);

#endif