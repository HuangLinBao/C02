/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:04:37 by tsabri            #+#    #+#             */
/*   Updated: 2024/08/29 12:58:21 by tsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//TODO: Handle the i > dest_size
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (i < n && src[i] != '\0' )
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	*src;
// 	char	*dest;

// 	src = "Hello";
// 	dest = "World1";
// 	printf("%s\n", ft_strncpy(dest, "Hello", 5));
// 	printf("%s\n", strncpy(dest, "Hello", 3));
// 	return (0);
// }
