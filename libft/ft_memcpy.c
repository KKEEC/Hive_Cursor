/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:06:07 by kkc               #+#    #+#             */
/*   Updated: 2024/11/06 12:07:50 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *to, const void *from, unsigned int size)
{
	unsigned int	i;
	char			*dest;
	char			*src;

	dest = (char *)to;
	src = (char *)from;
	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (to);
}
