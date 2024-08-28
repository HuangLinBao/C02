/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:08:55 by tsabri            #+#    #+#             */
/*   Updated: 2024/08/28 11:57:41 by tsabri           ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;

	if (ft_strlen(str) == 0)
		return (1);
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
			is_alpha = 1;
		else
			return (0);
		str++;
	}
	return (is_alpha);
}

// int	main(void)
// {
// 	char str[] = "OiMate";
// 	char *s = &str[0];
// 	int i = ft_str_is_alpha(s);
// 	printf("%d\n", i);
// 	return (0);
// }