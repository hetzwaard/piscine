/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: makilic <makilic@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/24 06:58:25 by makilic       #+#    #+#                 */
/*   Updated: 2023/07/24 08:33:32 by makilic       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main()
// {
// 	char src[] = "Merhaba";
// 	char dest[] = "Dunya1";
// 	char dest1[] = "Dunya2";

// 	printf("%s", ft_strncpy(dest, src, 3));
// 	printf("\n%s", strncpy(dest1, src, 3));
// 	printf("\n%s", ft_strncpy(dest, src, 5));
// 	printf("\n%s", strncpy(dest1, src, 5));
// 	printf("\n%s", ft_strncpy(dest, src, 7));
// 	printf("\n%s", strncpy(dest1, src, 7));
// }