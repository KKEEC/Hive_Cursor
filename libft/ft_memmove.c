/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:29:03 by kkc               #+#    #+#             */
/*   Updated: 2024/11/06 19:38:29 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	fwd(unsigned char *to, const unsigned char *from, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		to[i] = from[i];
		i++;
	}
}

static void	bwd(unsigned char *to, const unsigned char *from, size_t size)
{
	while (size > 0)
	{
		size--;
		to[size] = from[size];
	}
}

void	*ft_memmove(void *to, const void *from, size_t size)
{
	if (!to || !from)
		return (NULL);
	//destination memory region is before source to copy formward
	if (to < from)
		fwd((unsigned char *)to, (const unsigned char *)from, size);
	//otherwise copy backward to handle overlap
	else
		bwd((unsigned char *)to, (const unsigned char *)from, size);
	return (to);
}
