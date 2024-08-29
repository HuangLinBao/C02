/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:28:10 by tsabri            #+#    #+#             */
/*   Updated: 2024/08/29 11:55:12 by tsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_capitalize(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c);
	else
		return (c);
}

int	ft_is_letter(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (ft_is_letter(str[0]))
		str[0] = ft_capitalize(str[0]);
	i = 1;
	while (str[i] != '\0')
	{
		if (!(ft_is_letter(str[i - 1])) && !(ft_is_numeric(str[i - 1])))
		{
			if (ft_is_letter(str[i]))
				str[i] = ft_capitalize(str[i]);
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "HELLO";
// 	char *s = &str[0];
// 	s = ft_strcapitalize(s);
// 	printf("%s\n", str);
// 	return (0);
// }