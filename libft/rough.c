#include <string.h>
#include <stdio.h>
char*    ft_strchr(const char *string, int c)
{
    int    i;
    
    i = 0;
   
      
    while(string[i] != '\0')
    {
      if (string[i] == c)
      {
	      return ((char *string[i]));
      }
      else
	      return (NULL);
      i++;
    }
    

}

int main(void)
{
    const char* string = "Hello";
    int c = 'l';
    printf("return value my func: %s \n", ft_strchr(string, c));
    printf("return value inbuilt func: %s \n", strchr(string, c));


}
