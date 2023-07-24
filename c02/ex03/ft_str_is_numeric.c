/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: makilic <makilic@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/24 07:03:55 by makilic       #+#    #+#                 */
/*   Updated: 2023/07/24 08:33:26 by makilic       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str [i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main()
// {
// 	printf("%d", ft_str_is_numeric("0123456789"));
// 	printf("\n%d", ft_str_is_numeric("0123456789G"));
// 	printf("\n%d", ft_str_is_numeric("/asdfgqwert_@H"));
// }