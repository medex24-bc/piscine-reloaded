/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 13:03:00 by mrharoui          #+#    #+#             */
/*   Updated: 2024/12/21 10:38:07 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_swap_argv(char **a, char **b);
void	ft_output_argv(char **argv, int argc);
int		ft_sort_param(int argc, char *argv[], int x, int y);
int		ft_strlen(char *str);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	int	flag;

	x = 0;
	y = 1;
	flag = 1;
	if (argc < 2)
		return (1);
	if (argc == 2)
	{
		while (argv[y][x])
			ft_putchar(argv[y][x++]);
		ft_putchar('\n');
		return (0);
	}
	while (flag == 1)
	{
		flag = 0;
		y = 1;
		x = 0;
		flag = ft_sort_param(argc, argv, x, y);
	}
	ft_output_argv(argv, argc);
}

int	ft_sort_param(int argc, char *argv[], int x, int y)
{
	int	i;

	i = 0;
	while (x < argc - 1)
	{
		x = y + 1;
		i = 0;
		while (argv[y][i] && argv[x][i])
		{
			if (argv[y][i] > argv[x][i] || (argv[y][i] == argv[x][i]
				&& argv[y][i] > argv[x][i + 1]))
			{
				ft_swap_argv(&argv[y], &argv[x]);
				return (1);
			}
			if (argv[y][i] < argv[x][i])
				break ;
			i++;
		}
		y++;
	}
	return (0);
}

void	ft_swap_argv(char **a, char **b)
{
	char	*tmp;

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
			ft_putchar(argv[x][i]);
			i++;
		}
		ft_putchar('\n');
		x++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}



int	ft_sort_param(int argc, char *argv[], int x, int y)
{
	int	i;

	while (y < argc - 1)
	{
		x = y + 1;
		while (x < argc)
		{
			i = 0;
			while (argv[y][i] && argv[x][i] && argv[y][i] == argv[x][i])
				i++;
			if (argv[y][i] > argv[x][i])
			{
				ft_swap_argv(&argv[y], &argv[x]);
				return (1);
			}
			x++;
		}
		y++;
	}
	return (0);
}

