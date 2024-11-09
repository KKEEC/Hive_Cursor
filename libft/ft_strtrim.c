/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:31:27 by kkc               #+#    #+#             */
/*   Updated: 2024/11/09 19:38:25 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_strleng(const char *string)
{
	size_t	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

static size_t	ft_firstunmatch(const char *str, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if(str[i] == set[j])
				break;
			j++;
		}
		if (set[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}

static size_t	ft_lastunmatch(const char *str, char const *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(str);
	while (i > 0)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (str[i - 1] == set[j])
				break;
			j++;
		}
		if (set[j] != '\0')
		{
			return i;
		}
		i--;
	}
	return (0);
}
void	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	size_t	resultlen;
	char *result;
	size_t	i;

	i = 0;
	first = ft_firstunmatch(s1, set);
	last = ft_lastunmatch(s1, set);
	resultlen = last - first;
	result = malloc(resultlen * sizeof(char) + 1);
	if (!result)
		return (NULL);
	while (i < resultlen)
	{
		result[i] = s1[first + i];
		i++;
	}
	result[i] = '\0';
	return result;

	
}
