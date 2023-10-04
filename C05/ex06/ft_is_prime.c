/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhazil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:11:04 by yrhazil           #+#    #+#             */
/*   Updated: 2023/10/04 23:09:22 by yrhazil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < (nb / i))
	{
		if (nb % i == 0)
		{
			return (0);
		}
		else
			i++;
	}
	return (1);
}
