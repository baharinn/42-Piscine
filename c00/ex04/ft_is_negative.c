/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barin <barin@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 09:32:36 by barin             #+#    #+#             */
/*   Updated: 2022/07/28 16:36:56 by barin            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{	
	if (n < 0)
		write(1, "N", 1);
   else if (n == 0)
        write(1, "S", 1);
   else if (n >= 0)
		write(1, "P", 1);
}

int main()
{
    ft_is_negative(0);
}
