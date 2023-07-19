/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makilic <makilic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 20:16:52 by makilic           #+#    #+#             */
/*   Updated: 2023/07/18 20:16:59 by makilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		a;
	char	c;

	a = 0;
	while (a <= 9)
	{
		c = a + '0';
		write(1, &c, 1);
		a++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	write(1, "\n", 1);
// }
