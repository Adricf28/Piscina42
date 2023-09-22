/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 20:36:19 by adcarmon          #+#    #+#             */
/*   Updated: 2023/07/20 21:50:15 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	(void)argc;
	i = 0;
	j = 0;
	while (argv[i][j] != '\0')
	{
		write(1, &argv[i][j], 1);
		j++;
	}
	write(1, "\n", 1);
}
