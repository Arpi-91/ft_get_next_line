/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ararakel <ararakel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 16:04:57 by ararakel          #+#    #+#             */
/*   Updated: 2025/04/07 18:46:01 by ararakel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		count ++;
	}
	return (count);
}

char	*ft_strchr(const char *c, int ch)
{
	int	i;

	i = 0;
	while (c[i])
	{
		if (c[i] == (char)ch)
			return ((char *)&c[i]);
		i++;
	}
	if ((char)ch == '\0')
		return ((char *)(c + i));
	return (NULL);
}


char	*ft_strdup(const char *s1)
{
	char		*ptr;
	size_t		i;

	ptr = (char *)malloc(ft_strlen(s1) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}



static void	ft_concat(char const *s1, char const *s2, char *s_join, int len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i + j <= len)
	{
		while (i < ft_strlen(s1))
		{
			s_join[i + j] = s1[i];
			i++;
		}
		s_join[i + j] = s2[j];
		j++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*s_join;

	if (!s1 || !s2)
	{
		if (s1)
			s_join = ft_strdup(s1);
		else if (s2)
			s_join = ft_strdup(s2);
		else
			s_join = ft_strdup("");
		return (s_join);
	}
	len = ft_strlen(s1) + ft_strlen(s2);
	s_join = (char *)malloc(len + 1);
	if (!s_join)
		return (NULL);
	ft_concat(s1, s2, s_join, len);
	return (s_join);
}


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (start > (size_t)ft_strlen(s))
		return (ft_strdup(""));
	if ((size_t)ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}