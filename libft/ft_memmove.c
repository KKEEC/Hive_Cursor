/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:23:44 by kkc               #+#    #+#             */
/*   Updated: 2024/11/06 11:47:14 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *to, const void *from, unsigned int size)
{
	unsigned int	i;
	char			*ptrto;
	const char		*ptrfrom;

	ptrto = (char *)to;
	ptrfrom = (const char *)from;
	i = 0;
	while (i <= size)
	{
		if (i == size)
			ptrto[i - 1] = ptrfrom[i - 1];
		else
			ptrto[i] = ptrfrom[i];
		i++;
	}
	return (to);
}
