/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:34:01 by adcarmon          #+#    #+#             */
/*   Updated: 2023/07/12 12:56:08 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_draw(int x, char left, char mid, char right)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar(left);
		else if (i == x - 1)
			ft_putchar(right);
		else
			ft_putchar(mid);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int j;

	j = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (j < y)
	{
		if (j == 0)
			ft_draw(x, '/', '*', '\\');
		else if (j == y - 1)
			ft_draw(x, '\\', '*', '/');
		else
			ft_draw(x, '*', ' ', '*');
		j++;
	}
}
