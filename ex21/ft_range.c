/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:22:08 by mrharoui          #+#    #+#             */
/*   Updated: 2024/11/06 13:54:29 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	tab = NULL;
	size = max - min;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * size);
	if (tab == NULL)
		return (NULL);
	while (i < size)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

/*int main()
{
	int	min = 9;
	int	max = 2;
	int	size = max - min;
	int	i = 0;
	int	*tab = ft_range(min, max);
	
	if (tab == NULL)
		printf("NULL\n");
	while (i < size)
	{
		printf("%d\n", 	tab[i]);
		i++;
	}
}*/
