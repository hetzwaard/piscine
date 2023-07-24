/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: makilic <makilic@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/20 16:30:26 by makilic       #+#    #+#                 */
/*   Updated: 2023/07/24 12:01:56 by makilic       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// int	main()
// {
// 	int a;
// 	int b;
// 	int x;
// 	int y;
// 	a = 50;
// 	b = 10;
// 	ft_div_mod(a, b, &x, &y);
// 	printf("%d\n", x);
// 	printf("%d", y);
// }