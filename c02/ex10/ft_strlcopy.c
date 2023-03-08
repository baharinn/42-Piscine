/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barin <barin@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:09:15 by barin             #+#    #+#             */
/*   Updated: 2022/08/03 17:53:03 by barin            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcopy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	size -= 1;
	i = 0;
	while (src[i] != '\0' && i <= size -1)
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (i);
}
/*
#include <stdio.h>
int main ()
{
	char	src[] = "world!";
	char	dest[] = "hello ";

	printf("%d | %s", ft_strlcpy(dest, src, 2), dest);
}
*/
