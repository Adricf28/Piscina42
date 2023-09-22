/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 22:32:44 by adcarmon          #+#    #+#             */
/*   Updated: 2023/07/15 19:59:30 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	srclength;
	unsigned int	count;

	srclength = 0;
	count = 0;
	while (src[srclength] != '\0')
		srclength++;
	while ((size != 0) && (src[count] != '\0') && (count < (size - 1)))
	{
		dest[count] = src[count];
		count++;
	}
		dest[count] = '\0';
	return (srclength);
}
