/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barin <barin@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:29:54 by barin             #+#    #+#             */
/*   Updated: 2022/07/28 18:13:55 by barin            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void atama(char a, char b, char c){
}
	write(1,&a,1);
	write(1,&b,1);
	write(1,&c,1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
;
				if (a != '7'){
					atama(a,b,c);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

