/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adremzhy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 23:41:35 by adremzhy          #+#    #+#             */
/*   Updated: 2026/07/08 23:42:04 by adremzhy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	putchar(char c)
{
	write(1, &c, 1);
}

void	xdigit(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	putchar(hex[c / 16]);
	putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str == 127)
		{
			write(1, "\\", 1);
			xdigit((unsigned char)*str);
		}
		else
		{
			putchar(*str);
		}
		str++;
	}
}
