/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 15:18:33 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/05 18:57:08 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	c;
	int	d;

	if (*b != 0)
	{
		c = *a / *b;
		d = *a % *b;
		*a = c;
		*b = d;
	}
}
/*
int main(void)
{
	int	a;
	int	b;

	a = 7;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	return(0);
}
*/
