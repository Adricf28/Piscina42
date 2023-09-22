/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 21:44:29 by adcarmon          #+#    #+#             */
/*   Updated: 2023/07/09 12:03:01 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c);

void	ft_top(int total)
{
	int	count;

	count = 1;
	while (count <= total)
	{
		if (count == 1)
			ft_putchar('/');
		else if (count == total)
			ft_putchar('\\');
		else
			ft_putchar('*');
		count++;
	}
}

void	ft_mid(int total)
{
	int	count;

	count = 1;
	while (count <= total)
	{
		if (count == 1 || count == total)
			ft_putchar('*');
		else
			ft_putchar(' ');
		count++;
	}
}

void	ft_bot(int total)
{
	int	count;

	count = 1;
	while (count <= total)
	{
		if (count == 1)
			ft_putchar('\\');
		else if (count == total)
			ft_putchar('/');
		else
			ft_putchar('*');
		count++;
	}
}

void	rush(int x, int y)
{
	int	count;

	count = 1;
	while (count <= y)
	{
		if (count == 1)
			ft_top(x);
		else if (count == y)
			ft_bot(x);
		else
			ft_mid(x);
		ft_putchar('\n');
		count++;
	}
}
