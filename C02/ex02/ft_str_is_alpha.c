/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:47:54 by adcarmon          #+#    #+#             */
/*   Updated: 2023/07/15 12:24:12 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_str_is_alpha(char *str)
{
	int		count;
	char	pos;

	count = 0;
	while (str[count] != '\0')
	{
		pos = str[count];
		if ((pos >= 'a' && pos <= 'z') || (pos >= 'A' && pos <= 'Z'))
			count++;
		else
			return (0);
	}
	return (1);
}
