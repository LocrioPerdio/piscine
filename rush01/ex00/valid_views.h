/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_views.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 12:48:54 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/08 18:36:10 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALID_VIEWS_H
# define VALID_VIEWS_H

int	is_valid_view_row_l(int row, char **str);
int	is_valid_view_row_r(int row, char **str);
int	is_valid_view_col_u(int col, char **str);
int	is_valid_view_col_d(int col, char **str);
int	is_valid_views(int row, int col, char **str);

#endif