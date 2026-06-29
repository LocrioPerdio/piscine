/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 11:22:02 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/16 19:16:36 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)

{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
/*int main() {
  
  char s1[] = "holi";
  char s2[] = "holo";
  ft_strcmp(s1, s2);
  printf("%d", ft_strcmp(s1,s2));
  return 0;
}
*/
