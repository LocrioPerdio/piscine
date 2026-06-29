/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:11:14 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/13 12:51:26 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
//#include <stdio.h>
{
	while (*str != '\0')
	{
		if (*str >= 48 && *str <= 57)
			str++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	*str;

	str = "holi";
	printf("%d", ft_str_is_numeric(str));
	return (0);
}
*/
