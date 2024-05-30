/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolotar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 09:40:45 by mzolotar          #+#    #+#             */
/*   Updated: 2024/05/30 08:46:14 by mzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	count;

	count = 122;
	while (count >= 97)
	{	
		write(1, &count, 1);
		count--;
	}
}
/*#include <stdio.h>
int main() {
    
    ft_print_reverse_alphabet();
    return 0;
}*/
