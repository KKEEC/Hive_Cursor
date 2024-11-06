/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:00:53 by kkc               #+#    #+#             */
/*   Updated: 2024/11/06 12:02:47 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(const char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	int		j;
	void	*match;

	j = ft_strlen(str) - 1;
	match = 0;
	while (str[j] >= 0)
	{
		if (str[j] == c)
		{
			match = (char *)&str[j];
			break ;
		}
		else
			j--;
	}
	return ((char *)match);
}
