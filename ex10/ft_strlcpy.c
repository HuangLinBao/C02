/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:20:21 by tsabri            #+#    #+#             */
/*   Updated: 2024/08/29 12:16:10 by tsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (ft_strlen(src) == 0)
		dest = "";
	else if (size < ft_strlen(src))
	{
		i = 0;
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	else
	{
		i = 0;
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

int	main(void)
{
	unsigned int	len1;
	unsigned int	len2;
	char			dest[10];

	len1 = ft_strlcpy(&dest[0], "Hello, World!", 10);
	printf("size is: %d\nDest is %s\n", len1, dest);
	len2 = strlcpy(&dest[0], "Hello, World!", 10);
	printf("size is: %d\nDest is %s\n", len2, dest);
	return (0);
}
