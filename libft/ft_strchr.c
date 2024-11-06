/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:08:15 by kkc               #+#    #+#             */
/*   Updated: 2024/11/06 16:35:53 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int		i;
	void	*match;

	i = 0;
	match = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			match = (char *)&str[i];
			break ;
		}
		else
			i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return ((char *)match);
}
