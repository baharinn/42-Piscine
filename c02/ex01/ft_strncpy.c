/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barin <barin@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 20:32:05 by barin             #+#    #+#             */
/*   Updated: 2022/08/03 16:37:08 by barin            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	e;

	e = 0;
	while ((src[e] != '\0') && (e < n))
	{
		dest[e] = src[e];
		e++;
	}
	while (e < n)
	{
		dest [e] = '\0';
		e++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main ()
{
	char	src[] = "elif";
	char	dest[] = "bahar";
	unsigned int	n;
	
	n = 2;

	ft_strncpy(dest, src, 2);
	printf("%s", dest);
	return (0);
}
*/
