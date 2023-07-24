/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: makilic <makilic@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/24 07:04:20 by makilic       #+#    #+#                 */
/*   Updated: 2023/07/24 08:33:21 by makilic       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main()
// {
//        printf("%d", ft_str_is_uppercase("ASDFGHJKL"));
//        printf("\n%d", ft_str_is_uppercase("ASDFGHJkL"));
//        printf("\n%d", ft_str_is_uppercase("-123456789?ssd"));
// }