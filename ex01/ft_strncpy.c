/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:04:37 by tsabri            #+#    #+#             */
/*   Updated: 2024/08/28 11:06:53 by tsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//TODO: Handle the i > dest_size
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;

	i = 0;
	while (i < n && *src != '\0' )
	{
		dest[i] = src[i];
		i++;
		src++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	str1[] = "Hello World";
// 	char	str2[] = "Oi Mate";
// 	char	*src = &str1[0];
// 	char	*dest = &str2[0];

// 	dest = ft_strncpy(dest, src, 2);
// 	printf("%s\n", str2);
// 	return (0);
// }
