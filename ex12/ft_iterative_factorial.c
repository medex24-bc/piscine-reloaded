/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:59:08 by mrharoui          #+#    #+#             */
/*   Updated: 2024/12/19 12:59:32 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = nb - 1;
	while (x > 0)
	{
		nb = nb * x;
		x--;
	}
	return (nb);
}

/*int main()
{
    printf("%d\n", ft_iterative_factorial(8));
    return (0);
}*/