/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:47:14 by tsabri            #+#    #+#             */
/*   Updated: 2024/08/28 12:08:26 by tsabri           ###   ########.fr       */
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

int	ft_str_is_uppercase(char *str)
{
	int	is_uppercase;

	if (ft_strlen(str) == 0)
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			is_uppercase = 1;
		else
			return (0);
		str++;
	}
	return (is_uppercase);
}

// int	main(void)
// {
// 	char str[] = "";
// 	char *s = &str[0];
// 	int i = ft_str_is_uppercase(s);
// 	printf("%d\n", i);
// 	return (0);
// }