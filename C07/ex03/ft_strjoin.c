/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adcarmon <adcarmon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:53:15 by adcarmon          #+#    #+#             */
/*   Updated: 2023/07/26 12:09:24 by adcarmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	len(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	i = 0;
	k = 1;
	res = "";
	while (i < size)
		k += len(strs[i++]) + len(sep);
	res = (char *) malloc(k * sizeof(char));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			res[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && strs[i + 1])
			res[k++] = sep[j++];
		i++;
	}
	res[k] = '\0';
	return (res);
}

/*int	main(void)
{
	char **bdarr = 0;
	int	strings = 0;
	char *splitter = 0;
	bdarr = (char **) malloc(strings * sizeof(char *));
	splitter = (char *) malloc(5 * sizeof(char));
	bdarr[0] = "hola";
	bdarr[1] = "-?";
	bdarr[2] = "DiAS";
	bdarr[3] = "¨#23-çç>X";
	bdarr[4] = "++¡'!232$&&//)";
	splitter = "----";
	printf("%s\n", ft_strjoin(strings, bdarr, splitter));
}*/
