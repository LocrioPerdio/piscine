/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 10:42:39 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/06 13:52:50 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)

{
	int	temp;
	int	count;

	count = 0;
	while (count < (size -1))
	{
		if (tab[count] > tab[count + 1])
		{
			temp = tab[count];
			tab[count] = tab[count + 1];
			tab [count + 1] = temp;
			count = 0;
		}
		else
			count++;
	}
}
