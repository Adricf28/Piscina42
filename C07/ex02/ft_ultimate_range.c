/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 23:20:25 by adcarmon          #+#    #+#             */
/*   Updated: 2023/07/25 15:00:08 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	arrsize;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arrsize = max - min;
	*range = (int *) malloc(arrsize * sizeof(int *));
	while (min < max)
		(*range)[i++] = min++;
	if ((*range)[i - 1] == max - 1)
		return (arrsize);
	else
		return (-1);
}
