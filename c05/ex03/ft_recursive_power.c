/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: makilic <makilic@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/30 08:35:07 by makilic       #+#    #+#                 */
/*   Updated: 2023/08/01 11:41:15 by makilic       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}

// int	main(void)
// {
// 	printf("%i", ft_recursive_power(5, 1));
// }