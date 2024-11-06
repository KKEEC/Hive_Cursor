/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:17:55 by kkc               #+#    #+#             */
/*   Updated: 2024/11/06 19:24:43 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	*returnnull(void)
{
	void	*n;

	n = 0;
	return (n);
}

static void	cf(unsigned char *d, const unsigned char *sc, unsigned int l, unsigned int s)
{
	if (d < sc)
	{
		while (l < s)
		{
			d[l] = sc[l];
			l++;
		}
	}
}

void	*ft_memmove(void *to, const void *from, unsigned int size)
{
	unsigned int	i;
	unsigned char	*ptrto;
	const unsigned char	*ptrfrom;

	i = 0;
	ptrto = (unsigned char *)to;
	ptrfrom = (unsigned char *)from;
	if (!to || !from)
		return (returnnull());
/*	if (ptrto < ptrfrom)
	{
		while (i < size)
		{
			ptrto[i] = ptrfrom[i];
			i++;
		}
	}*/
	cf(ptrto, ptrfrom, i, size);
	else
	{
		i = size;
		while (i > 0)
		{
			ptrto[i - 1] = ptrfrom[i -1];
			i--;
		}
	}
	return (to);
}
