/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:10:13 by adcarmon          #+#    #+#             */
/*   Updated: 2023/07/26 11:32:39 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	count2;
	unsigned int	destlength;

	count = 0;
	count2 = 0;
	destlength = ft_strlen(dest);
	count2 = destlength;
	if (size <= destlength || size == 0)
		return (ft_strlen(src) + size);
	while (src[count] != '\0' && count2 < size - 1)
		dest[count2++] = src[count++];
	dest[count2] = '\0';
	return (destlength + ft_strlen(src));
}

/*int	main(void)
{
	char src[] = "buenas";
	char dest[200] = "hola";
	char dest2[200] = "hola";
	printf("OWN LENGTH: %u\n", ft_strlcat(dest, src, 9));
	printf("OWN DEST LENGTH: %s\n", dest);
	printf("STRLCAT LENGTH: %lu\n", strlcat(dest2, src, 9));
	printf("STRLCAT DEST LENGTH: %s\n", dest2);
}*/
