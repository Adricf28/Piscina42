/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:13:32 by adcarmon          #+#    #+#             */
/*   Updated: 2023/07/10 13:15:36 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	change;
	int	count;

	count = 0;
	size--;
	while (count < size)
	{
		change = tab[count];
		tab[count] = tab[size];
		tab[size] = change;
		size--;
		count++;
	}
}
