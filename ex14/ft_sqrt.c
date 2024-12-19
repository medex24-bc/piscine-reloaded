/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 13:00:13 by mrharoui          #+#    #+#             */
/*   Updated: 2024/12/19 13:00:46 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	int x;

	x = 0;
	if (nb < 0)
		return (0);
	while ((x * x) != nb && x <= nb / 2)
		x++;
	if (x * x == nb)
		return (x);
	return (0);
}

/*int main(void) {
    printf("ft_sqrt(0) = %d\n", ft_sqrt(0));
    printf("ft_sqrt(1) = %d\n", ft_sqrt(1));
    printf("ft_sqrt(4) = %d\n", ft_sqrt(4));
    printf("ft_sqrt(9) = %d\n", ft_sqrt(9));
    printf("ft_sqrt(16) = %d\n", ft_sqrt(16));
    printf("ft_sqrt(2) = %d\n", ft_sqrt(2));
    printf("ft_sqrt(10) = %d\n", ft_sqrt(10));
    printf("ft_sqrt(-1) = %d\n", ft_sqrt(-1));
    printf("ft_sqrt(-16) = %d\n", ft_sqrt(-16));

    return 0;
}*/
