/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:09:24 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/13 12:52:54 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)

{
	while (*str != '\0')
	{
		if ((*str >= 65 && *str <= 90))
			str++;
		else
			return (0);
	}
	return (1);
}

/*int    main(void)
{
	char	*str;

	str = "HOLI";
	printf("%d", ft_str_is_uppercase(str));
	return (0);
}
}*/
