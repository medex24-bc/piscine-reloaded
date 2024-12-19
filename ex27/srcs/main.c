/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrharoui <mrharoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:58:49 by mrharoui          #+#    #+#             */
/*   Updated: 2024/12/19 12:47:48 by mrharoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/display.h"

void	ft_read_file(int fd);

int	main(int argc, char *argv[])
{
	int	fd;

	if (argc < 2)
	{
		write(1, "File name missing\n", 18);
		return (-1);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments\n", 19);
		return (-2);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (-3);
	ft_read_file(fd);
	close(fd);
	return (0);
}

void	ft_read_file(int fd)
{
	char	buf[BUFFER_SIZE + 1];
	int		i;
	int		bytes_read;

	i = 0;
	bytes_read = -1;
	while (bytes_read != 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			write(1, "Cannot read file\n", 17);
			return ;
		}
		if (bytes_read != 0)
		{
			i = 0;
			while (buf[i] && i < bytes_read)
			{
				write(1, &buf[i], 1);
				i++;
			}
		}
	}
	buf[i] = '\0';
}
