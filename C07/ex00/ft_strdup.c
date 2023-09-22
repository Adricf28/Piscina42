/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:15:19 by adcarmon          #+#    #+#             */
/*   Updated: 2023/07/23 12:17:39 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>
#include <string.h>*/

char	*ft_strdup(char *src)
{
	char	*dupped;
	int		i;
	int		srclen;

	i = 0;
	srclen = 1;
	while (src[srclen])
		srclen++;
	dupped = (char *) malloc(srclen * sizeof(char));
	while (src[i])
	{
		dupped[i] = src[i];
		i++;
	}
	dupped[i] = '\0';
	return (dupped);
}

/*int	main(void)
{
	char str[] = "hola buenas tardes que tal estamos";
	printf("PROPIA: %s\n", ft_strdup(str));
	printf("ORIGINAL: %s\n", strdup(str));
}*/
