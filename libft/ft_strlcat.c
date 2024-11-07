/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:48:29 by kkc               #+#    #+#             */
/*   Updated: 2024/11/07 15:52:00 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *to, const char *from, unsigned int size)
{
	unsigned int	destl;
	unsigned int	srcl;
	unsigned int	i;
	unsigned int	j;

	destl = ft_strlen(to);
	srcl = ft_strlen(from);
	i = 0;
	j = destl;
	if (destl < size - 1 && size > 0){
		while (from[i] && ((destl + i) < (size - 1)))
		{
			to[j] = from[i];
			i++;
			j++;
		}
		to[j] = 0;
	}
	if (destl >= size)
		destl = size;

	return (destl + srcl);
}
