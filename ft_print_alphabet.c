/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolotar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 09:08:03 by mzolotar          #+#    #+#             */
/*   Updated: 2024/05/30 08:41:27 by mzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	count;

	count = 97;
	while (count >= 97 && count <= 122)
	{
		write(1, &count, 1);
		count ++;
	}
}
/*#include <stdio.h>

int	main() {
    
    ft_print_alphabet();
    
    return 0;
}*/
