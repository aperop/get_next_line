/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 23:03:05 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/11/03 23:03:06 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int	fd);
size_t	ft_strlen(const char	*s);
char	*ft_strjoin(char const	*s1, char const	*s2);
char	*ft_strchr(const char	*s, int	c);
char	*ft_get_str(char	*stat_str);
char	*ft_remainder(char	*stat_str);

char	*ft_read_buf(int fd, char *stat_str);



#endif