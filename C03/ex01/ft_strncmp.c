/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:15:21 by adcarmon          #+#    #+#             */
/*   Updated: 2023/07/15 21:45:36 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((s1[count] != '\0' || s2[count] != '\0') && (count < n))
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
	char s2[] = "hol";
	printf("OWN: %d\n", ft_strncmp(s1, s2, 4));
	printf("STRNCMP: %d\n", strncmp(s1, s2, 4));
}*/
