/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:42:41 by kkc               #+#    #+#             */
/*   Updated: 2024/11/11 17:42:45 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_countchar(char const *str, char c)
{
    size_t  i;
    size_t  count;

    i = 0;
    count = 0;
    while (str[i])
    {
        if (str[i] == c)
            count++;
        i++;
    }
    return (count);
}

char **ft_split(char const *s, char c)
{
    char    **result;
    size_t  slen;
    size_t  nstrs;
    size_t  firststr;
    size_t  firstchr;
    size_t  i;
    size_t  j;
    size_t  k;
    
    slen = ft_strlen(s);
    nstrs = ft_countchar(s, c) + 1;
    result = malloc((nstrs + 1) * sizeof(char *));
    if (!result)
      return (NULL);
    i = 0;
    j = 0;
    k = 0;
    firststr = 0;
    firstchr = 0;
    while (i <= slen)
    {
      if (s[i] == c || s[i] == '\0')
      {
        result[firststr] = malloc((i - firstchr) + 1);
        if (!result[firststr])
        {
          while (j < firststr)
          {
            free(result[j]);
            j++;
          }
          free (result);
          return (NULL);
        }
        k = firstchr;
        while (k < i)
        {
          result[firststr][k - firstchr] = s[k];
          k++;
        }
        result[firststr][i - firstchr] = '\0';
        firststr++;
        firstchr = i + 1;
      }
      i++;
    }
    result[firststr] = NULL;
    return (result);
    
}