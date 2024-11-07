#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>
static unsigned int     ft_strlen(const char *str)
{
        unsigned int    i;

        i = 0;
        while (str[i])
        {
                i++;
        }
        return (i);
}

size_t     ft_strlcat(char *to, const char *from, unsigned int size)
{
        unsigned int    destl;
        unsigned int    srcl;
        unsigned int    i;

        destl = ft_strlen(to);
        srcl = ft_strlen(from);
        i = 0;
        if (size <= destl)
                return (int)(size + srcl);
        while (from[i] != '\0' && ((destl + i) < (size - 1)))
        {
                to[destl + i] = from[i];
                i++;
        }
        to[destl + i] = '\0';
        return (int)(destl + srcl);
}
 int main() 
 {
    char dest[15] = "rrrrrrrrrrrrrrr";
    char dest1[15] = "rrrrrrrrrrrrrrr";
    char d[14] = "rrrrrrrrrrrrrr";
    char d1[14] = "rrrrrrrrrrrrrr";
    size_t x = ft_strlcat(dest, "lorem ipsum dolor sit amet", 5);
    size_t y = strlcat(dest1, "lorem ipsum dolor sit amet", 5); 
    size_t a = ft_strlcat(d, "lorem ipsum dolor sit amet", 15);
    size_t b = strlcat(d1, "lorem ipsum dolor sit amet", 15);
    printf("my func: %s\n %zu \n", dest, x);
    printf("ny func: %s\n %zu \n", dest1, y);
    printf("my func: %s\n %zu \n", d, a);
    printf("ny func: %s\n %zu \n", d1, b);

    
      return (0);


   }
