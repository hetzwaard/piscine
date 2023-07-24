/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: makilic <makilic@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/20 23:21:44 by makilic       #+#    #+#                 */
/*   Updated: 2023/07/24 09:56:29 by makilic       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main()
// {
// 	char *c = "Hello World";
// 	printf("%d", ft_strlen(c));
// }