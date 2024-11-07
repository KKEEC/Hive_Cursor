/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:08:31 by kkc               #+#    #+#             */
/*   Updated: 2024/11/07 15:24:10 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static size_t ft_strlen(const char *str)
{
	while(str[i])
	{
		i++;
	}
	return (i);
}

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	srcl;
	size_t	dstl;
	size_t	i;

	srcl = ft_strlen(src);
	dstl = ft_strlen(dst);
	i = 0;
	while (size <)
}
