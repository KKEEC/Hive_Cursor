/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:43 by kkc               #+#    #+#             */
/*   Updated: 2024/11/06 11:57:52 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *block, int c, unsigned int size)
{
	unsigned char	*cptr;
	unsigned char	key;
	unsigned int	i;

	cptr = (unsigned char *)block;
	key = (unsigned char)c;
	i = 0;
	while (i < size)
	{
		cptr[i] = key;
		i++;
	}
	return (block);
}
