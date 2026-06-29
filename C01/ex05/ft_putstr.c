/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 15:40:33 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/07 11:00:48 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)

{
	if (str != NULL)
	{
		while (*str != '\0')
		{
			write(1, str, 1);
			str++;
		}
	}
}
/*
int main(void)

{
	char *str1 = "hola compi!";
	char *str2 = "mimimimi";
	ft_putstr(str1);
	return(0);
}
*/
