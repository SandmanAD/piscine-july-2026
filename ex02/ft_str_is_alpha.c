/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adremzhy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 20:40:15 by adremzhy          #+#    #+#             */
/*   Updated: 2026/07/06 20:40:18 by adremzhy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	char *str = "asda313sd";
	ft_str_is_alpha(str);
	printf("%c", *str);
}

int ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		printf("no string");
		return 1;
	}
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		{
			printf("not only letter");
			return 0;
		}
		str++;
	}
	printf("letters");
	return 1;
}