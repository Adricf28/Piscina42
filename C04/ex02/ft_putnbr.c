/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:44:09 by adcarmon          #+#    #+#             */
/*   Updated: 2023/07/23 19:13:37 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	count;
	int	arr[10];

	count = 0;
	if (nb == 0)
		ft_putchar(nb + '0');
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (nb > 0)
	{
		arr[count] = nb % 10;
		count++;
		nb /= 10;
	}
	while (--count != -1)
		ft_putchar(arr[count] + '0');
}

int	main(void)
{
	ft_putnbr(42);
}
