/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barin <barin@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 20:36:04 by barin             #+#    #+#             */
/*   Updated: 2022/08/06 17:43:22 by barin            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
:
#include <stdio.h>

int	main()
{
	printf("%d", ft_strcmp("bahar", "baharr"));
	printf("\n%d", ft_strcmp("baharr", "bahar"));
	printf("\n%d", ft_strcmp("bahar", "bahar"));
	printf("\n%d", ft_strcmp("bahar", "bahce"));
}

