/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_program_name.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: makilic <makilic@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/30 02:17:44 by makilic       #+#    #+#                 */
/*   Updated: 2023/07/31 15:34:32 by makilic       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (argv[0][i] != '\0' && argc)
	{
		ft_putchar(argv[0][i]);
		++i;
	}
	ft_putchar('\n');
	return (0);
}
