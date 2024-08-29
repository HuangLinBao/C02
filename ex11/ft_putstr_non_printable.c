/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:40:23 by tsabri            #+#    #+#             */
/*   Updated: 2024/08/29 10:05:09 by tsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	temp;
	unsigned char	*cursor;
	char			*hex_symbols;

	hex_symbols = "0123456789abcdef";
	cursor = (unsigned char *)str;
	while (*cursor != '\0')
	{
		if (*cursor >= ' ' && *cursor <= '~')
			ft_putchar(*cursor);
		else
		{
			ft_putchar('\\');
			temp = *cursor / 16;
			ft_putchar(hex_symbols[temp]);
			temp = *cursor % 16;
			ft_putchar(hex_symbols[temp]);
		}
		cursor++;
	}
}

// int	main(void)
// {
// 	char	*str;

// 	str = "Coucou\ntu vas bien ?";
// 	ft_putstr_non_printable(str);
// 	return (0);
// }
