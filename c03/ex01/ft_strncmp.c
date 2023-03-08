/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barin <barin@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 21:29:40 by barin             #+#    #+#             */
/*   Updated: 2022/08/06 11:43:32 by barin            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char *s1="bahce";
	char *s2="bahar";
	int ret;

	ret = ft_strncmp(s1, s2, 4);
	if (ret<0)
	printf("s1 < s2");
	else if (ret>0)
	printf("s1 > s2");
	else
	printf("s1 = s2");
}
*/
