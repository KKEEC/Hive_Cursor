#include <string.h>
#include <stdio.h>
static int ft_strlen(const char* string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}
char*	ft_strrchr(const char *str, int c)
{
	int	i;
	void*	match;

	i = ft_strlen(str) - 1;
	match = 0;
	while (str[i] >= 0)
	{
		if (str[i] == c)
		{
			match = (char *)&str[i];
			break;
		}
		else
			i--;
	}
	return ((char *)match);
}


int main(void)
{
    const char* string = "Hello";
    int c = 'l';
    int b = 'h';
    printf("return value my func: %s \n", ft_strrchr(string, c));
    printf("return value inbuilt func: %s \n", strrchr(string, c));

	return (0);
}
