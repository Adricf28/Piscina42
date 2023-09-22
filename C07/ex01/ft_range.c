/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:43:58 by adcarmon          #+#    #+#             */
/*   Updated: 2023/07/25 14:59:52 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range_arr;
	int	i;
	int	arrsize;

	i = 0;
	if (min >= max)
		return (NULL);
	arrsize = (max - min) + 1;
	range_arr = (int *) malloc(arrsize * sizeof(int));
	while (min < max)
		range_arr[i++] = min++;
	range_arr[i] = '\0';
	return (range_arr);
}

/*int	main(void)
{
	int min = 0;
	int max = 20;
	int i = 0;
	int	*intarr = ft_range(min, max);
	while (min < max)
	{
		printf("%d", intarr[i]);
		min++;
		i++;
	}
}*/
