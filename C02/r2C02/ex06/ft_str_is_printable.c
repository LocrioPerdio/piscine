/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:44:30 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/13 13:49:21 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)

{
	while (*str != '\0')
	{
		if ((*str >= 32 && *str <= 126))
			str++;
		else
			return (0);
	}
	return (1);
}

/*int    main(void)
{
	char	*str;

	str = "\nHOLI";
	printf("%d", ft_str_is_printable(str));
	return (0);
}
*/
