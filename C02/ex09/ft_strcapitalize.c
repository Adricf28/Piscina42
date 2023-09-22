/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:27:08 by adcarmon          #+#    #+#             */
/*   Updated: 2023/07/14 22:31:41 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_lowcase(char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] += 32;
		count++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		count;
	int		upcase;

	count = 0;
	upcase = 1;
	ft_lowcase(str);
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			if (upcase == 1)
				str[count] -= 32;
			upcase = 0;
		}
		else if (str[count] >= '0' && str[count] <= '9')
			upcase = 0;
		else
			upcase = 1;
		count++;
	}
	return (str);
}
