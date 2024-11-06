/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:55:11 by kkc               #+#    #+#             */
/*   Updated: 2024/11/06 17:25:00 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *a1, const void *a2, unsigned int size)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	unsigned int		i;

	s1 = (const unsigned char *)a1;
	s2 = (const unsigned char *)a2;
	i = 0;
	while (i < size)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((int)s1[i] - (int)s2[i]);
	}
	return (0);
}
