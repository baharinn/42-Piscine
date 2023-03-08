/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barin <barin@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:51:16 by barin             #+#    #+#             */
/*   Updated: 2022/08/03 17:23:18 by barin            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str [x] >= 65 && str [x] <= 90))
		{
			return (0);
		}
		x++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_str_is_uppercase("SHGDJFHFDHGF"));
	printf("\n%d", ft_str_is_uppercase("DMLKGNLNF2NK"));
}
*/
