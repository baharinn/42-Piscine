/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barin <barin@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:09:14 by barin             #+#    #+#             */
/*   Updated: 2022/08/06 17:09:45 by barin            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0' && (b < nb))
	{
		dest[a + b] = src [b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}

#include <stdio.h>
int	main()
{
	char src[] = "dear";
	char dest[] = "hello ";
	printf("%s", ft_strncat(dest, src, 2));
}

