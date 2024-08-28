/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:32:18 by tsabri            #+#    #+#             */
/*   Updated: 2024/08/28 11:56:17 by tsabri           ###   ########.fr       */
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

int	ft_str_is_numeric(char *str)
{
	int	is_numeric;

	if (ft_strlen(str) == 0)
		return (1);
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			is_numeric = 1;
		else
			return (0);
		str++;
	}
	return (is_numeric);
}

// int	main(void)
// {
// 	char str[] = "1222A34523";
// 	char *s = &str[0];
// 	int i = ft_str_is_numeric(s);
// 	printf("%d\n", i);
// 	return (0);
// }