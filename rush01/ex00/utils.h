/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 12:47:04 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/08 18:36:11 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

void	get_pos_first_empt(int *row, int *col, char **str, char *vals);
int		is_full(char **str);
void	print_sol(char **str);
int		ft_strcmp(char *str1, char *str2);
int		recursive_resolver(char **str);

#endif