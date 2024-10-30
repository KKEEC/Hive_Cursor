#include <string.h>
#include <stdio.h>
char*	ft_strchr(const char *string, int c)
{
	int	i;
	char	*object;
	int	j;
	
	i = 0;
	j = 0;
	while (string[i] != '\0')
	{
		if (string[i] == c)
		{
			while(string[i] != '\0')
			{
				object[j] = string[i];
				i++;
				j++;
			}
			return (object);
		}
		i++;
	}
	return(NULL);
}

int main(void)
{
	const char* string = "Hello";
	int c = 'l';
	printf("return value my func: %s \n", ft_strchr(string, c));
	printf("return value my func: %s \n", strchr(string, c));


}
