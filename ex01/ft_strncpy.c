/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:04:37 by tsabri            #+#    #+#             */
/*   Updated: 2024/08/29 12:21:37 by tsabri           ###   ########.fr       */
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
	return (dest);
}

// int	main(void)
// {
// 	printf("%s\n"ft_strncpy("World1", "Hello"))
// 	return (0);
// }
