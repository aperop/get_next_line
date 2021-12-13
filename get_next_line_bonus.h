/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 23:03:05 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/12/13 13:13:03 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

# include <stdlib.h>
# include <unistd.h>

# include <fcntl.h>
# include <stdio.h>

char	*get_next_line(int	fd);
size_t	ft_strlen(const char	*s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char	*s, int	c);
char	*ft_get_str(char	*stat_str);
char	*ft_remainder(char	*stat_str);
char	*ft_read_buf(int fd, char *stat_str);

#endif