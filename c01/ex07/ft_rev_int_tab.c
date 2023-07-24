/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: makilic <makilic@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/20 23:22:28 by makilic       #+#    #+#                 */
/*   Updated: 2023/07/24 09:56:37 by makilic       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;	
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}

/*int   main()
{
	int tab[6] = {0, 1, 2, 3, 4, 5};
	int size = 6;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d",
    tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}*/