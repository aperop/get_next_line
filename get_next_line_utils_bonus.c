/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhawkgir <dhawkgir@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 05:00:05 by dhawkgir          #+#    #+#             */
/*   Updated: 2021/11/07 16:42:16 by dhawkgir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (*(s + i) != (char)c && *(s + i))
		i++;
	if (*(s + i) == (char)c)
		return ((char *)s + i);
	else
		return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	count1;
	size_t	count2;
	char	*s;

	if (!s1 || !s2)
		return (0);
	s = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(*s));
	if (!s)
		return (0);
	count1 = 0;
	count2 = 0;
	while (*(s1 + count1))
	{
		*(s + count1) = *(s1 + count1);
		count1++;
	}
	while (*(s2 + count2))
		*(s + count1++) = *(s2 + count2++);
	*(s + count1) = '\0';
	free(s1);
	return (s);
}

char	*ft_get_str(char	*stat_str)
{
	char	*str;
	int		index;

	index = 0;
	if (!*stat_str)
		return (NULL);
	while (*(stat_str + index) && *(stat_str + index) != '\n')
		index++;
	str = (char *)malloc(sizeof(*str) * (index + 2));
	if (!str)
		return (NULL);
	index = 0;
	while (*(stat_str + index) && *(stat_str + index) != '\n')
	{
		*(str + index) = *(stat_str + index);
		index++;
	}
	if (*(stat_str + index) == '\n')
	{
		*(str + index) = *(stat_str + index);
		index++;
	}
	*(str + index) = '\0';
	return (str);
}

char	*ft_remainder(char	*stat_str)
{
	char	*str;
	int		count;
	int		index;

	index = 0;
	count = 0;
	while (*(stat_str + index) && *(stat_str + index) != '\n')
		index++;
	if (!*(stat_str + index))
	{
		free(stat_str);
		return (NULL);
	}
	str = (char *)malloc(sizeof(*str) * (ft_strlen(stat_str) - index + 1));
	if (!str)
		return (NULL);
	index++;
	while (*(stat_str + index))
		*(str + (count++)) = *(stat_str + (index++));
	*(str + count) = '\0';
	free(stat_str);
	return (str);
}
