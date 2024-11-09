/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:19:23 by kkc               #+#    #+#             */
/*   Updated: 2024/11/09 15:33:27 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int		ft_isalpha(char c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, unsigned int size);
void	*ft_memset(void *block, int c, unsigned int size);
void	ft_bzero(void *block, unsigned int size);
void	*ft_memchr(const void *block, int c, unsigned int size);
void	*ft_memcpy(void *to, const void *from, unsigned int size);
int		ft_memcmp(const void *a1, const void *a2, unsigned int size);
void	*ft_memmove(void *to, const void *from, unsigned int size);
int	ft_strlcpy(char *to, const char *from, unsigned int size);
int	ft_strlcat(char *to, const char *from, unsigned int size);
int	ft_atoi(const char *str);
char    *ft_strnstr(const char *big, const char *little, unsigned int len);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);

#endif
