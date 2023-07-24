/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: makilic <makilic@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/20 16:23:03 by makilic       #+#    #+#                 */
/*   Updated: 2023/07/24 12:01:59 by makilic       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int	main()
// {
// 	int	a;
// 	int	b;
// 	a = 5;
// 	b = 8;
// 	ft_swap(&a, &b);
// 	printf("%d \n", a);
// 	printf("%d", b);
// }