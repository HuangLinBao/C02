/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:01:13 by tsabri            #+#    #+#             */
/*   Updated: 2024/08/28 12:08:09 by tsabri           ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
{
	int	is_printable;

	if (ft_strlen(str) == 0)
		return (1);
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 127)
			is_printable = 1;
		else
			return (0);
		str++;
	}
	return (is_printable);
}

// int	main(void)
// {
// 	char str[] = "ddfhdfh";
// 	char *s = &str[0];
// 	int i = ft_str_is_printable(s);
// 	printf("%d\n", i);
// 	return (0);
// }