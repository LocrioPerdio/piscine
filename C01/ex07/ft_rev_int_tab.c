/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 09:50:45 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/06 10:39:14 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)

{
	int	pzero;
	int	pfinal;
	int	c;

	pzero = 0;
	pfinal = size -1;
	while (pzero < pfinal)
	{
		c = tab[pzero];
		tab[pzero] = tab[pfinal];
		tab[pfinal] = c;
		pzero++;
		pfinal--;
	}
}
/*
int main(void)

{
	int arr[] = {0, 1, 2, 3, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	ft_rev_int_tab(arr, n);
	return(0);	
}
*/
