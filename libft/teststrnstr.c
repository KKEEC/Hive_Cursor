#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>



char    *ft_strnstr(const char *big, const char *little, size_t len)
{
        size_t  i;      
        size_t  j;      

        i = 0;
        if (little[0] == '\0')
                return ((char *)big);
        while (big[i] != '\0')
        {
                j = 0;
                while (big[i + j] == little[j] && (i + j) < len)
                {
                        if (big[i + j] == '\0' && little[j] == '\0')
                                return ((char *)&big[i]);
                        j++;
                }
                if (little[j] == '\0')
                        return ((char *)big + i);
                i++;
        }
        return (0);
}

int main()
{
  const char hay[200] = "lorem ipsum dolor sit amet";
  const char needle[10] = "lorem";
  size_t length = 15;
  
  printf("%s", ft_strnstr(hay, needle, length));
  printf("%s", strnstr(hay, needle, length));
  }
