/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pratanac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:48:09 by pratanac          #+#    #+#             */
/*   Updated: 2022/03/04 19:45:01 by pratanac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *input)
{
	size_t	len;

	len = 0;
	while (input[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_substr(char *s, unsigned int start)
{
	char	*sub;
	size_t	len;
	size_t	count;

	len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		len = 0;
	sub = (char *)malloc(sizeof(*s) * (len + 1));
	if (!s || !sub)
		return (NULL);
	count = 0;
	while (start < ft_strlen(s) && (count < len))
	{
		sub[count++] = s[start++];
	}
	sub[count] = '\0';
	return (sub);
}

void	*ft_calloc(size_t num, size_t size)
{
	char	*pointer;
	size_t	count;

	pointer = malloc(num * size);
	count = 0;
	if (!pointer)
		return (NULL);
	while (count < (num * size))
	{
		pointer[count] = '\0';
		count++;
	}
	return ((void *)pointer);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*join;
	size_t	count;
	size_t	len;

	join = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	len = 0;
	if (!join || !s1 || !s2)
		return (NULL);
	count = 0;
	while (s1[count])
	{
		join[len++] = s1[count++];
	}
	count = 0;
	while (s2[count])
	{
		join[len++] = s2[count++];
	}
	join[len] = '\0';
	return (join);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (char)c)
	{
		if (!*str)
			return (NULL);
		str++;
	}
	return (str);
}
