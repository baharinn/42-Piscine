/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barin <barin@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:23:39 by barin             #+#    #+#             */
/*   Updated: 2022/07/31 12:56:38 by barin            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		tut;

	i = 0;
	while (i != size / 2)
	{
		tut = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tut;
		i++;
	}
}
