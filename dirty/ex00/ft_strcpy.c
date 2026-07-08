/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adremzhy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 12:08:35 by adremzhy          #+#    #+#             */
/*   Updated: 2026/07/06 12:08:36 by adremzhy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);
/*
int main(void)
{
	char *src = "the world is ours";
	char dest[50];
	ft_strcpy(dest, src);
	int i = 0;
	while (dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}
	printf("\n");
}
*/

char	*ft_strcpy(char *dest, char *src)
{
	char	*head;

	*head = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (head);
}
