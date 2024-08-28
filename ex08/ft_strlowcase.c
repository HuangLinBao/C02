/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:57:41 by tsabri            #+#    #+#             */
/*   Updated: 2024/08/28 16:06:53 by tsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// TODO: Revise it back to see what will be submitted.
char	ft_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else if (c >= 'a' && c <= 'z')
		return (c);
	else
		return (c);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = ft_lowercase(str[i]);
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char arr[] = "Oi m/Ate";
// 	char *result = &arr[0];
// 	result = ft_strlowcase(result);
// 	printf("%s", arr);
// 	return (0);
// }