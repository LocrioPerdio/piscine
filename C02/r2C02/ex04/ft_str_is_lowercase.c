/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:26:51 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/13 12:52:34 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)

{
	while (*str != '\0')
	{
		if ((*str >= 97 && *str <= 122))
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
	printf("%d", ft_str_is_lowercase(str));
	return (0);
}
*/
