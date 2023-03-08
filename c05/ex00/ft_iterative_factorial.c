/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barin <barin@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:15:15 by barin             #+#    #+#             */
/*   Updated: 2022/08/08 12:01:55 by barin            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (result);
}
/*
#include <stdio.h>
int	main (void)
{
	printf("%d", ft_iterative_factorial(4));
}
*/
