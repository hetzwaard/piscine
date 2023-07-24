/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: makilic <makilic@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/24 06:59:45 by makilic       #+#    #+#                 */
/*   Updated: 2023/07/24 08:33:29 by makilic       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str [i] <= 'Z')
			|| (str [i] >= 'a' && str [i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main()

// {
// 	printf("%d", ft_str_is_alpha("abcdefghijkl"));
// 	printf("\n%d", ft_str_is_alpha("abc1defghijkl"));
// 	printf("\n%d", ft_str_is_alpha("-_134556efghij67"));
// }
