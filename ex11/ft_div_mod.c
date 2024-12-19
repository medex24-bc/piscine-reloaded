/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:58:58 by mrharoui          #+#    #+#             */
/*   Updated: 2024/12/19 12:59:04 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

/*int main()
{
    int a = 23;
    int b = 12;
    int division = 0;
    int modulo = 0;
    int *div = &division;
    int *mod = &modulo;

    ft_div_mod(a, b, div, mod);
    printf("div: %d\n mod: %d\n", *div, *mod);
}*/