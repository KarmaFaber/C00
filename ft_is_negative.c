/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolotar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 09:12:32 by mzolotar          #+#    #+#             */
/*   Updated: 2024/05/30 09:32:19 by mzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{		
		write (1, "P", 1);
	}
}
/*
int main() {
    
    ft_is_negative(0);
    ft_is_negative(-7);
    ft_is_negative(45);
    return 0;
}*/
