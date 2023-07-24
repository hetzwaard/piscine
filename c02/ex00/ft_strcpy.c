/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: makilic <makilic@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/24 06:49:55 by makilic       #+#    #+#                 */
/*   Updated: 2023/07/24 08:33:35 by makilic       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main()
// {
// 	char src[] = "gezellig";
// 	char src1[] = "gezellig";
// 	char dest[] = "Yo";
// 	char dest1[] = "Yo";
// 	printf("%s", ft_strcpy(dest, src));
// 	printf("\n%s", strcpy(dest1, src1));
// }
