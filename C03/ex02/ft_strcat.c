/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhazil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:26:42 by yrhazil           #+#    #+#             */
/*   Updated: 2023/09/24 17:08:07 by yrhazil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	a = 0;
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
