/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:17:45 by adcarmon          #+#    #+#             */
/*   Updated: 2023/07/10 18:23:37 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	save_value;
	int	pos;
	int	next_pos;

	pos = 0;
	while (pos < size)
	{
		next_pos = pos + 1;
		while (next_pos < size)
		{
			if (tab[pos] > tab[next_pos])
			{
				save_value = tab[pos];
				tab[pos] = tab[next_pos];
				tab[next_pos] = save_value;
			}
			next_pos++;
		}
		pos++;
	}
}
