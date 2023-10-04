/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhazil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:08:18 by yrhazil           #+#    #+#             */
/*   Updated: 2023/10/04 17:57:56 by yrhazil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	if (nb == 0)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	while (nb > 2)
	{
		nb -= a;
		a = a + 2;
		i++;
	}
	if (nb == 0)
		return (i);
	else
		return (0);
}
