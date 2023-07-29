/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: makilic <makilic@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/27 09:49:20 by makilic       #+#    #+#                 */
/*   Updated: 2023/07/27 09:57:25 by makilic       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

// int	main()
// {
// 	char str[] = "Absoluetly have to have dark to have light";
// 	char find[] = "sarmasik";
// 	printf("%s", ft_strstr(str, find));
// }