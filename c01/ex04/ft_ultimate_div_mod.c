/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: makilic <makilic@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/20 22:50:12 by makilic       #+#    #+#                 */
/*   Updated: 2023/07/24 12:01:52 by makilic       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int main()
// {
// 	int a;
// 	int	b;
// 	a = 50;
// 	b = 15;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d | %d", a, b);
// }