/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barin <barin@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:59:55 by barin             #+#    #+#             */
/*   Updated: 2022/08/03 17:31:50 by barin            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str [x] >= 32 && str [x] <= 126))
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
	printf("%d", ft_str_is_printable("J*-3032HFH"));
	printf("\n%d", ft_str_is_printable("Hl-92\t39jglkj"));
	printf("\n%d", ft_str_is_printable("kjds\nhjgsdshgfs"));
}
*/
