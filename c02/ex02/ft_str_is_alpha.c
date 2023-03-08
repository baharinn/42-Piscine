/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barin <barin@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 09:43:14 by barin             #+#    #+#             */
/*   Updated: 2022/08/03 17:58:23 by barin            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	shortif(char letter)
{
	if (letter >= 'A' && letter <= 'Z')
		return (1);
	else if (letter >= 'a' && letter <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (shortif(str[x]) == 0)
			return (0);
		x++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_str_is_alpha("abcdefghijkl"));
	printf("\n%d", ft_str_is_alpha("abc1defghijkl"));
}
*/
