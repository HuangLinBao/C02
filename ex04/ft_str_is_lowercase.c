/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:42:23 by tsabri            #+#    #+#             */
/*   Updated: 2024/08/28 11:55:43 by tsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

int	ft_str_is_lowercase(char *str)
{
	int	is_lowercase;

	if (ft_strlen(str) == 0)
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			is_lowercase = 1;
		else
			return (0);
		str++;
	}
	return (is_lowercase);
}

// int	main(void)
// {
// 	char str[] = "";
// 	char *s = &str[0];
// 	int i = ft_str_is_lowercase(s);
// 	printf("%d\n", i);
// 	return (0);
// }