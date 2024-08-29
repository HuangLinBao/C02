/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:04:37 by tsabri            #+#    #+#             */
/*   Updated: 2024/08/29 13:25:41 by tsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//TODO: Handle the i > dest_size
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (i <= n && src[i] != '\0' )
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

// int	main(void)
// {
// 	char src[] = "Hello";
// 	char dest[] = "World1";
// 	char dest1[] = "World1";

// 	printf("%s\n", ft_strncpy(dest, src, 5));
// 	printf("%s\n", strncpy(dest1, src, 5));
// 	return (0);
// }
