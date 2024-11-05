#include <stdio.h>
#include <bsd/string.h>
static unsigned int	ft_strlen(const char *str)
{
	unsigned int	i;
	i = 0;
	while(str[i] != '\0')
	{
		i++;	
	}
	return (i);
}

size_t	ft_strlcpy (char *to, const char *from, size_t size)
{
	size_t	j;
	size_t	lenfrom;
	
	lenfrom = ft_strlen(from);
	j = 0;
	if (size > 0)
	{
		while (j < size - 1 && from[j] != '\0')
		{
			to[j] = from[j];
			j++;
		}
		to[j] = '\0';
	}
	return(lenfrom);
}

int	main(void)
{
	char dest[20] = "Hello";
	char dest1[20] = "Hello";
	const char *src = "world! is a fun place";
	unsigned int ui = 6;
	unsigned long ui1 = 6;
	printf("my strlcpy return %i \n", ft_strlcpy(dest, src, ui));
	printf("Resulting dest: %s\n", dest);
	printf("strlcpy return %zu \n", strlcpy(dest1, src, ui1));
        printf("Resulting dest: %s\n", dest1);

}

