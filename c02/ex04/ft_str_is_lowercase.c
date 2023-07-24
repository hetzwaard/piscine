/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: makilic <makilic@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/24 07:04:06 by makilic       #+#    #+#                 */
/*   Updated: 2023/07/24 08:33:24 by makilic       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main()
// {
// 	printf("%d", ft_str_is_lowercase("asdfqwerasdaswq"));
//         printf("\n%d", ft_str_is_lowercase("asdsaASDQQGDSsadasDSG"));
//         printf("\n%d", ft_str_is_lowercase("-465Ad8sdas48asSDhs"));
// }