/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: makilic <makilic@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/01 10:35:14 by makilic       #+#    #+#                 */
/*   Updated: 2023/08/01 17:20:21 by makilic       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}

// int main()
// {
// 	int input_number = 13;
// 	printf("%d", ft_is_prime(input_number));
// }