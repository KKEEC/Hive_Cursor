/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:58:21 by kkc               #+#    #+#             */
/*   Updated: 2024/11/06 12:00:24 by kkc              ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *to, const char *from, unsigned int size)
{
	unsigned int	j;
	unsigned int	lenfrom;

	lenfrom = ft_strlen(from);
	j = 0;
	if (size > 0)
	{
		while (j < size - 1 && from[j] != '\0')
		{
			to[j] = from[j];
			j++;
		}
		to[j] = '\0';
	}
	return (lenfrom);
}
