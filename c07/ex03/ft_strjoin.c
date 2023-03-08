/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barin <barin@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 20:56:38 by barin             #+#    #+#             */
/*   Updated: 2022/08/10 21:29:51 by barin            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}	
	s[c] = '\0';
	return (s);
}
/*
#include<stdio.h>
int	main(void)
{
	char	*tab[5];
	tab[0] = "elma";
	tab[1] = "çilek";
	tab[2]	= "muz";
	tab[3] = "karpuz";
	tab[4] = "erik";
	printf("%s", ft_strjoin(5, tab, " - "));
	return (0);
}
*/
