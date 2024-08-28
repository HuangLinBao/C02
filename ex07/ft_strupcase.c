/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:11:56 by tsabri            #+#    #+#             */
/*   Updated: 2024/08/28 16:06:28 by tsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// TODO: Revise it back to see what will be submitted.
char	ft_capitalize(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c);
	else
		return (c);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = ft_capitalize(str[i]);
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char arr[] = "O/i mAte";
// 	char *result = &arr[0];
// 	result = ft_strupcase(result);
// 	printf("%s", arr);
// 	return (0);
// }