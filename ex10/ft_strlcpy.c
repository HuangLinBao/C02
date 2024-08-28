/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:20:21 by tsabri            #+#    #+#             */
/*   Updated: 2024/08/28 18:07:29 by tsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
	int	i;

	if (ft_strlen(src) == 0)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	else if (size >= ft_strlen(src))
	{
		i = 0;
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		return (ft_strlen(src));
	}
	else
	{
		i = 0;
		while (i < size)
		{
			dest[i] = src[i];
		}
		return (ft_strlen(src));
	}
}
