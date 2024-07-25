/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:03:07 by rpereira          #+#    #+#             */
/*   Updated: 2024/07/08 16:49:20 by rpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

#include <fcntl.h>

#define BUFFER_SIZE 4096

void	ft_putstr_fd(int fd, const char *str)
{
	while (*str)
	{
		write(fd, str, 1);
		str++;
	}
}

void	display_file(const char *filename)
{
	int		fd;
	int		bytes_read;
	char	buffer[BUFFER_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr_fd(2, "Cannot read file.\n");
		return ;
	}
	while ((bytes_read) > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		write(1, buffer, bytes_read);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr_fd(2, "File name missing.\n");
	}
	else if (argc > 2)
	{
		ft_putstr_fd(2, "Too many arguments.\n");
	}
	else
	{
		display_file(argv[1]);
	}
	return (0);
}
