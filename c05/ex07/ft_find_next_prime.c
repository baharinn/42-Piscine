/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barin <barin@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:32:37 by barin             #+#    #+#             */
/*   Updated: 2022/08/08 11:53:22 by barin            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		else
			i += 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0 && nb <= 2147483647)
		nb++;
	if (ft_is_prime(nb) == 0)
		return (0);
	else
		return (nb);
}
/*
#include <stdio.h>
int main()
{
	int result = ft_find_next_prime(90);
	printf("%d", result);
}
*/
