/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:48:19 by kkc               #+#    #+#             */
/*   Updated: 2024/11/14 13:55:49 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *newcontent;

	newcontent = malloc(sizeof(t_list));
	if (!newcontent)
		return (NULL);
	newcontent->content = content;
	elem->next = NULL;
	return (newcontent);
}
