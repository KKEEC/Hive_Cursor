/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:01:41 by kkc               #+#    #+#             */
/*   Updated: 2024/11/13 13:29:10 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_countsigndigit(int n)
{
	int digit;
	digit = 0;
	if (n <= 0)
		digit = digit + 1;
	while (n)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char 	*container;
	int	totaldigit;
	int	sign;
	int	i;
	sign = 0;
	i = 0;
	if (n < 0)
	{
		sign = 1;
		n = n * (-1);
	}
	totaldigit = ft_countsigndigit(n) + sign;
	container = (char *)malloc(sizeof(char) * (totaldigit + 1));
	if (!container)
		return (NULL);
	container[totaldigit] = '\0';
	if (sign == 1)
	{
		container[ i] = '-';
		container[--totaldigit] = -(n % 10) + '0';
		n = -(n / 10);
	}
	printf("%d", totaldigit);
}
