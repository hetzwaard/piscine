/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: makilic <makilic@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/01 10:12:39 by makilic       #+#    #+#                 */
/*   Updated: 2023/08/01 22:04:43 by makilic       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 1)
	{
		return (1);
	}
	if (nb <= 0)
	{
		return (0);
	}
	i = 0;
	while (i <= nb / 2 && i <= 46341)
	{
		if (i * i == nb)
		{
			return (i);
		}
		if (i * i > nb)
		{
			return (0);
		}
		i++;
	}
	return (0);
}

// int 	main(void)
// {

// 	printf("%d", ft_sqrt(36));
// 	return (0);
// }
