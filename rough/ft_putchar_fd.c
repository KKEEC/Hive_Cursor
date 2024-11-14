/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:07:20 by kkc               #+#    #+#             */
/*   Updated: 2024/11/14 18:59:53 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main()
{

         int fd; 
	 fd = open("mytest.txt", O_WRONLY | O_TRUNC | O_CREAT, 777);
	 if (fd == -1)
		 return (1);
         ft_putchar_fd('x', fd);

	 close(fd);
}
