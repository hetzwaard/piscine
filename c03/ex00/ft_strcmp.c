/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: makilic <makilic@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/27 09:43:19 by makilic       #+#    #+#                 */
/*   Updated: 2023/07/29 13:04:59 by makilic       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int	main()
// {
// 	printf("%d", ft_strcmp("Merhaba", "Merhaba1"));
// 	printf("\n%d", ft_strcmp("Merhaba", "Me"));
// 	printf("\n%d", ft_strcmp("Me", "Merhaba"));
// 	printf("\n%d", ft_strcmp("Merhaba", "Merhaba"));
// }