/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 12:50:32 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/08 18:35:36 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALID_H
# define VALID_H

void	is_valid(int row, int col, char **str, char *vals2);
int		is_valid_row(int row, char **str);
int		is_valid_col(int col, char **str);
int		is_correct(char **str);

#endif