/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 21:45:35 by adcarmon          #+#    #+#             */
/*   Updated: 2023/07/19 17:47:42 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	try(int boolean, int sol, int sign)
{
	if (boolean == 1)
	{
		if (sign % 2 == 0)
			return (sol);
		else
			return (-sol);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	count;
	int	sign;
	int	boolean;
	int	sol;

	sol = 0;
	count = 0;
	sign = 0;
	while ((str[count] >= 9 && str[count] <= 13) || (str[count] == ' '))
		count++;
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			sign++;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		sol = sol * 10 + str[count] - '0';
		count++;
		boolean = 1;
	}
	return (try(boolean, sol, sign));
}
