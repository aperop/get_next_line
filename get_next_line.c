/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 04:50:57 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/11/07 17:39:36 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_buf(int fd, char *stat_str)
{
	char		*buffer;
	ssize_t		read_bytes;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(*buffer));
	if (!buffer)
		return (NULL);
	read_bytes = 1;
	while (read_bytes != 0 && !ft_strchr(stat_str, '\n'))
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buffer);
			return (NULL);
		}
		*(buffer + read_bytes) = '\0';
		if (!stat_str)
		{
			stat_str = (char *)malloc(1 * sizeof(*stat_str));
			*stat_str = '\0';
		}
		stat_str = ft_strjoin(stat_str, buffer);
	}
	free(buffer);
	return (stat_str);
}

char	*get_next_line(int fd)
{
	char		*str;
	static char	*stat_str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stat_str = ft_read_buf(fd, stat_str);
	if (!stat_str)
		return (NULL);
	str = ft_get_str(stat_str);
	stat_str = ft_remainder(stat_str);
	return (str);
}

/*
int	main(void)
{
	char	*line;
	int		fd;

	fd = 0;//open("file1", 0);
	while (1)
	{
		line = get_next_line(fd);
		printf("%s", line);
		if (!line)
		{
			free(line);
			break ;
		}
		free(line);
	}
	close(fd);
	return (0);
}
*/