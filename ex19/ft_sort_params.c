/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 13:03:00 by mrharoui          #+#    #+#             */
/*   Updated: 2024/12/19 13:44:02 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_swap_argv(char **a, char **b);
void	ft_output_argv(char **argv, int argc);
void	ft_sort_param(int argc, char *argv[], int i, int x, int y, int flag);

int	main(int argc, char *argv[])
{
	int	i;
	int	x;
	int	y;
	int	flag;

	i = 0;
	x = 0;
	y = 1;
	flag = 1;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	ft_sort_param(argc, argv, i, x, y, flag);
}

void	ft_sort_param(int argc, char *argv[], int i, int x, int y, int flag)
{
	while (flag == 1)
	{
		flag = 0;
		y = 1;
		x = 0;
		while (x < argc - 1)
		{
			x = y + 1;
			i = 0;
			while (argv[y][i] && argv[x][i])
			{
				if (argv[y][i] > argv[x][i])
				{
					ft_swap_argv(&argv[y], &argv[x]);
					flag = 1;
				}
				if (argv[y][i] < argv[x][i])       
					break;
				i++;
			}
			y++;
		}
	}
	ft_output_argv(argv, argc);
}

void	ft_swap_argv(char **a, char **b)
{
	char *tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_output_argv(char **argv, int argc)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (x < argc)
	{
		i = 0;
		while (argv[x][i])
		{
			write(1, &argv[x][i], 1);
			i++;
		}
		write(1, "\n", 1);
		x++;
	}
}
