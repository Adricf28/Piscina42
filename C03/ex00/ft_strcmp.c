/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:55:29 by adcarmon          #+#    #+#             */
/*   Updated: 2023/07/25 15:26:42 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		count;

	count = 0;
	while (s1[count] != '\0' || s2[count] != '\0')
	{
		if (s1[count] == s2[count])
			count++;
		else if (s1[count] == '\0')
			return (-s2[count]);
		else if (s2[count] == '\0')
			return (s1[count]);
		else
			return (s1[count] - s2[count]);
	}
	return (0);
}

/*int	main(void)
{
	char s1[] = "hola";
	char s2[] = "holaa";
	printf("OWN: %d\n", ft_strcmp(s1, s2));
}*/
